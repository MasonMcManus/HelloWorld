/*
MasonMcManus
C++ Fa21
Due: September 15th 2021
CIS162
Lab 2 Exploring Output
*/

#include <iostream>

using namespace std;

int main()
{
	//Output schedule to screen
	const string m = "Monday";
	const string tu = "Tuesday";
	const string w = "Wednesday";
	const string th = "Thursday";
	const string f = "Friday";
	const string fct = "8:00"; //fct= first class time
	const string sct = "10:00"; //sct= second class time
	const string tct = "2:00"; //tct= third class time
	const string fcn = "Calculus I 210"; //fcn= first class name
	const string scn = "C++ 162"; //scn= second class name
	const string tcn = "Classical Physics I 212"; //tcn= third class name
	cout << m << "\t\t" << fct << "\t" << fcn << endl;
	cout << m << "\t\t" << sct << "\t" << scn << endl;
	cout << m << "\t\t" << tct << "\t" << tcn << endl;
	cout << endl;
	cout << tu << "\t\t" << fct << "\t" << fcn << endl;
	cout << tu << "\t\t" << sct << "\t" << scn << endl;
	cout << tu << "\t\t" << tct << "\t" << tcn << endl;
	cout << endl;
	cout << w << "\t" << fct << "\t" << fcn << endl;
	cout << w << "\t" << sct << "\t" << scn << endl;
	cout << w << "\t" << tct << "\t" << tcn << endl;
	cout << endl;
	cout << th << "\t" << fct << "\t" << fcn << endl;
	cout << th << "\t" << sct << "\t" << scn << endl;
	cout << th << "\t" << tct << "\t" << tcn << endl;
	cout << endl;
	cout << f << "\t\t" << sct << "\t" << scn << endl;
	cout << endl;
	cout << endl;
	const string fgs = "  *   *   *   *"; //fgs= first group of stars
	const string sgs = "*   *   *   *  "; //sgs= second group of stars
	cout << fgs << endl;
	cout << sgs << endl;
	cout << fgs << endl;
	cout << sgs << endl;
	cout << fgs << endl;
	cout << sgs << endl;
	cout << fgs << endl;
	cout << sgs << endl;
}