#include <stdio.h>
#include <conio.h>
#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n , reversed_number = 0, reminder;
    cout<< " Enter the number for reversing: ";
    cin>>n;

    while (n != 0) {
        reminder = (n % 10);
        reversed_number = ((reversed_number)*10) + reminder;
        n = n/10;
    }

    cout<<" Reversed Number is: " << reversed_number;
    return 0;

}
