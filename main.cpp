/**
 * \file	main.cpp
 * \brief	Main program
 *
 * \author	Richard Degenne
 * \date	Tue Feb 10 21:58:44 CET 2015
 */

#include <iostream>
#include <cstdlib>

#include "Aquarium.hpp"

using namespace std;


int main(int argc, char* argv[]) {
	Aquarium a;
	int choice;
	bool quit = false;
	string name;
	char sex;

	cout << "==== Javaquarium ====" << endl;
	while(!quit) {
		do {
			cout << "1. Add a fish" << endl;
			cout << "2. Add a seaweed" << endl;
			cout << "3. Make a round" << endl << endl;
			cout << "0. Quit" << endl;
			cout << "> ";
			cin >> choice;
		} while(choice < 0 || choice > 3);

		switch(choice) {
			case 1: {
				cout << "Name: ";
				cin >> name;
				do {
					cout << "Sex (M/F): ";
					cin >> sex;
				}while(sex != 'M' && sex != 'F');
				Fish f(name, (sex=='M')?MALE:FEMALE);
				a.add_fish(f);
			}
			break;
			case 2: {
				Seaweed s;
				a.add_seaweed(s);
			}
			break;
			case 3: {
				a.make_round();
			}
			break;
			case 0: {
				quit = true;
			}
			break;
			default:
				break;
		}
		cout << "Done." << endl << endl;
	}
	return EXIT_SUCCESS;
}
