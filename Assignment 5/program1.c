/*1.Write a program which accept number from user and display its digits in reverse
order.
Input : 2395
Output : 5
9
3
2
Input : 1018
Output : 8
1
0
1
Input : -1018
Output : 8
1
0
1
*/


#include<stdio.h>
int Display(int);
int main()
{
    int iValue=0;
    printf("ENter Number");
    scanf("%d",&iValue);
    Display(iValue);
    return 0;

}
int Display(int iNo)
{
    int iDigit;

if(iNo<0)
{
 iNo=-iNo;
}
while(iNo != 0)
{
iDigit=iNo%10;
printf("%d\n",iDigit);
iNo=iNo/10;
}

}