/*Write a C program to find the sum of n complex numbers

struct _complex {
	float real,imaginary;
};
typedef struct _complex Complex;

int get_n();
Complex input_complex();
void input_n_complex(int n, Complex c[n]);
Complex add(Complex a, Complex b);
Complex add_n_complex(int n, Complex c[n]);
void output(int n, Complex c[n], Complex result);*/
#include<stdio.h>

struct _complex {
	float real,imaginary;
};
typedef struct _complex Complex;

int get_n();
Complex input_complex();
void input_n_complex(int n, Complex c[n]);
Complex add(Complex a, Complex b);
Complex add_n_complex(int n, Complex c[n]);
void output(int n, Complex c[n], Complex result);

int main()
{

    return 0;
}
int get_n()
{
 int n;   
 printf("Enter the number of complex numbers to add");
 scanf("%d",&n);
 return 0;

}

Complex input_complex()
{
    Complex num;
    printf("Enter the real part : ");
    scanf("%f",&num.real);
    printf("Enter the imaginary part : ");
    scanf("%f",&num.imaginary);
    return num;
}

void input_n_complex(int n, Complex c[n])
{
    printf("Enter %d complex numbers : \n",n);
    for(int i=0;i<n;i++){
        c[i] = input_complex();
    }
}

Complex add(Complex a,Complex b){
Complex result;
result.real = a.real + b.real;
result.imaginary = a.imaginary + b.imaginary;
return result;
    }

Complex add_n_complex(int n,Complex c[n])
{
    Complex sum ={0,0}; // Sets the real and imaginary part to 0
    for(int i =0;i<n ;i++){
        sum = add(sum,c[i]);

    }
    return sum;


}

void output(int n,Complex c[n],Complex result){
    printf("THE %d complex numbers enterd are :\n",n);
    for(int i=0;i<n;i++)
    {
printf("%.2f + %.2fi\n", c[i].real, c[i].imaginary);
    }
    printf("The sum of these complex numbers is: %.2f + %.2fi\n", result.real, result.imaginary);
}    
