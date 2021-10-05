//Write a program which accept number from user and count frequency of such a
//digits which are less than 6
/*Input : 2395
Output : 3
Input : 1018
Output : 3
Input : 9440
Output : 3*/
#include<stdio.h>
int CountFreq(int);
int main()
{
    int iValue=0,iRet=0;
    printf("Enter Number");
    scanf("%d",&iValue);
    iRet=CountFreq(iValue);
    printf("%d",iRet);
    return 0;
}

int CountFreq(int iNo)
{
    int iDigit=0;
    int iCnt=0;
    while(iNo != 0)
    {
        iDigit=iNo%10;
        if(iDigit<6)
        {
            iCnt++;
        }
        iNo=iNo/10;
    }
return iCnt;
}