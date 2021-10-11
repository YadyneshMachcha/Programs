/*4. Accept Character from user and check whether it is special symbol
or not (!, @, #, $, %, ^, &, *).
Input : %
Output : TRUE
Input : d
Output : FALSE
*/
#include<stdio.h>
#include<stdbool.h>

bool ChkSpecial(char ch)
{
if((ch>=65&&ch<=90)||(ch>=97&&ch<=122))
{
    return false;
}
else{
    return true;
}
}
int main()
{
char cValue = '\0';
bool bRet = true;
printf("Enter the character");
scanf("%c",&cValue);
bRet = ChkSpecial(cValue);
if(bRet == true)
{
printf("It is special Character");
}
else
{
printf("It is not a special Character");
}
return 0;
}