/*void input(int *a, int *b);
void add(int a, int b, int *sum);
void output(int a, int b, int sum);
Write a C program to add two numbers using pass by reference
*/
#include <stdio.h>
int  input();
void add(int a, int b, int *sum);
void output(int a, int b, int sum);
int main()
{
    int n1,n2,res;
    n1 = input();
    n2 = input();

    add(n1,n2,&res);
    output(n1,n2,res);
    return 0;
}
int input()
{
      int n;
    printf("ENter n1 and n2 values ");
    scanf("%d",&n);
    return n;


}
void add(int a,int b,int *sum)
{
    *sum=a+b;


}
void output(int a, int b, int sum)
{
    printf("The sum of %d and %d is %d",a,b,sum);
}


