#include<iostream>
using namespace std;

void show(int x=1, int y=2, int z=3){
	cout<<x<<" "<<y<<" "<<z<<"\n";
}

int main(){
	show();
	show(4);
	show(4, 5);
	show(4, 5, 6);
}
