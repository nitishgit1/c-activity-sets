/*int input_number();
int is_composite(int n);
void output(int n, int result);*/
#include<stdio.h>
#include<math.h>
int input_number();
int is_composite(int n);
void output(int n, int result);
int main()
{
    int number = input_number();
    int result = is_composite(number);
    output(number,result);
    return 0;
}

int input_number()
{
    int number;
    printf("ENtre the number");
    scanf("%d",&number);
    return number;
}


int is_Composite(int n) {
  if (n<=1) {
    return 0; 
  }
  for (int i=2; i<=n/2; i++) {
    if (n%i==0) {
      return 1; 
    }
  }

  return 0; 
}

void output(int n, int result)
{
    if(result ==1)
    printf("%d is composite number\n",n);
    else
    printf("%d is not a composite number\n",n);

}
