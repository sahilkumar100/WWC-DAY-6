#include<iostream>
using namespace std;

long long factorial(int n){
    if(n==0 || n ==1)
        return 1;
        return n* factorial (n-1);
    }
int main (){
    int n;
    cout<<"Enter a number : ";
    cin >> n;

    if(n < 0 || n > 15){
        cout<<"Invalid Input Please enter a number between 0 and 15." << endl;
        return 1;
    }

     cout << "Factorial of " << n << " is: " << factorial(n) << endl;
    return 0;
}