#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std; 
  
float quadraticEquation(int a, int b, int c) {
    float s = 0.0;
	s = ((-1)*b + sqrt(b*b-4*a*c))/(2*a);
	return s;
}

int main() {

    // initialize 2d array
    int a=0,b=1,c=1,n = 0;
    cout << "Enter the integer A: ";
    cin >>n;
    for(int i = 0; i <=n;i++)
    {
        cout << c <<"\n";
        c = a+b;
        a = b;
        b=c;
    }
}