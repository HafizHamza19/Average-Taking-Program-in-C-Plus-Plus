#include <iostream>
#include <conio.h>
using namespace std;
int avg (void); //Function Decleration
	void main()
{
int x= avg ();	//Function Calling
printf("The Percentage Of 3 Subjects Is %d:",x);
	getch();
}
int avg (void) //Define Function
{
	int a;
	int b;
	int c;
	printf ("Enter First Subjects Matks : ");
	scanf ("%d",&a);
printf ("Enter Second Subjects Matks : ");
	scanf ("%d",&b);
	printf ("Enter Third Subjects Matks : ");
	scanf ("%d",&c);
	int x;
	x=(a+b+c)*100/300;
	return x;

}