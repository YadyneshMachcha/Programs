/*3. Write a program which accept distance in kilometre and convert it into meter. (1
kilometre = 1000 Meter)
Input : 5
Output : 5000
Input : 12
Output : 12000*/
#include<stdio.h>
int KMtoMeter(int iNo)
{
iNo=iNo*1000;
return iNo;
}
int main()
{
int iValue = 0, iRet = 0;
printf("Enter distance");
scanf("%d",&iValue);
iRet = KMtoMeter(iValue);
printf("%d",iRet);
return 0;
}