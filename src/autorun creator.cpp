//============================================================================
// Name        : autorun.cpp
// Author      : Brokah Mozis
// Version     : 1.0
// Copyright   : Academic use only
// Description : create autorun for USB and removable drives in C++
//============================================================================

#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
ofstream myfile("autorun.inf");

string autorunProgram;

cout << "\nEnter Autorun target name:\n\n";
cin >> autorunProgram;

string temp = "[autorun]\n\
;Open="+autorunProgram+"\n\
ShellExecute="+autorunProgram+"\n\
UseAutoPlay=1";

if(myfile.is_open()){
	myfile << temp;
	myfile.close();
}
else{
	cout << "Error, try again.";
}
return 0;
}
