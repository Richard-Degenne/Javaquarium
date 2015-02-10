/**
 * \file	Aquarium.cpp
 * \brief	Implementation file for the Aquarium class
 *
 * \author	Richard Degenne
 * \date	Tue Feb 10 21:31:44 CET 2015
 */


#include "Aquarium.hpp"

using namespace std;


/**
 * \brief	Aquarium default constructor
 */
Aquarium::Aquarium(): round(0) {

}


/**
 * \brief	Adds a fish to the aquarium
 * \param	f	The fish to add
 */
void Aquarium::add_fish(Fish f) {
	fishes.push_back(f);
}


/**
 * \brief	Adds a seaweed to the aquarium
 * \param	s	The seaweed to add
 */
void Aquarium::add_seaweed(Seaweed s) {
	seaweeds.push_back(s);
}


/**
 * \brief	Goes forward in time. Prints out the state of the aquarium.
 * \details	Prints out the number of seaweeds and the name and sex of every
 *		fish in the aquarium.
 */

void Aquarium::make_round() {
	cout << "Seaweeds: " << seaweeds.size() << endl;
	cout << "Fishes: " << endl;
	for(vector<Fish>::const_iterator i(fishes.begin()) ; i!=fishes.end() ; ++i) {
		cout << "\t* " << *i << endl;
	}
}
