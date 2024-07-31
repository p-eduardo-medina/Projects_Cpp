#include <iostream>
#include<conio.h>
#include <cmath>
using namespace std; 
  
float quadraticEquation(int a, int b, int c) {
    float s = 0.0;
	s = ((-1)*b + sqrt(b*b-4*a*c))/(2*a);
	return s;
}

int main() {

    // initialize 2d array
    float x = 0;
    int a,b,c;
    cout << "Enter the integer A: ";
    cin >> a;
    cout << "Enter the integer B: ";
    cin >> b;
    cout << "Enter the integer C: ";
    cin >> c;
    
    x = quadraticEquation(a,b,c);
    cout << x;
}