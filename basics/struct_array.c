/*This program shows array of structures*/
#include<stdio.h>
int main()
{
  int num;
  struct student
  {
    int rollno;
    char name[20];
    int fee;
    char dob[20];
  };
  struct student s1[100];
  printf("\nEnter the number of students:");
  scanf("%d",&num);
  for(int i = 0 ; i < num ; i++)
  {
    printf("\nEnter rollno:");
    scanf("%d",&s1[i].rollno);
    printf("\nEnter Name:");
    scanf("%s",&s1[i].name);
    printf("\nEnter fee:");
    scanf("%d",&s1[i].fee);
    printf("\nEnter dob:");
    scanf("%s",&s1[i].dob);
  }

  for (int i = 0 ; i < num ; i++)
  {
    printf("\nRollno:%d",&s1[i].rollno);
    printf("\nName:%s",&s1[i].name);
    printf("\nFee:%d",&s1[i].fee);
    printf("\nDob:%s",&s1[i].dob);
  }

  return 0;
}
