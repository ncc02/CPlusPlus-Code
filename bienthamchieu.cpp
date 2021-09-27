#include <iostream>
using namespace std;

int main(){
	int x = 5;
	int &y = x;
	y = 1;
	cout << x << "\n";
	x++;
	cout << y;
}
