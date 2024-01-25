/*Write a C program to compare three numbers using pass by reference
int input(int *a, int *b, int *c);
void compare(int a, int b, int c, int *largest);
void output(int a, int b, int c, int largest);*/
#include <stdio.h>
void input(int *a, int *b, int *c);
void compare(int a, int b, int c, int *largest);
void output(int a, int b, int c, int largest);
int main()
{
    int m1, m2, m3, largest;
    input(&m1, &m2, &m3);
    compare(m1, m2, m3, &largest);
    output(m1, m2, m3, largest);
    return 0;
}
void input(int *a, int *b, int *c)
{
    printf("Enter the value of m1 :");
    scanf("%d",a);
    printf("Enter the value of m2 :");
    scanf("%d",b);
    printf("Enter the value of m3 :");
    scanf("%d",c);
}
void compare(int a, int b, int c, int *largest)
{
    *largest = a;
    if (b > *largest)
    {
        *largest = b;
    }
    if (c > *largest)
    {
        *largest = c;
    }
    
}
void output(int a, int b, int c, int largest)
{

    printf("The largest number is: %d\n", largest);
}
