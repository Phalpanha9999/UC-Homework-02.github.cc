#include <iostream>
using namespace std;
void sum (double x, double y){
	cout << x+y << "\n";
}
void win ( double x, double y){
	cout << x-y << "\n";
}
void won ( double x, double y){
	cout << x*y << "\n";
}
void why ( double x, double y){
	cout << x/y << "\n";
}

int main (){
	int x,y;
	cout << "Input x= ";
	cin >>x;
	cout << "\nInput y= ";
	cin >>y;
	
sum (x,y);
win (x,y);
won (x,y);
why (x,y);

	return 0;
}