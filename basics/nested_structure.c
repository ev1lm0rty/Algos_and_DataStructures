/*This program explains nested structures*/
#include<stdio.h>
int main()
{
  struct date
  {
    int day;
    int month;
    int year;
  };

  struct student
  {
    char fname[20];
    char lname[20];
    struct date date;
  }s1;

  printf("\nEnter Details of the student:\n");
  printf("Firstname:");
  scanf("%s",&s1.fname);
  printf("\nLastname:");
  scanf("%s",&s1.lname);
  printf("\nDate of birth");
  printf("\nDay:");
  scanf("%d",&s1.date.day);
  printf("\nMonth:");
  scanf("%d",&s1.date.month);
  printf("\nYear:");
  scanf("%d",&s1.date.year);

  printf("\fThese are the details:\n");
  printf("%s\n%s\n%d/%d/%d\n",s1.fname,s1.lname,s1.date.day,s1.date.month,s1.date.year);
  return 0;
}
