#include<iostream>

using namespace std;

unsigned long long fibonacci(unsigned int x);
//Write prototype of function fibonacci() here

int main(){
	cout << fibonacci(0) << "\n";
	cout << fibonacci(1) << "\n";
	cout << fibonacci(2) << "\n";
	cout << fibonacci(15) << "\n";
	cout << fibonacci(30) << "\n";
	cout << fibonacci(50) << "\n";
	
	return 0;
}


//Write definition of function fibonacci() here


  unsigned long long fibonacci(unsigned int x){
	  if(x<1){
		  return 0;
	  }
	  else if(x==1){return 1;}
	  else if(x>1){
		 
		return fibonacci(x-1)+fibonacci(x-2);
		 
	  }
}

