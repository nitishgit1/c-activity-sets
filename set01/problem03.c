/*Write a C program to add two numbers using pass by value
int input();
int add(int a, int b);
void output(int a, int b, int sum);
*/

#include<stdio.h>
int input();
int add(int a, int b);
void output(int a, int b, int sum);
int main()
{
    int num1,num2,res;
    num1=input("Enter num1 : ");
    num2=input("Enter num2 : ");
    res=add(num1,num2);
    output(num1,num2,res);
    return 0;
}
int input(char *msg)
{
    int n;
    printf("%s",msg);
    scanf("%d",&n);
    return n;

}
int add(int a,int b)
{
    return a+b;
}
void output(int a,int b,int sum)
{
    printf("The sum of two nums is %d\n",sum);
}
