/*array linear saerch*/
#include<stdio.h>
int main()
{
    int a[50],n,i;
    int x;
    int search;
    
    printf("enter n\t");
    scanf("%d",&n);
    printf("enter array elemnets\t");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }   
    printf("enter search elements\t");
    scanf("%d",&search);
    for(i=0;i<n;i++)
    {
        if(a[i]==search)
        {
            x=i+1;
            printf("element is found at %d",x);
        }
        else if(i==n-1)
        {
            printf("The given value is not a part of the array");
        }
    }
}