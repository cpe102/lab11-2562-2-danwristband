#include<iostream>

using namespace std;

//Write function prototype here
 int gcd(int x,int y);

int main(){
	cout << gcd(25,15) << "\n";
	cout << gcd(144,60) << "\n";
	cout << gcd(60,144) << "\n";
	cout << gcd(1,69) << "\n";
	cout << gcd(17,19) << "\n";
	cout << gcd(51,255) << "\n";
	
	return 0;
}
 int gcd(int x,int y){
 int re=x%y;
	if(re==0){
		return y;
		}
	else  {
		return gcd(y,re);
	}
	
	

}
//Write function definition here
/*
??? gcd(???){

}
*/
