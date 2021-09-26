#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	double x= 1234.5;
	cout<<setiosflags(ios::showpoint)<<setprecision(9)<<x;
}
