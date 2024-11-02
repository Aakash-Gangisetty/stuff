/*to check if a given number is a strong number*/
#include<stdio.h>
int main()
{
    int n;
    int dig;
    int buf1=0,sum;

    printf("what is the number you would like to check is a strong number");
    scanf("%d", &n);
    
    while(n>0)
    {
        dig=n%10;
        printf("%d\n",dig);
        for (int i = 1; i <= dig; i++) 
        {
            buf1 *= i;
        }
        n=n/10;
        sum+=buf1;
    }
    printf("%d",buf1);
}