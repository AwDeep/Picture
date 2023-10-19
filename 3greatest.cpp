/*Declare a function int greater(int,int);to find the larger number between two numbers.
Write a program that uses this function to find the greatest number among three numbers.*/
#include<stdio.h>
int greater(int,int);
int main()
{
	int a,b,c,p;
	printf("Enter the numbers:");
	scanf("%d%d%d",&a,&b,&c);
	p=greater(a,b);
	if(p>c)
        printf("%d is greatest.",p);
    else
        printf("%d is greastest.",c);


}
int greater(int a,int b)
{
    if(a>b)
        return a;
    else
        return b;
}
