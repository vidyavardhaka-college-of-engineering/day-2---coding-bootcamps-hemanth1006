//You will be given two numbers stored in variables 'a' and 'b'. Your task is to swap the values present and print them.
//Example
//input: 
//4 5
//output: 
//5 4

#include<stdio.h>

int main()
{
    int a,b,temp;
    printf("Enter the values of a and b for swapping");
    scanf("%d %d",&a,&b);
    printf("Values are %d and %d\n",a,b);
  
    temp=a;
    a=b;
    b=temp;

    printf("Swapped values are %d and %d",a,b);
}
