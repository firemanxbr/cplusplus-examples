/*
 * =====================================================================================
 *
 *       Filename:  simple_string_cin.cpp
 *
 *    Description:  Simple string with cin example
 *
 *        Version:  1.0
 *        Created:  06/28/2015 11:52:39 AM
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Marcelo Barbosa, firemanxbr@fedoraproject.org
 *
 * =====================================================================================
 */
#include <iostream>
#include <string>

using namespace std;

int main ()
{
	string mystr;
	cout << "What's your name? ";
	getline (cin, mystr);
	cout << "Hello, " << mystr << ".\n";
	cout << "What is your favorite team? ";
	getline (cin, mystr);
	cout << "I like " << mystr << " too!\n";
	return 0;
}
