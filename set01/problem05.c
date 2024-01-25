
/*int input();
int compare(int a, int b, int c);
void output(int a, int b, int c, int largest);
Write a C program to compare three numbers using pass by value
*/
#include<stdio.h>
int input();
int compare(int a, int b, int c);
void output(int a, int b, int c, int largest);
int main()
{
    int n1,n2,n3,largest;
    n1=input();
    n2=input();
    n3=input();
    largest=compare( n1,n2,n3);
    output(n1,n2,n3,largest);
    return 0;
}
int input()
{
    int n;
    printf("Enter the value :");
    scanf("%d",&n);
    return n;
}
int compare(int a, int b, int c)
{
    int largest = a;
    if (b >=largest)
    {
        largest = b;
    }
    if (c >= largest)
    {
        largest = c;
    }
    return largest;
}

void output(int a, int b, int c, int largest)
{

    printf("The largest number is: %d\n", largest);
}
