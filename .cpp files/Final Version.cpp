#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

string bot_expressions[15] = {
	"      -BOT| Whats your name, stranger?",
	"      -BOT| Nice to meet you, ",
	"      -BOT| Do you want to talk with me?",
	"      -BOT| Where are you from?",
	"      -BOT| How old are you, ",
	"      -BOT| So you're a student! Where do you study at?",
	"      -BOT|  ! cool",
	"      -BOT| What is your favourite subject?",
	"      -BOT| WoW, is it hard?",
	"      -BOT| So you should have a job! What is it?",
	"      -BOT| WoW! Is it hard to work as a/an ",
	"      -BOT| What's your favourite color",
	"      -BOT| What's your favourite pet?"
};

string name;
string decision_talk;
string city;
int age;
string school;
string subject;
string job;
string color;
string pet;


void draw()
{
	cout << "         __________________________________________________________ " << endl;
	cout << "        |       ____              ___               ___            |" << endl;
	cout << "        |      |                 |   |             |   | |  /      |" << endl;
	cout << "        |      |          _  ___ |___|   __  ___   |   | |_/       |" << endl;
	cout << "        |      |     |_| |_|  |  |    | |  |  |    |   | | \\       |" << endl;
	cout << "        |      |____ | | | |  |  |____| |__|  |    |___| |  \\      |" << endl;
	cout << "        |__________________________________________________________|" << endl << endl << endl;
}

void start()
{
	cout << bot_expressions[0] << endl;
	cout << "      -YOU| ";
	getline(cin, name);

	//do you want to talk with me
	cout << bot_expressions[1] + name << "!" << endl;
	cout << bot_expressions[2] << endl;

	cout << "      -YOU| ";
	cin >> decision_talk;

	if (decision_talk == "Yes" || decision_talk == "yes")
	{
		cout << bot_expressions[3] << endl;
		cout << "      -YOU| ";
		cin >> city;

		cout << bot_expressions[4] << name << "?" << endl;
		cout << "      -YOU| ";
		cin >> age;

		//school
		if (age >= 8 && age <= 19)
		{
			cout << bot_expressions[5] << endl;
			cout << "      -YOU| ";
			cin >> school;

			cout << "      -BOT| " << school + "! cool." << endl;

			cout << bot_expressions[7] << endl;
			cout << "      -YOU| ";
			cin >> subject;

			cout << bot_expressions[8] << endl;
			cout << "      -YOU| ";
			cin >> decision_talk;
		}
		//job
		else if (age >= 20)
		{
			cout << bot_expressions[9] << endl;

			cout << "      -YOU| ";
			cin >> job;

			cout << bot_expressions[10] + job + "?" << endl;
			cout << "      -YOU| ";
			cin >> decision_talk;
		}

		cout << bot_expressions[11] << endl;
		cout << "      -YOU| ";
		cin >> color;

		cout << bot_expressions[12] << endl;
		cout << "      -YOU| ";
		cin >> pet;
	}
	else
	{
		cout << "      -BOT| Well, I didn't wanted too..." << endl;
	}
}

void user_data()
{
	if (age >= 8 && age <= 19)
	{
		cout << "                    _______________________________ " << endl;
		cout << "                   |                                " << endl;
		cout << "                   |   Name: " << name << endl;
		cout << "                   |   Born in: " << city << endl;
		cout << "                   |   Age: " << age << endl;
		cout << "                   |   School: " << school << endl;
		cout << "                   |   Fav subject: " << subject << endl;
		cout << "                   |   Fav color: " << color << endl;
		cout << "                   |   Fav pet: " << pet << endl;
		cout << "                   |_______________________________ " << endl;
		cout << "                  /" << endl;
		cout << "                 /  " << endl;
		cout << "       _  (O > O)  _" << endl;
		cout << "        \\____!____/" << endl;
		cout << "             |" << endl;
		cout << "             |" << endl;
		cout << "             |" << endl;
		cout << "             ^" << endl;
		cout << "            / \\" << endl;
		cout << "          _/   \\_" << endl;
	}

	else if (age >= 20)
	{
		cout << "                    _______________________________ " << endl;
		cout << "                   |                                " << endl;
		cout << "                   |   Name: " << name << endl;
		cout << "                   |   Born in: " << city << endl;
		cout << "                   |   Age: " << age << endl;
		cout << "                   |   Job: " << job << endl;
		cout << "                   |   Fav color: " << color << endl;
		cout << "                   |   Fav pet: " << pet << endl;
		cout << "                   |_______________________________ " << endl;
		cout << "                  /" << endl;
		cout << "                 /  " << endl;
		cout << "       _  (O > O)  _" << endl;
		cout << "        \\____!____/" << endl;
		cout << "             |" << endl;
		cout << "             |" << endl;
		cout << "             |" << endl;
		cout << "             ^" << endl;
		cout << "            / \\" << endl;
		cout << "          _/   \\_" << endl;
	}
}

int main()
{
	draw();
	start();
	user_data();
}