/*3. Write a program which accept string from user and display it inn
reverse order.
Input : “MarvellouS”
Output : “SuollevraM”*/
#include<stdio.h>
void Reverse(char *str)
{
int icnt=0;
for(icnt='\0';icnt=str[0];icnt--)
{
    printf(" %c  ",str[icnt]);
}
}
int main()
{
char arr[20];
int iRet = 0;
printf("Enter string");
scanf("%['\n']s",arr);
Reverse(arr);
return 0;
}