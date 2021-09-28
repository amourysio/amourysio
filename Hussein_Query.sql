-- First Query

SELECT p.* 
FROM dbo.Players AS p
INNER JOIN dbo.Teams AS t 
ON p.PlayersTeam_ID= t.TeamPrimary_ID
WHERE t.TName = 'Lion'

--Second Query

SELECT  TName as TeamName, SUM(wins) as Wins, SUM(Draw) as Draw, SUM(loss) as Loss
FROM 
(
SELECT TName, 
	SUM(CASE WHEN m.Guest_Points = 3  THEN 1 ELSE 0 END) as Wins, 
	SUM(CASE WHEN m.Guest_Points = 1  THEN 1 ELSE 0 END) as Draw, 
	SUM(CASE WHEN m.Guest_Points = 0  THEN 1 ELSE 0 END) as Loss
FROM Matches as m 
INNER JOIN Teams as t
ON m.GuestTeems_ID = t.TeamPrimary_ID
OR m.HomeTeems_ID = t.TeamPrimary_ID
GROUP BY t.TName

UNION ALL 

SELECT TName, 
    SUM(CASE WHEN m.Home_Points = 3  THEN 1 ELSE 0 END) as Wins, 
	SUM(CASE WHEN m.Home_Points = 1  THEN 1 ELSE 0 END) as Draw, 
	SUM(CASE WHEN m.Home_Points = 0  THEN 1 ELSE 0 END) as Loss
FROM Matches as m 
INNER JOIN Teams as t
ON m.GuestTeems_ID = t.TeamPrimary_ID
OR m.HomeTeems_ID = t.TeamPrimary_ID
GROUP BY t.TName
)  AS  A
GROUP BY TName

-- Third Query

SELECT m.Date, t.TName
FROM Matches AS m 
INNER JOIN Teams AS t 
ON m.HomeTeems_ID = t.TeamPrimary_ID 
OR m.GuestTeems_ID= t.TeamPrimary_ID
WHERE t.TName = 'Lion'
ORDER BY m.Date DESC

-- Fourth Query

;WITH temp_winer
AS 
(
SELECT t.TNAME, count(*) AS WinerPoints
FROM Teams AS t
JOIN Matches AS m
ON m.Home_Points = m.Guest_Points
OR m.HomeTeems_ID = t.TeamPrimary_ID
OR m.GuestTeems_ID = t.TeamPrimary_ID
GROUP BY t.TName
)
SELECT *
FROM temp_winer
WHERE WinerPoints > (SELECT count(*)/2 AS Winers FROM Matches WHERE Guest_Points = 3 OR Home_Points = 3) 

-- Fifth Query


CREATE PROC [dbo].[proc_param]
( 
	@paramDate date, 
	@paramTeamName nvarchar(50)
)
AS 
BEGIN TRY

SELECT TName, SUM(Points) AS Points
FROM 
(
SELECT t.TName, SUM(Home_Points)  AS Points 
FROM Matches AS m 
INNER JOIN Teams AS t 
ON m.HomeTeems_ID = t.TeamPrimary_ID
WHERE t.TName = @paramTeamName
AND m.Date <= @paramDate
GROUP BY t.TName

UNION ALL

SELECT t.TName, SUM(Guest_Points) AS Points 
FROM Matches AS m 
INNER JOIN Teams AS t 
ON m.GuestTeems_ID = t.TeamPrimary_ID
WHERE t.TName = @paramTeamName
AND m.Date  <= @paramDate
GROUP BY t.TName
) AS A 
GROUP BY TName
END TRY

BEGIN CATCH 
SELECT  
        ERROR_NUMBER() AS ErrorNumber  
        ,ERROR_SEVERITY() AS ErrorSeverity  
        ,ERROR_STATE() AS ErrorState  
        ,ERROR_PROCEDURE() AS ErrorProcedure  
        ,ERROR_LINE() AS ErrorLine  
        ,ERROR_MESSAGE() AS ErrorMessage;  

END CATCH 


exec proc_param '2021-04-16','Lion'

