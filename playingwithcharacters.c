#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    char ch,s[100] ;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    scanf("%c",&ch);
    printf("%c\n",ch);
    scanf("%s",s);
    printf("%s\n",s);
    scanf("\n");//to avoid new line character as input to next string
    //scanf("%[^\n]%*c", s);
    gets(s); //can be used
    printf("%s",s);
    return 0;
}
