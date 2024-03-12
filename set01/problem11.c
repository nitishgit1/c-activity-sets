/*struct _complex {
	float real;
	float imaginary;
}
typedef struct _complex Complex;

Complex input_complex();
Complex add_complex(Complex a, Complex b);
void output(Complex a, Complex b, Complex sum);*/

#include<stdio.h>
struct _complex {
	float real;
	float imaginary;
};
typedef struct _complex Complex;

Complex input_complex();
Complex add_complex(Complex a, Complex b);
void output(Complex a, Complex b, Complex sum);



int main()
{
 printf("Enter the First number\n");
 Complex complex1 = input_complex();
 printf("ENter the Second Number\n");
 Complex complex2 = input_complex();
 Complex sum = add_complex(complex1,complex2);
 output(complex1,complex2,sum);
 return 0;
}
Complex input_complex()
{
    Complex num;
    printf(" Real part : ");
    scanf("%f",&num.real);
    printf(" Imaginary part : ");
    scanf("%f",&num.imaginary);
    return num;
}

Complex add_complex(Complex a,Complex b)
{
    Complex sum;
    sum.real = a.real + b.real;
    sum.imaginary = a.imaginary + b.imaginary;
    return sum;

}

void output(Complex a, Complex b, Complex sum)
{
    printf("First Complex Number is %.f+%.fi\n",a.real,a.imaginary);
    printf("Second Complex Number is %.f+%.fi\n\n",b.real,b.imaginary);
    printf("Sum of %.f+%.fi and %.f+%.fi is %.f+%.fi\n",a.real,a.imaginary,b.real,b.imaginary,sum.real,sum.imaginary);

}