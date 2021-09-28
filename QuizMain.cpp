#include<iostream>
#include"Quiz.h"



namespace Options
{
	
}




int main()
{
	int opt1, opt3, opt4 = 0;
	int opt2 = 1;
	Quiz MyProject;
	
	
	do
	{
		MyProject.showMenu();
		cout << "Enter Number:";
		cin >> opt1;
		system("cls");
		switch (opt1)
		{
		case 1:cout << "Personal Detail\n" << "First name(s) / Surname(s) - Hussein Amouri\n" <<
			"Adress - neighborhood: Sveta Troica\n" << "Street: Simeon 331B Nº41\n" << "Phone: +359 988 808 983\n"
			<< "E-mail: amourysio@gmail.com\n" << "Citizenship: Bulgaria\n" << "I live in; Sofia\n" <<
			"Birth date: 03.07.1993\n" << "Gender: Male\n";
			MyProject.back();
			cout << "Enter Number:";
			cin >> opt2;
			if (opt2 == 1)
			{
				system("cls");
				return main();
			}
			else (opt2 == 2);
			{
			}
			break;
		case 2:cout << "Proffesional Progress in IT Industrie\n" << "Dealer (Casino)\n" <<
			"Working with logistics and forwarding companies\n" << "assistant Chef\n" <<
			"bartender\n";
			MyProject.back();
			cout << "Please Enter Number:";
			cin >> opt2;
			system("cls");
			break;
		case 3:
			MyProject.opt();
			cout << "Enter Number:";
			cin >> opt4;
			if (opt4 == 1)
			{
				cout << "Position held \tEvent organization / Coordinator\n" <<
					"Responsibilities  \tSelection and Prepare the right menu for Event,\n" <<
					"\t\t\tCoordinating the right staff for Event.\n" <<
					"Company Name \tV.I.P Cataring \n\n";
			}
			else if (opt4 == 2)
			{
				cout << "Position help \tCroupier\n" << "Responsibilities \tDealer'Casino'\n"
					<< "Company Name \t Palms Mercury\n";
			}
			else if (opt4 == 3)
			{
				cout << "Position held \t Chef\n" << "Responsibilities \t -Making salads and fresh juice\n"
					<< "\t\t\t-Cooking sweets\n" << "\t\t\t- Sale of Bio Products\n" <<
					"Company Name \tFresh Land\n";
			}
			else if (opt4 == 4)
			{
				cout << "Position held \tMaster assistant\n" << "Responsibilities \t -Helper\n"
					<< "\t\t\t-Producing and elaboration of materials for the architectural plans\n"
					<< "\t\t\t-Learning German in professional school (Berufschule)\n"
					<< "Company Name \tEd. Züblin AG\n" << "Location \tJena, Germany\n";
			}
			else if (opt4 == 5)
			{
				cout << "Position held \tWaiter\n" << "Responsibilities \t-Communication with the guests of the hotel\n"
					<< "\t\t\t-Serving food and bevarage\n" <<
					"\t\t\tBanquet halls preparation (make appropriate design according to events)\n"
					<< "Company Name \tHotel Hilton Sofia\n";
			}
			else if (opt4 == 6)
			{
				cout << "Position held \tBaker, Vendor consultant\n" <<
					"Responsibilities \t-Giving an information about the ingredients of the products\n"
					<< "\t\t\t-Baking sweets\n" << "\t\t\t-Selling Home made product\n" <<
					"Company Name \tPatisserie de Provence\n";
			}
			else if (opt4 == 7)
			{
				cout << "Position held \tWarehouse worker\n" <<
					"Responsibilities \tPacking Control\n" <<
					"Company Name \tV-Tac Europe\n";
			}
			else if (opt4 == 8) {
				system("cls");
				return main();
			}
			else {
			}break;
		case 4:cout << "It Step Academy\n" <<
			"November 2020 - Till now\n" <<
			"Software Developer C++..\n" <<
			"--------------------------\n" <<
			"European project 'The job of my life'\n" <<
			"from February 2016 - August 2016\n" <<
			"Intensive learning German 600 lessons. Achieved level B1." <<
			"-------------------------\n" <<
			"NMS 'Sava Filaretov' 113\n" <<
			"September 2007 - May 2012\n" <<
			"Secondary school" <<
			"--------------------------\n";
			MyProject.back();
			cout << "Please Enter Number:";
			cin >> opt2;
			system("cls");
			break;
		case 5:cout << "Personal skills and Competences\n" << "Mother tongue: Bulgarian\n"
			<< "English: B1\n" << "German: B1\n" << "Computer skills and competences:" <<
			"Computer Competency: Linux and Windows\n Microsoft 365,C++,Adobe..\n" <<
			"Other skills and competences\n" << "Ability to work in team\n" <<
			"Skills for managing people\n" << "Skills of responsibility and dedication and purposefulness\n";
			MyProject.back();
			cout << "Please Enter Number:";
			cin >> opt2;
			system("cls");
			break;
		case 6:cout << "My Project\n\n";
			MyProject.prj();
			cout << "Enter Number From Menu:";
			cin >> opt3;
			if (opt3 == 1)
			{
				int num;
				cout << "Please Enter Number:";
				cin >> num;
				char s;
				cout << "Please Enter Symbol:";
				cin >> s;
				system("cls");

				for (int i = num; i > 0; i--)
				{
					int j = num - i;
					cout << setw(i) << " ";
					{
						for (int k = 0; k <= j; k++)
							cout << s;
					}
					cout << endl;
				}
			}
			else if (opt3 == 2)
			{
				int n4;
				cout << "Please enter Number:";
				cin >> n4;
				cout << endl;

				for (int i1 = 1; i1 <= n4; i1++)
				{
					for (int j1 = 1; j1 <= 10; j1++)
					{
						cout << j1 << "*" << i1 << "=" << j1 * i1 << "\t";
					}
					cout << endl;
				}
			}
			else if (opt3 == 3)
			{
				double n = 1;
				int up = 1;
				cout << "PLease Enter Number:";
				cin >> up;
				double algoritm = 0;
				double result = algoritm;
				for (result = algoritm + result; n <= up; n++)
				{
					double i = n + 1;
					algoritm = n / i;
					result = result + algoritm;
					cout << n << "/(" << n << " + " << 1 << ") =" << (n / (n + 1))
						<< "\t         \t+PreResult=" << result << "\t\n"; //res+previousres is result
				}
			}

			else if (opt3 == 4)
			{
				int size;
				cout << "Please Enter Size of Months:";
				cin >> size;
				float* monthsArray = new float[size];
				float total = 0;

				for (int i = 0; i < size; i++)
				{
					cout << "Enter Amount for Month-" << i + 1 << " :";
					cin >> monthsArray[i];
					total += monthsArray[i];
				}
				float average = total / 6;
				float inTwoYears = average * 24;
				cout << "Total=" << total << "$" << endl;
				cout << "Average=" << average << "$" << endl;
				cout << "inTwoYears=" << inTwoYears << "$" << endl;
				delete[]monthsArray;
				monthsArray = NULL;
			}
			else if (opt3 == 5)
			{
			MyProject.PrintQuest(MyProject);
			}
			break;
		}
	} while (opt1 != 7 && opt2 != 2 && opt4 != 9);
	cout << "****************************************************************" << endl;
	cout << "************************ Good Bye :) ***************************" << endl;
	cout << "****************************************************************" << endl;




	return 0;
}