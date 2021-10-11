/*4. Accept Character from user and check whether it is small case or
not (a-z).
Input : g
Output : TRUE
Input : D
Output : FALSE
*/
#include<stdio.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL ChkAlpha(char ch)
{

    if(ch>=97&&ch<=122)
    {
        return TRUE;
    }
}
int main()
{
char cValue = '\0';
BOOL bRet = FALSE;
printf("Enter the character");
scanf("%c",&cValue);
bRet = ChkAlpha(cValue);
if(bRet == TRUE)
{
printf("It is Small case Character");
}
else
{
printf("It is not Small case Character");
}
return 0;
}