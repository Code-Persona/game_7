#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

int health = 1000, attack = 25, defence = 20, enemy_health = 750, enemy_attack = 30, enemy_defence = 20,counter=0;
string user;
string enemy = "Jeffery Zuckermusk";

	
void print() {

		cout << user << endl << "health: " << health << endl << "attack: " << attack << endl << "defence: " << defence << endl;
		cout << enemy << endl << "health: " << enemy_health << endl << "attack: " << enemy_attack << endl << "defence: " << enemy_defence << endl;
		return;
}
void accept() {

	cout << "Enter your character's name" << endl;
	cin >> user;

}
void dialogue() {

	if (counter == 0)
		cout << "I'll never submit to you puny humans! The Lizard People will consume the earth! " << endl;
	else if (counter == 1)
		cout << "Do you drive a Tesla? " << endl;
	else if (counter == 2)
		cout << "Bankai, Sakashima Yokoshima Hapou Fusagari!" << endl;
	else if (counter == 3)
		cout << "Amazon must win!" << endl;
	else if (counter == 4)
		cout << "This code has been tested, unlike the code made by Mr. Mcdermid. After all he is mid! " << endl;
	else
		cout << "Just pick a proper option already man!" << endl;

}

void defend() {

	int damage = enemy_attack - defence * rand() % 30 + 1;
	








	 health - damage;

}

int main() {
		
		accept();
		print();
		int k;
		while (enemy_health > 0 && health > 0) {
			cout << "Choose your option." << endl<< "Option 1: Attack"<< endl << "Option 2: Defend"<<endl << "Option 3: Item" << endl << "Option 4: Run" << endl << "Option 5: Check Stats"
				switch (k) {
				case 1:
					Attack
					break;
				case 2:
					Defend
					break;
				case 3:
					Item
					break;
				case 4:
					Run
					break;
				case 5:
					print();
					break;
				default:
					dialogue();
					break;
				}
			enemy_health--
				if (enemy_health <= 0)
					cout << "Wow you WON!" << endl;
				else
					cout << "Wow you suck, you LOST!" << endl;
		}

		return 0;
}