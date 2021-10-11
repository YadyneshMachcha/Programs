/*2. Write a program which accept string from user and count number of
small characters.
Input : “Marvellous”
Output : 9*/
#include<stdio.h>
int CountCapital(char *str)
{
int iCnt = 0;
// Fileter
while(*str != '\0')
{
if(*str>=97&&*str<=122)
{
    iCnt++;
}
str++;
}
return iCnt ;
}
int main()
{
char arr[20];
int iRet = 0;
printf("Enter string");
scanf("%[^'\n']s",arr);
iRet = CountCapital(arr);
printf("%d",iRet);
return 0;
}