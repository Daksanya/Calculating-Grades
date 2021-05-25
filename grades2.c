#include<stdio.h>
int main()
{
 int mark;
 printf("Enter your marks:");
 scanf("%d",&mark);
 if(mark==0||mark >100)
   {printf("Enter correct mark");}
 else if(mark>=85&&mark<=100)
   {printf("Grade A");}
 else if(mark>=70&&mark<=84)
   {printf("Grade B");}
 else if(mark>=55&&mark<=69)
   {printf("Grade C");}
 else if(mark>=40&&mark<=54)
   {printf("Grsde D");}
 else if(mark<40)
   {printf("Fail");}
 return 0;
}
