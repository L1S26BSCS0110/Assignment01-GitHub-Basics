/*
 * Program    : Sum of First 50 Natural Numbers
 * Name       : Ayesha Qaisar
 * Reg No     : L1S26BSCS0110
 * Assignment : 01 - Getting Started with GitHub
 */

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
