/*5. Accept N numbers from user and display summation of digits of each
number.
Input : N : 6
Elements : 8225 665 3 76 953 858
Output : 17 17 3 13 17 21
Program Layout :*/
#include<stdio.h>
#include<stdlib.h>
void Digits(int Arr[], int iLength)
{
int i=0,iDigit=0,iSum=0;
for(i=0;i<iLength;i++)
{
    iSum=0;
     while(Arr[i]!=0)
    {
        iDigit=Arr[i]%10;
        iSum=iSum+iDigit;
        Arr[i]=Arr[i]/10;
    }
   
    printf(" %d ",iSum);
}
}
int main()
{
int iSize = 0,iRet = 0,iCnt = 0;
int *p = NULL;
printf("Enter number of elements");
scanf("%d",&iSize);
p = (int *)malloc(iSize * sizeof(int));
if(p == NULL)
{
printf("Unable to allocate memory");
return -1;
}
printf("Enter %d elements",iSize);
for(iCnt = 0;iCnt<iSize; iCnt++)
{
printf("Enter element : %d  ",iCnt+1);
scanf("%d",&p[iCnt]);
}
Digits(p, iSize);
free(p);
return 0;
}