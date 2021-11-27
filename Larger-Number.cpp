#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b,c;
 clrscr();
 printf("Enter Any Three Value's = ");
 scanf("%d %d %d",&a,&b,&c);
 if((a>b)&&(a>c))
 {
  printf("A is Largest Number");
 }
 if (b>c)
 {
  printf("B is Largest Number");
 }
 else
 {
  printf("C is Largest Number");
 }
 getch();
}
