#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

char checkSpace(char ch)
{
	if (ch == ' ') return '_';
	else return ch;
}

int main(int argc, char *argv[])
{
	string s1, s2, s3, w;
	stringstream ss1, ss2;

	getline(cin, s1);
	ss1 << s1; // stringstream ss1 usada como stream de saida!

	while (ss1 >> w)
	{ // strinstream ss1 usada como stream de entrada!
		transform(w.begin(), (w.begin()+1), w.begin(), ::toupper);
		cout << "w: " << w << endl;
		ss2 << w;
	}
	s2 = ss2.str();

	transform(s2.begin(), s2.end(), s3.begin(), checkSpace);

	cout << "String original: "               << ss1.str() << endl;
	cout << "String alterada com maiuscula: " << s2 << endl;
	cout << "String alterada com underscore: " << s3 << endl;

	return 0;
}
