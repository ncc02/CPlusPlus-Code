#include<iostream>
using namespace std;

int main(){
	int x= 1;
	const int* const p= &x;
	p= NULL;
	*p= 5;
	cout<<p;
}
