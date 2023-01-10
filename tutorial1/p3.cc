#include<iostream>
#include<string>
#include "power.cc"

using namespace std;

int main(){
	int x;
	int y;
	int answer;
	cout<< "Enter two integers" << endl;
	cin >> x;
	cin >> y;
	answer = power(x,y);
	cout << x << " to the power " << y << " is " << answer << endl;
	return 0;
}
