#include <iostream>
#include<conio.h>
#include <cmath>

using namespace std;

void greet() {
	cout << "Hello World \n";
}

void printNum(int num) {
    cout << num;
}

int add (int a, int b) {
   return (a + b);
}

int main() {

	// calling a function
	//greet();
    //int n = 7;
    
    // calling the function
    // n is passed to the function as argument
    //printNum(n);
    
    int sum;
    
    // calling the function and storing
    // the returned value in sum
    sum = add(100, 78);

    cout << "100 + 78 = " << sum << endl;
    
    double number, squareRoot;
    
    number = 25.0;

    // sqrt() is a library function to calculate the square root
    squareRoot = sqrt(number);

    cout << "Square root of " << number << " = " << squareRoot;

}