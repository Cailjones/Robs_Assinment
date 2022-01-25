// Assinment1_Code.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

void GameReset()
{

}

int main()
{
	string adveturesName, YesOrNO, Choice, Weapon, GreatAxe, GoldenSward, MagicalWond, fistsOfFury, action, TheCliffs, pathChosen, TheForest;//strings for all the code
	int WeaponOfChoice, path, again, investegate;// intragers for the code
	bool intEnterd = false;// if the answer isnt a int then the bool will detect 
	

	cout << "-----------------\n";//title
	cout << "-Adventure-Quest-\n";//title
	cout << "-----------------\n";//title

	cout << "What's your advetures name?\n";//Characters neme being collected
	cin >> adveturesName;//Charaters name Input

	while (true)
	{
		cout << "would you like to continue with " << adveturesName << " as your name? no[1], yes[2] \n";//Asking if the namme they put in is correct
		cin >> again;//Answer y/n||Y\N

		if (again == 1)
		{
			cout << "What's your advetures name?\n";//Characters neme being collected
			cin >> adveturesName;//Charaters name Input

		}
		else if (again == 2)
		{
			cout << "Lets continue shall we";
			break;
		}
		else if (again == !intEnterd);
		{
			cout << "That wasnt a valid input try again\n";
		}
		while(again)
		{
			cout << "That wasnt a valid input try again\n";
		}
	}

	cout << "You have made it " << adveturesName << " lets start the quest shall we.\n";//Narrative
	cout << "You hesetently agree but its only the beging.";//Narrative
	cout << "The next morning\n";//Narrative
	cout << "You wake up in a small town, not knowing of the quest that lies ahead!\n";//Narrative

	cout << adveturesName << " Your awake, now lets get you some gear.\n";//Narrative
	cout << adveturesName << " Your lucky we haev a fine choice of weapons for you!\n";

	while (true)
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
		else(WeaponOfChoice = intEnterd);//if the statment is incorrect 
		{
			cout << "i see your being stubben but you must chose a weopon \n";
		}
	}

	cout << adveturesName << " With your " << WeaponOfChoice << "lets go shall we\n";

	while (true)
	{
		cout << "You leave the town and now you are on your way what path would you like to take?\nthe Forest[1], The Cliffs[2] ";
		cin >> path;// input the path

		if (path == 1)// if the input for path is 1
		{
			cout << "the Forest you have chosen ";// contiues the story
			pathChosen = TheForest;
			break;
		}
		else if (path == 2)// if the input for path is 2
		{
			cout << "The Cliffs you have chosen ";// contiues the story
			pathChosen = TheCliffs;
			break;
		}
		else(path = intEnterd);//any other input
		{

		  cout << "Thats not a valid choice";

		}
	}

	cout << "You walk with your weapon at hand stumbling through the" << pathChosen << "fers and ready to fight\n";
	
		while (true)
		{
			cout << "theres a noise from the bushes do you investegate? no[1], yes[2]";
			cin >> investegate;

			if (investegate == 1)//loop for each investegate no
			{
				cout << "You run, Luckily a bear jups from the bushes and you draw your " << Weapon ;
				
				break;


			}
			else if (investegate == 2)//loop for each investegate yes
			{
				cout << "You have chosen the GoldenSward an adventure of fine tast i see.\n";
				Weapon = GoldenSward;
				break;
			}
			else if(investegate = intEnterd);//if the statment is incorrect 
			{
				cout << "i see your being stubben but you must chose a weopon \n";
			}
			else
			{

			}
		
			
		}
}



