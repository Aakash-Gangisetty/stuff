#include <stdio.h>
int main()
{
    int rows = 5;
    int start = 1;

    for (int i = 1; i <= rows; i++)
    {
        int num = start;
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", num);
            num += 2;
        }
        printf("\n");
        start += 2;
    }
    
    return 0;
}
