// Assinment1_Code.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


int main()
{
	string adveturesName, YesOrNO, Choice, Weapon, GreatAxe, GoldenSward, MagicalWond, fistsOfFury;
	int WeaponOfChoice;
	//bool again = true;// to allow the progrmam to rename the charactor

	cout << "-----------------\n";//title
	cout << "-Adventure-Quest-\n";//title
	cout << "-----------------\n";//title

	cout << "What's your advetures name?\n";//Characters neme being collected
	cin >> adveturesName;//Charaters name Input

	//cout << "would you like to continue with" << adveturesName << " as your name? y/n";//Asking if the namme they put in is correct
	//cin >> YesOrNO;//Answer y/n

	/*while (again);
	{


		if (YesOrNO == "y" || YesOrNO == "Y")
		{
			cout << "lets continue Shall we\n";// continues with the progeamm after the loop

		}
		else if (YesOrNO == "N" || YesOrNO == "n")
		{

			return again;
		}
	}
	*/

	cout << "You have made it " << adveturesName << " lets start the quest shall we.\n";//Narrative
	cout << "You hesetently agree but its only the beging.";//Narrative
	cout << "The next morning\n";//Narrative
	cout << "You wake up in a small town, not knowing of the quest that lies ahead!\n";//Narrative

	cout << adveturesName << " Your awake, now lets get you some gear.\n";//Narrative
	cout << adveturesName << " Your lucky we haev a fine choice of weapons for you!\n";

	cout << "Now chose between all 3 of theses fine weapons (GreatAxe[1], GoldenSward[2], MagicalWond[3] ).\n";
	cin >> WeaponOfChoice;//WeaponOfChoice input

	if (WeaponOfChoice == 1)//loop for each choice(GreatAxe)
	{
		cout << "You have chosen the GreatAxe what a fine choice.\n";
		Weapon = GreatAxe;

	}
	else if (WeaponOfChoice == 2)//loop for each choice(GoldenSward)
	{
		cout << "You have chosen the GoldenSward an adventure of fine tast i see.\n";
		Weapon = GoldenSward;
	}
	else if (WeaponOfChoice == 3)//loop for each choice(MagicalWond)
	{
		cout << "You have chosen the MagicalWond, i see your a mage wanna be very well so be it.\n";
		Weapon = MagicalWond;
	}
	else
	{
		cout << "i see you dont need a weapon, very well so be it\n";
		Weapon = fistsOfFury;
	}

	cout << "let us continue, this way!!";

}



