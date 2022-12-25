(1). Palindrome String: 


#include <stdio.h>
#include <string.h>
 
int main()
{
  	char str[100];
  	int i, len, flag;
  	flag = 0;
 
  	printf("\n Please Enter any String :  ");
  	gets(str);
  	
  	len = strlen(str);
  	 	   	
  	for(i = 0; i < len; i++)
	{
		if(str[i] != str[len - i - 1])
		{
			flag = 1;
			break;	
		} 
	}
	if(flag == 0)
	{
		printf("\n %s is a Palindrome String", str);
	}
	else
	{
		printf("\n %s is Not a Palindrome String", str);
	}	
	
  	return 0;
}


(2). Duplicate elements:


#include <stdio.h>    
     
int main()    
{    
        
    int arr[] = {1, 2, 3, 4, 2, 7, 8, 8, 3};     
        
        
    int length = sizeof(arr)/sizeof(arr[0]);    
        
    printf("Duplicate elements in given array: \n");    
    
    for(int i = 0; i < length; i++) {    
        for(int j = i + 1; j < length; j++) {    
            if(arr[i] == arr[j])    
                printf("%d\n", arr[j]);    
        }    
    }    
    return 0;    
}  


(3). Largest and Smallest Number in an Array:


#include <stdio.h>


#define ARRAY_SIZE(a)  sizeof(a)/sizeof(a[0])

int main()
{
    int arr[] = {9, 36, 100, 16, 1, 11, 5480};
    int i, small, large;
    const int N = ARRAY_SIZE(arr);
    small = arr[0];
    large = arr[0];
    for (i = 1; i < N; i++)
    {
        if (arr[i] < small)
        {
            small = arr[i];
        }
        if (arr[i] > large)
        {
            large = arr[i];
        }
    }
    printf("Largest element is : %d\n", large);
    printf("Smallest element is : %d\n", small);
    return 0;
}


(4). Addition of the two matrices:


#include <stdio.h>
 
int main()
{
   int m, n, c, d, first[10][10], second[10][10], sum[10][10];
 
   printf("Enter the number of rows and columns of matrix\n");
   scanf("%d%d", &m, &n);
   printf("Enter the elements of first matrix\n");
 
   for (c = 0; c < m; c++){
      for (d = 0; d < n; d++){
         scanf("%d", &first[c][d]);
          }
     }
 
   printf("Enter the elements of second matrix\n");
 
   for (c = 0; c < m; c++){
      for (d = 0 ; d < n; d++){
         scanf("%d", &second[c][d]);
	   }
	}
   
   printf("Sum of entered matrices:-\n");
   
   for (c = 0; c < m; c++) {
      for (d = 0 ; d < n; d++) {
         sum[c][d] = first[c][d] + second[c][d];
         printf("%d\t", sum[c][d]);
      }
      printf("\n");
   }
 
   return 0;
}


(5). Output of snnipt1: 


int a[5] = {1,2,3,4,5};
int *ptr = (int*)(&a+1);
printf("%d %d", *(a+1), *(ptr-1));


My Output: 2 5

(1). 2: (&a+1) because there is the increment of 4 Bytes in the base 
         address, now the pointer points to index 2 of the array(arr).

(2). 5: *(ptr-1) because there is the concept of negative indexing in
         the array so, *(ptr-1) gives the output 5 i.e last element
         in the array.


(6). Output od snippet 2:

#include <stdio.h>
#include <stdlib.h>
 
int main(void)
{
    int arr[] = {0, 1, 2, 3, 4};
    int *ptr = arr;
 
    printf("%d ", *ptr++);
    printf("%d ", (*ptr)++);
    printf("%d ", *ptr);
    printf("%d ", *++ptr);
    printf("%d ", ++*ptr);
}


My output: 01223

(1). *ptr++ = first print then increment the pointer variable = 0

(2). (*ptr)++ = Here there are the brackets that will execute
           first and then the incrementation takes place = 1

(3). *ptr = it simply prints the value of the pointer points to = 2


(4). *++ptr = Here the precedence rule id applied and in this 
         the situation there is the same precedence then we
         apply the Associative rule which states the Right to 
         left precedence (L<-R) then according to this rule
         first, increment the pointer address the dereference the
         pointer address which is 2.

(5). ++*ptr = Here also above same rule is applied i.e output is 3. 







 
