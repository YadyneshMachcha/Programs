
#include<stdio.h>
int Display(int);
int main()
{
    int iValue=0;
    int iRetn=0;
    printf("Enter Number");
    scanf("%d",&iValue);
    iRetn=Display(iValue);
    if(iRetn==0)
    {
        printf("there is no number of 4");
    }
    else{
        printf("It Contains %d Number of 4's",iRetn);
    }
    return 0;

}
int Display(int iNo)
{
    int iCnt=0,iDigit=0;
    while(iNo != 0)
    {
      iDigit=iNo%10;
       if(iDigit==4)

        {
            iCnt++;
        }
        iNo=iNo/10;
    }
    return iCnt;
}