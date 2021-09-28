#include"Quiz.h"
#include<iostream>

Quiz::Quiz()
{
	correct = 0;
	choice = 0;
	count = 0;
}

Quiz::Quiz(int choice, int correct,int count)
{
	this->correct = correct;
	this->choice = choice;
	this->count = count;
}

void Quiz::showMenu()
{
	cout << "*******************************************\n";
	cout << "****************** M E N U ****************\n";
	cout << "*******************************************\n";
	cout << "1.Personal Details.\n";
	cout << "2.Desired employment/Occupational field.\n";
	cout << "3.Work Experience.\n";
	cout << "4.Education and training.\n";
	cout << "5.Personal skills and competences.\n";
	cout << "6.Project\n";
	cout << "7.Exit.\n";
	cout << "*******************************************\n";
	cout << "*******************************************\n";
}


void Quiz::opt()
{
	cout << "******************************************\n";
	cout << "************ Work Experience *************\n";
	cout << "******************************************\n";
	cout << "1.January 2018 - December 2020\n";
	cout << "2.May 2017 - January 2018\n";
	cout << "3.February 2017 - April 2017.\n";
	cout << "4.August 2016 - January 2017.\n";
	cout << "5.April 2016 - August 2016.\n";
	cout << "6.August 2015 - April 2016.\n";
	cout << "7.August 2013 - July 2015.\n";
	cout << "8.Back.\n";
	cout << "9.Exit.\n";
	cout << "******************************************\n";
}

void Quiz::back()
{
	cout << "-------------------------------------------\n";
	cout << "---------------- Return -------------------\n";
	cout << "-------------------------------------------\n";
	cout << "1.Return.\n";
	cout << "2.Exit.\n";
	cout << "-------------------------------------------\n";
}
void Quiz::prj()
{
	cout << "*******************************************\n";
	cout << "**************** Return Menu **************\n";
	cout << "*******************************************\n";
	cout << "1.Print triaNGLe\n";
	cout << "2.Multiplication table.\n";
	cout << "3.Calculate.\n";
	cout << "4.Array.\n";
	cout << "5.QuizTest\n";
	cout << "6.Back.\n";
	cout << "*******************************************\n";
}
void Quiz::print(void* ptr, char type)//Pointer
{//print(&name of varible,'varible function')
	switch (type)
	{
	case 'i':cout << *((int*)ptr) << endl; break;
	case 'c':cout << *((char*)ptr) << endl; break;
	case 'd':cout << *((double*)ptr) << endl; break;
	case 'f':cout << *((float*)ptr) << endl; break;
	}
}

void Quiz::Grade(int result)
{
	if (result > 80)
	{
		cout << "You have '" << result << "%' Correct Answer\n";
		cout << "You Grade is - Exellent ! Grade : 6 \n";
	}
	else if (result > 55)
	{
		cout << "You have '" << result << "%' Correct Answer\n";
		cout << "You Grade is - Very Good ! Grade : 5 \n";
	}
	else if (result > 45)
	{
		cout << "You have '" << result << "%' Correct Answer\n";
		cout << "You Grade is - Good ! Grade : 4 \n";
	}
	else if (result > 35)
	{
		cout << "You have '" << result << "%' Correct Answer\n";
		cout << "You Grade is - Low ! Grade : 3 \n";
	}
	else {
		cout << "You have '" << result << "%' Correct Answer\n";
		cout << "You Grade is - Bad ! Grade : 2 \n";
	}
}


void Quiz::PrintQuest(Quiz name)
{
	for (int i = 0; i < size; i++)
	{
		cout << quest[i] << endl;
		cout << "Choice:";
		cin >> choice;
		system("cls");
		count++;
		Result(choice);
	}
	system("pause>0");
	system("cls");
	Grade(correct);
}

void Quiz::Result(int choice)

{
	while (count < 11)

	{

		if (count ==1)
		{
			if (choice == 3)
			{
				correct += 10;
				cout << "Correct !\n";

			}
			else
			{
				cout << "Incorrect :(\n";
			}
			break;
		}
		else if (count == 2)
		{
			if (choice == 2)
			{
				cout << "Correct !\n";
				correct += 10;
			}
			else
			{
				cout << "Incorrect :(\n";
			}
			break;
		}
		else if (count == 3)
		{
			if (choice == 3)
			{
				cout << "Correct !\n";
				correct += 10;
			}
			else
			{
				cout << "Incorrect :(\n";
			}
			break;
		}
		else if (count == 4)
		{
			if (choice == 1)
			{
				cout << "Correct !\n";
				correct += 10;
			}
			else
			{
				cout << "Incorrect :(\n";
			}
			break;
		}
		else if (count == 5)
		{
			if (choice == 2)
			{
				cout << "Correct !\n";
				correct += 10;
			}
			else
			{
				cout << "Incorrect :(\n";
			}
			break;
		}

		else if (count == 6)
		{
			if (choice == 1)
			{
				cout << "Correct !\n";
				correct += 10;
			}
			else
			{
				cout << "Incorrect :(\n";
			}
			break;
		}

		else if (count == 7)
		{
			if (choice == 1)
			{
				cout << "Correct !\n";
				correct += 10;
			}
			else
			{
				cout << "Incorrect :(\n";
			}
			break;
		}
		else if (count == 8)
		{


			if (choice == 2)
			{
				cout << "Correct !\n";
				correct += 10;
			}
			else
			{
				cout << "Incorrect :(\n";
			}
			break;
		}

		else if (count == 9)
		{
			if (choice == 2)
			{
				cout << "Correct !\n";
				correct += 10;
			}
			else
			{
				cout << "Incorrect :(\n";
			}
			break;
		}
		else if (count == 10)
		{
			if (choice == 3)
			{
				cout << "Correct !\n";
				correct += 10;
				cout << "Click Any Botton\n";
			}
			else
			{
				cout << "Incorrect :(\n";
				cout << "Click Any Botton\n";
			}
			break;
		}
	}
}
