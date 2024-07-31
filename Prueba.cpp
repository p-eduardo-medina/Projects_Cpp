#include <iostream>
#include<conio.h>

using namespace std;

int main(){

    int n,x=0,y=1,z=1;

    cout<<"Escribe el número de elementos ";cin>>n;

    for(int i=1;i<=n;i++){

        z=x+y;

        cout<<z<<" ";
        x=y; 
        y=z;  
    }

    getch();
    return 0;
}