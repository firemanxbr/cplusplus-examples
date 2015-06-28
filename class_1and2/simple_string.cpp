/*
 * =====================================================================================
 *
 *       Filename:  simple_string.cpp
 *
 *    Description:  Simple string example
 *
 *        Version:  1.0
 *        Created:  06/28/2015 11:35:57 AM
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
	string mystring;

	mystring = "This is the initial string content";
	cout << mystring << endl;
	mystring = "This is a different string content";
	cout << mystring << endl;
	return 0;
}
