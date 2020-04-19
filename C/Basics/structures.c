/*Program for basic implementation of structures*/
#include<stdio.h>
int main()
{
  struct student
  {
    int rollno;
    char fname[20];
    char mname[20];
    char lname[20];
    float fee;
  };

  struct student s1;
  printf("\nEnter roll no:");
  scanf("%d",&s1.rollno);
  printf("\nEnter first name:");
  scanf("%s",&s1.fname);
  printf("\nEnter last name:");
  scanf("%s",&s1.lname);
  printf("\nEnter fee:");
  scanf("%f",&s1.fee);
  printf("\nFollowing are the student details\n");
  printf("%d\n%s\n%s\n%.2f\n",s1.rollno,s1.fname,s1.lname,s1.fee);
  return 0;
}
