#pragma once
#include<iostream>
#include<iomanip>

using std::setw;
using std::cin;
using std::endl;
using std::cout;
const int MAX_QUESTION_LENGHT = 120;
const int size = 10;

class Quiz
{
private:
	int opt1,opt2, opt3, opt4;
	int correct;
	int choice;
	int count = 0;
	char quest[10][MAX_QUESTION_LENGHT] =
	{
		"'What is The Smallest Country'\n1.U.K\n2.Bulgaria\n3.Vatican"
		,"'Where are The Happiest People'\n1.China\n2.Finland\n3.Russia"
		,"'Which is the most old Country in Europe'\n1.Germany\n2.Romania\n3.Bulgaria"
		,"'What is the number 'pi' equal to ?'\n1.3.14\n2.4.13\n3.1.14"
		,"'Which is Arabic Numbers ?'\n1.α. β. γ. δ. ε. ϛ. ζ. η. θ\n2.0,1,2,3,4,5,6,7,8,9\n3.I,II,III,IV,V,VI,VII,VIII,IX,Х"
	   ,"'Which Continent has the most Countries ?'\n1.Africa\n2.Europe\n3.North America"
	,"'Who is Leonardo Fibonacci ?'\n1.Mathematician\n2.Author\n3.Physicist"
	, "'How many Countries are in the European Union ?'\n1.21\n2.27\n3.23"
	,"'Which is the largest Mountain in the World ?'\n1.K2\n2.Everest\n3.Nanga Parbat"
	,"'Which is the longest River in the World ?'\n1.Yangtze\n2.Amazon\n3.Nile"
	};

public:
	Quiz();
	Quiz(int choice,int correct,int count);
	void showMenu();
	void opt();
	void back();
	void prj();
	void print(void* ptr, char type);
	void Grade(int result);
	void PrintQuest(Quiz name);
	void Result(int choice);
protected:
};
