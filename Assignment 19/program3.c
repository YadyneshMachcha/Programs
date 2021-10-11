/*3. Accept N numbers from user and return the difference between largest
and smallest number.
Input : N : 6
Elements : 85 66 3 66 93 88
Output : 90 (93 -3)
Program Layout :*/
#include<stdio.h>
#include<stdlib.h>

int Minimum(int Arr[], int iLength)
{
    int i=0,iSmall=*Arr,iGreater=0;
    for(i=0;i<iLength;i++)
    {
        if(iSmall>Arr[i])
        {
            iSmall=Arr[i];
        }
      
       if(iGreater<Arr[i])
        {
            iGreater=Arr[i];
        }    

    }
    return iGreater-iSmall;
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
printf("Enter element : %d",iCnt+1);
scanf("%d",&p[iCnt]);
}
iRet = Minimum(p, iSize);
printf("Smallest Number is %d",iRet);
free(p);
return 0;
}