/**
 * \file	Fish.cpp
 * \brief	Implementation file for the Fish class
 *
 * \author	Richard Degenne
 * \date	Tue Feb 10 19:12:28 CET 2015
 */

#include "Fish.hpp"

using namespace std;

/**
 * \brief	Fish constructor.
 * \param	_name	The fish's name
 * \param	_sex	The fish's sex
 */
Fish::Fish(string _name, Sex _sex): name(_name), sex(_sex) {
	
}


/**
 * \brief	Prints out a fish's information on a stream.
 * \details	Format: "Name: <name>	Sex: [M|F]"
 * \param	stream	The stream to print on.
 */
void Fish::print_to(ostream& stream) const {
	stream << "Name: " << name << "\tSex: ";
	if(sex == MALE) {
		cout << 'M';
	}
	else {
		cout << 'F';
	}
}


/**
 * \brief	Output operator overload
 * \details	This is a friend function, not a member method of the Fish class.
 * \param	stream	The stream to print on.
 * \param	f	The fish to print.
 * \see	print_to()
 */
ostream& operator<<(ostream& stream, Fish const& f) {
	f.print_to(stream);
	return stream;
}
