/*
 * =====================================================================================
 *
 *       Filename:  simple_es_io.cpp
 *
 *    Description:  Simple E/S or I/O
 *
 *        Version:  1.0
 *        Created:  06/28/2015 11:01:34 AM
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Marcelo Barbosa, firemanxbr@fedoraproject.org
 *
 * =====================================================================================
 */
#include <iostream>

using namespace std;

int main ()
{
	int number;
	cout << "Please enter one simple number(int): ";
	cin >> number;
	cout << "Number inserted = " << number;
	return 0;
}
