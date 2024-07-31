
#include <bits/stdc++.h> 
using namespace std; 
  
// The vect here is a copy of vect in main() 

int GoodNumber (int n[])
{
    int k = 1;
    cout<<sizeof(n) / sizeof(n[0]) <<"\n";
    for(int i = 0; i < sizeof(n) / sizeof(n[0]); i++)
    {
        cout<< i << "\n"; 
        k = k*n[i];
        
    }
    return k;
}


int main() 
{ 
    int n = 0, m=1;
   // vector<int> vect; 
    //vect.push_back(10); 
    //vect.push_back(20); 
    int vect[] = {1,2,3,4,5,6};
    //cout << "\n \n \n Tamaño:" << sizeof(vect) / sizeof(vect[0]) <<"\n";
    for(int i = 0; i < sizeof(vect) / sizeof(vect[0]); i++ )
    {
        m = m*vect[i];
    }
   // cout << "\n" << m << " "; 
    
    n = GoodNumber(vect);
    cout << n;
  
    return 0; 
}