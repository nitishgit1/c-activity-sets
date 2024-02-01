/*int input_array_size();
void input_array(int n, int a[n]);
int sum_n_array(int n, int a[n]);
void output(int n, int a[n],int sum);*/

int input_array_size();
void input_array(int n,int a[n]);
int sum_n_array(int n,int a[n]);
void output(int n, int a[n],int sum);
int main()
{
    int n=input_array_size();
    int array[n];
    input_array(n,array);
    int sum=sum_n_array(n,array);
    output(n,array,sum);
    return 0;
}
int input_array_size()
{
    int n;
printf("ENter the size of the array");
scanf("%d",&n);
return n;
}

void input_array(int n,int a[n])
{
    printf("Enter the elements of the array");
    for(int i=0;i<n;i++)
    {
    printf("Elements are %d:",i+1);
    scanf("%d",&a[i]);
    }
}

int sum_n_array(int n,int a[n])
{
    int sum = 0;
    for(int i=0;i<n;i++){
        sum = sum +a[i];
    }
    return sum;
    }
void output(int n,int a[n],int sum){
    printf("Array elements are: ");
    for(int i=0;i<n;i++){
        printf("%d",a[i]);
    }
    printf("Sum of array elements ",sum);
}

