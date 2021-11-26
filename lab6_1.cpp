#include<iostream>
using namespace std;

int main(){
    int odd = 0, even = 0, i;
    

    cout << "Enter an integer: ";
    cin  >> i;
    
    while(i != 0)
    {
        if(i%2 == 0)
        {
            even = even + 1;
        }
        else
        {
            odd = odd +1;
        }
         cout << "Enter an integer: ";
         cin  >> i;
    }
    
   
    cout << "#Even numbers = " << even << endl;
    cout << "#Odd numbers = " << odd;
    return 0;
}
