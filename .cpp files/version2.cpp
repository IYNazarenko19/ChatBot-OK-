#include <iostream>
#include <string>
using namespace std;

string bot_expressions[10] = {
	"-BOT| Whats your name, stranger?",
	"-BOT| Nice to meet you, ",
	"-BOT| Do you want to talk with me?",
	"-BOT| How old are you, ",
	"-BOT| So you're a student! Where do you study at?",
	"-BOT|  ! cool",
	"-BOT| What is your favourite subject?",
	"-BOT| WoW, is it hard?",
	"-BOT| So you should have a job! What is it?",
	"-BOT| WoW! Is it hard to work as "
};

string name[4];
string decision_talk;
int age;
string school[3];
string subject;
string job[5];

void start()
{
	cout << bot_expressions[0] << endl;

	for (size_t i = 0; i < 4; i++)
	{
		cin >> name[i];
	}

	//do you want to talk with me
	cout << bot_expressions[1] + name[3] << "!" << endl;
	cout << bot_expressions[2] << endl;

	cin >> decision_talk;

	if (decision_talk == "No" || decision_talk == "no")
	{
		cout << "-BOT| Well, I didn't wanted too..." << endl;
	}
	else if (decision_talk == "Yes" || decision_talk == "yes")
	{
		cout << bot_expressions[3] << name[3] << "?" << endl;
	}

	cin >> age;

	//school
	if (age <= 18)
	{
		cout << bot_expressions[4] << endl;

		for (size_t i = 0; i < 4; i++)
		{
			cin >> school[i];
		}

		cout << "-BOT| " << school[3] + "! cool." << endl;

		cout << bot_expressions[6] << endl;
		cin >> subject;

		cout << bot_expressions[7] << endl;
		cin >> decision_talk;
	}
	//job
	else
	{
		cout << bot_expressions[8] << endl;

		for (size_t i = 0; i < 5; i++)
		{
			cin >> job[i];
		}

		cout << bot_expressions[9] + job[3] + " " + job[4] + "?" << endl;
		cin >> decision_talk;
	}
}

int main()
{
	start();
}