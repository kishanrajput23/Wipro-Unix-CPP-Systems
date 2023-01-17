    #include <stdio.h>
#include <stdlib.h>

int isIncluded(char *text, char* pattern);

int main()
{

char text[30];
char pattern[30]; int result;

printf(" Please introduce your text \n");
scanf("%s", text);

printf(" Please introduce the pattern you are looking for \n");
scanf("%s", pattern);



result = isIncluded( text, pattern);
if ( result == 1)
{

printf(" Your pattern has been found in your text \n " ) ;
}
if ( result == 0)
{

printf(" no substring found \n " ) ;
}



}


int isIncluded(char *text, char* pattern)
{

char *tempPattern = pattern;
int ct = 0;
int numberofcharacters = 0;

    while (  *tempPattern != '\0')
{
        tempPattern++;

      numberofcharacters++;

}

    while ( *text != '\0' && *pattern != '\0')
    {
            if ( *pattern == *text)
        {
            pattern++;
            ct++;
            text++;

        }
            else
        {
           text++;
        }

    }

        if ( ct == numberofcharacters )
    {
            return(1);
    }
        else
    {
            return(0);
    }


}
