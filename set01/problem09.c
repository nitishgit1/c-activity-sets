/*float input();
float square_root(float n);
void output(float n, float sqrroot);*/
#include<stdio.h>
#include<math.h>

float input();
float square_root(float n);
void output(float n, float sqrroot);

int main()
{
    float num = input();
    float sqrt_result = square_root(num);
    output(num,sqrt_result);
return 0;

}

float input()  


{
    float n;
    printf("Enter the Number: ");
    scanf("%f",&n);
    return n;
}

float square_root(float n)
{
    return sqrt(n);
}
void output(float n,float sqrroot)
{
    printf("The square root of %f is %f\n",n,sqrroot);
}