#include <iostream>
#include <string>
using namespace std;

string bot_expressions[10] = {
	"Whats your name, stranger?",
	"Nice to meet you ",
	"Do you want to talk with me?",
	"How old are you ",
	"Where do you study at?",
	"What is your favourite subject?", 
	"Do you have a job?"
};

string name[4];
string decision_talk;
int age;
string school;
string subject;
string job;

void start()
{
	cout << bot_expressions[0] << endl;

	for (size_t i = 0; i < 4; i++)
	{
		cin >> name[i];
	}

	cout << bot_expressions[1] + name[3] << "!" << endl;
	cout << bot_expressions[2] << endl;

	cin >> decision_talk;

	if (decision_talk == "No" || decision_talk == "no")
	{
		cout << "Well, I didn't wanted too" << endl;
	}
	else if (decision_talk == "Yes" || decision_talk == "yes")
	{
		cout << bot_expressions[3] << name[3] << "?" << endl;
	}

	cin >> age;

	if (age <= 18)
	{
		cout << bot_expressions[4] << endl;
		cin >> school;

		cout << bot_expressions[5] << endl;
		cin >> subject;
	}
	else
	{
		cout << bot_expressions[6] << endl;
	}
}

int main()
{
	start();
}