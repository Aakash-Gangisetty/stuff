#include<stdio.h>
#include<windows.h>

void setcolor(int textcolor)
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, textcolor);
}

int main()
{
    int n;
    char items[32][100];
    int item_co[100]; 
    int buff1;
    
    setcolor(15);
    
    printf("How many items would you like to add? ");
    scanf("%d", &n);
        
    printf("What are the items you would like to add? Mention their prices beside them\n");
    setcolor(14);
    printf("Press 1 to know the format or any other number key to continue: ");
    scanf("%d", &buff1);
    setcolor(15);
    if(buff1==1)
    {
        setcolor(7);
        printf("This is the format: [item name] [cost]\n");
        buff1=0;
        setcolor(15);
    }

    for(int i=0;i<n;i++)
    {
        printf("Enter item %d and its cost: \n", i + 1);
        scanf("%s %d", items[i], &item_co[i]);
    }

    setcolor(2);
    printf("\nrequested items have been added to your cart\n");
    setcolor(15);
    printf("would you like to view your cart?\npress 1 if yes or any other number to continue");
    scanf("%d", &buff1);
    if(buff1==1)
    {
        for(int i=0;i<n;i++)
        {
            printf("%s - %d\n", items[i], item_co[i]);
        }
    }
}
