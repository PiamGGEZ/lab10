#include<iostream>
using namespace std;

int main(){
	char grade;
	int count[5] = {}; //Declare array count for counting A,B,C,D,F and initialize all elements to 0
	int X = 1;
	cout << "Please input grade of each student (A-F) or input 0 to exit." << endl;
	do{
		cout << "Student [" << X << "]: ";
		cin >> grade; //The loop must be terminated when grade = '0'
		if(grade == 'A') {
			count[0]++;
		} else if(grade == 'B') {
			count[1]++;
		} else if(grade == 'C') {
			count[2]++;
		} else if(grade == 'D') {
			count[3]++;
		} else if(grade == 'F') {
			count[4]++;
		} else if(grade == '0') {
			break;
		} else {
			cout << "Wrong input. Please input again." << endl;
			continue;
		}
		X++;
	} while(true);
	
	cout << "In total " << X - 1 << " students." << endl;
	cout << "A = " << count[0] << ", ";
	cout << "B = " << count[1] << ", ";
	cout << "C = " << count[2] << ", ";
	cout << "D = " << count[3] << ", ";
	cout << "F = " << count[4] << endl;
	
	return 0;
}
