/*
 * =====================================================================================
 *
 *       Filename:  simple_stringstream.cpp
 *
 *    Description:  Simple stringstream example
 *
 *        Version:  1.0
 *        Created:  06/28/2015 11:57:49 AM
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Marcelo Barbosa, firemanxbr@fedoraproject.org
 *
 * =====================================================================================
 */
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main ()
{
	stringstream ss;
	ss << "This is the initial string content";
	ss << ",";
	ss << " but now we're modifying it!";
	cout << ss.str() << endl;
	return 0;
}
