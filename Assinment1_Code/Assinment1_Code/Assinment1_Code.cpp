// Assinment1_Code.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
	string adveturesName, YesOrNO, Choice, Weapon, GreatAxe, GoldenSward, MagicalWond, fistsOfFury, action, TheCliffs, pathChosen, TheForest, Restart, correct;
	string incorrect;//strings for all the code
	int WeaponOfChoice, path, again, investegate, LeverPull;// intragers for the code 


	cout << "-----------------\n";//title
	cout << "-Adventure-Quest-\n";//title
	cout << "-----------------\n";//title

	cout << "What's your advetures name?\n";//Characters neme being collected
	cin >> adveturesName;//Charaters name Input

	while (true)//while loop is true
	{
		cout << "would you like to continue with " << adveturesName << " as your name? no[1], yes[2] \n";//Asking if the namme they put in is correct
		cin >> again;//Answer y/n||Y\N

		if (again == 1)//if agin is = to 1
		{
			cout << "What's your advetures name?\n";//Characters neme being collected
			cin >> adveturesName;//Charaters name Input
			break;
		}
		else if (again == 2)//if agin is = to 2
		{
			cout << "Lets continue shall we";
			break;
		}
		else(again);//if agin isnt 1/2
		{
			cout << "That wasnt a valid input try again\n";
		}
	}

	cout << "You have made it " << adveturesName << " lets start the quest shall we.\n";//Narrative
	cout << "You hesetently agree but its only the beging.\n";//Narrative
	cout << "The next morning\n";//Narrative
	cout << "You wake up in a small town, not knowing of the quest that lies ahead!\n";//Narrative

	cout << adveturesName << " Your awake, now lets get you some gear.\n";//Narrative
	cout << adveturesName << " Your lucky we haev a fine choice of weapons for you!\n";

	while (true)//while loop is true
	{
		cout << "Now chose  between all 3 of theses fine weapons (GreatAxe[1], GoldenSward[2], MagicalWond[3] ).\n";
		cin >> WeaponOfChoice;

		if (WeaponOfChoice == 1)//loop for each choice(GreatAxe)
		{
			cout << "You have chosen the GreatAxe what a fine choice.\n";
			Weapon = GreatAxe;
			break;


		}
		else if (WeaponOfChoice == 2)//loop for each choice(GoldenSward)
		{
			cout << "You have chosen the GoldenSward an adventure of fine tast i see.\n";
			Weapon = GoldenSward;
			break;
		}
		else if (WeaponOfChoice == 3)//loop for each choice(MagicalWond)
		{
			cout << "You have chosen the MagicalWond, i see your a mage wanna be very well so be it.\n";
			Weapon = MagicalWond;
			break;
		}
		else(WeaponOfChoice);//if the statment is incorrect 
		{
			cout << "i see your being stubben but you must chose a weopon. \n";
		}
	}

	cout << adveturesName << " With your " << WeaponOfChoice << "lets go shall we\n";

	while (true)//while loop is true
	{
		cout << "You leave the town and now you are on your way what path would you like to take?\nthe Forest[1], The Cliffs[2] ";
		cin >> path;// input the path

		if (path == 1)// if the input for path is 1
		{
			cout << "The Forest you have chosen.\n";// contiues the story
			pathChosen = TheForest;//sets path chosen to TheForest
			break;
		}
		else if (path == 2)// if the input for path is 2
		{
			cout << "The Cliffs you have chosen.\n";// contiues the story
			pathChosen = TheCliffs;//sets path chosen to TheCliffs
			break;
		}
		else(path);//any other input
		{

			cout << "Thats not a valid choice.\n";

		}
	}

	cout << "You walk with your weapon at hand stumbling through the " << pathChosen << "fers and ready to fight\n";

	while (true)//while loop is true
	{
		cout << "theres a noise from the bushes do you investegate? no[1], yes[2]";
		cin >> investegate;

		if (investegate == 1)//loop for each investegate no
		{
			cout << "You run, Luckily a bear jups from the bushes and you draw your. " << Weapon;

			break;
		}
		else if (investegate == 2)//loop for each investegate yes
		{
			cout << "You look at where the noise is comming from and consider it but walk away isnsted.\n";
			break;
		}
		else(investegate);//if anything but 1/2 is chosen
		{
			cout << "Your have input was invilid try again\n";
		}

	}
	cout << "you fignt off the bear and continue forword\n";//Narrative
	cout << "You see a town a head marekd keep out \n";//Narrative
	cout << "You go to investagate \n";//Narrative
	cout << "its empty but there is a note on a cahair you read it it states\n";//Narrative
	cout << "please dont pull the lever next to the door Thank you, Sam\n";//Narrative

	while (true)//while loop is true
	{
		cout << "do you want to pull the lever? no[1], yes[2]\n";//Leverpull qustion for the final boss
		cin >> LeverPull;

		if (LeverPull == 1)//loop for leverpull no
		{
			cout << "You considerit and walk away but a strong gust of wind blows you bac k in to it breaking it";//Narrative
			cout << "The grund rumbles then a worm the size of a house appers\n";//Narrative
			cout << "you draw your " << Weapon << " and brace for combat";//Narrative
			break;
		}
		else if (LeverPull == 2)//loop for leverpull yes
		{
			cout << "you consider pulling the lever then you do\n";//Narrative
			cout << "The grund rumbles then a worm the size of a house appers\n";//Narrative
			cout << "you draw your " << Weapon << " and brace for combat";//Narrative
			break;
		}
		else if (LeverPull)//if anything but 1/2 is chosen
		{
			cout << "Your have input was invilid try again\n";
		}
	}

	cout << "You fight the forucius worm but in the corner of your eye you see a torch and some oil.\n";//Narrative
	cout << "You dash towrds it and by throwing your " << Weapon << " at the worm you get to it.\n";//Narrative
	cout << "You pour it allover the floor and wait for the worm to get to you.\n";//Narrative
	cout << "Last second you jump out the way throwing the torch and blowing up the worm.\n";//Narrative
	cout << "and thats when " << adveturesName << " vous nvere to adventure again.";//ending
}



