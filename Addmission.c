#include <stdio.h>
#include <string.h>
struct DOB
{
    int day;
    int month;
    int year;
};
struct Mark
{
    int sub[5];

};
struct Student{
    char roll_num[7];
    char first_name[10];
    char middle_name[10];
    char last_name[10];
    char sex[15];
    struct DOB d;
    struct Mark m;
};

struct Student s[100];

void calcPercent(int j)
{
    //printf("%d\n",j);
    int sum = 0;
    for(int i=0;i< 5;i++)
    {
        //printf("%d ",s[j].m.sub[i]);
        sum += s[j].m.sub[i];
    }
    //printf("\n%d",sum);
    if((sum/5) >= 50)
    {
         printf("\nYou got addmission!");
    }
    else
    {
        printf("\nYou failed!");
    }
}
int main()
{
    int n;
    printf("\nEnter the number of students: ");
    scanf("%d",&n);
    s[n];
    for(int i = 0;i<n;i++)
    {
        printf("\nFor Student No.%d",i+1);
        printf("\nEnter Roll No: ");
        scanf("%s",s[i].roll_num);
        printf("\nEnter first name: ");
        scanf("%s",s[i].first_name);
        printf("\nEnter middlename: ");
        scanf("%s",s[i].middle_name);
        printf("\nEnter lastname: ");
        scanf("%s",s[i].last_name);
        printf("\nEnter gender: ");
        scanf("%s",s[i].sex);
        printf("\nEnter Date of Birth(dd/mm/yy): ");
        scanf("%d%d%d",&s[i].d.day,&s[i].d.month,&s[i].d.year);

        printf("\nEnter marks for each subjects : ");
        for(int j=0;j<5;j++)
        {
            scanf("%d",&s[i].m.sub[j]);
        }
        calcPercent(i);
    }
}
