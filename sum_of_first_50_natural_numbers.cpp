#include<iostream>
using namespace std;
int main(){
   const int number = 50;
    int sum = 0;
    for (int i = 1; i <= number; i++) {
        sum += i;
    }
    cout << "Sum of first " << number << " natural numbers (loop): " << sum << endl;


    
    return 0;
}