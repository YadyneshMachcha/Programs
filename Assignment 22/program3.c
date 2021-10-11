/*3. Write a program which accept string from user and return
difference between frequency of small characters and frequency of
capital characters.
Input : “MarvellouS”
Output : 6 (8-2)*/
#include<stdio.h>
int CountCapital(char *str)
{
int iCap = 0,iSmall;
// Fileter
while(*str != '\0')
{
if(*str>=97&&*str<=122)
{
    iSmall++;
}
else{
iCap++;
}
str++;
}
return iSmall-iCap ;
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