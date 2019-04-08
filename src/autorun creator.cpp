#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
ofstream myfile("autorun.inf");
string target;

cout << "\nEnter Autorun target name:\n\n";
cin >> target;

string temp = "[autorun]\n\
;Open="+target+"\n\
ShellExecute="+target+"\n\
UseAutoPlay=1";

if(myfile.is_open()){
	myfile << temp;
	myfile.close();
	cout << "...Okay!";
}
return 0;
}
