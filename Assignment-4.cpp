// Reverse the number:

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


// Check a number is prime number or not:

#include <iostream>
using namespace std;

int main() {

  int i, n;
  bool is_prime = true;

  cout << "Enter a positive integer: ";
  cin >> n;

  // 0 and 1 are not prime numbers:
  if (n == 0 || n == 1) {
    is_prime = false;
  }

  // loop to check if n is prime
  for (i = 2; i <= n/2; ++i) {
    if (n % i == 0) {
      is_prime = false;
      break;
    }
  }

  if (is_prime)
    cout << n << " is a prime number";
  else
    cout << n << " is not a prime number";

  return 0;
}


// Palindrome Number:

#include <bits/stdc++.h>
using namespace std;

string isPalindrome(string S)
{
   
    string P = S;
 
    reverse(P.begin(), P.end());
 
    if (S == P) {
        return "Yes";
    }

    else {
        return "No";
    }
}
int main()
{
	string S;
	cout<< " Enter the string:";
	cin>>S;
	cout << isPalindrome(S);

	return 0;
}


// Power of the number:

#include <stdio.h>
int CalculatePower(int b, int e) {
    if (e != 0)
        return (b * CalculatePower(b, e - 1));
    else
        return 1;
}

int main() {
    int base, exponent;
    
    printf("Enter the Base & Exponent values:\n");
    scanf("%d%d", &base, &exponent);
    
    printf("\nResult: %d^%d = %d\n", base, exponent, CalculatePower(base, exponent));
    return 0;
}


// Fibonacci Series:


#include<stdio.h>
int main() 
{
   int i,c=0,n;
   int a=0;
   int b=1;
   printf("\nEnter a number to generate fibonacci series upto nth term\n");
   scanf("%d",&n); 
   printf("Fibonacci series upto %d term:-\n",n);
   while(c<=n)
   {
       printf("%d ",c);
       a=b;
       b=c;
       c=a+b;
   }
	return 0;
}
