#include<stdio.h>

struct student
{
    char sid[50];
    char sname[50];
    char gender;
    char city[32];
    char dob[32];
    long long phonenumber;
}
;

struct student s[25];

int main() 
{
    int n;
    printf("enter the number of students you'd like to entter  the values for: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("Enter the student's ID: ");
        scanf("%s", s[i].sid);

        printf("Enter the student's name: ");
        scanf("%s", s[i].sname);

        printf("Enter the student's gender (M/F): ");
        scanf(" %c", &s[i].gender);

        printf("Enter the student's city: ");
        scanf("%s", s[i].city);

        printf("Enter the student's date of birth (DD/MM/YYYY):");
        scanf("%s", s[i].dob);

        printf("Enter the student's phone number: ");
        scanf("%lld", &s[i].phonenumber);
    }
    for(int i=0;i<n;i++)
    {
        printf("\nStudent Details:\n");
        printf("ID: %c\n", s[i].sid);
        printf("Name: %s\n", s[i].sname);
        printf("Gender: %c\n", s[i].gender);
        printf("City: %s\n", s[i].city);
        printf("Date of Birth: %s\n", s[i].dob);
        printf("Phone Number: %lld\n", s[i].phonenumber);
    }
    return 0;
}