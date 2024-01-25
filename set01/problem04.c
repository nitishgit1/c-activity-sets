/*void input(int *a, int *b);
void add(int a, int b, int *sum);
void output(int a, int b, int sum);
Write a C program to add two numbers using pass by reference
*/
#include <stdio.h>
void input( int *a, int *b);
void add(int a, int b, int *sum);
void output(int a, int b, int sum);
int main()
{
    int n1,n2,res;
    input(&n1,&n2);
    add(n1,n2,&res);
    output(n1,n2,res);
    return 0;
}
void input(int *a,int *b)
{
    printf("ENter the value of a : ");
    scanf("%d",a);
    printf("ENter the value of b : ");
    scanf("%d",b);
   

 
}
void add(int a,int b,int *sum)
{
    *sum=a+b;


}
void output(int a, int b, int sum)
{
    printf("The sum of %d and %d is %d",a,b,sum);
}


