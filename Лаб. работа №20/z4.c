#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
#define MAX_LEN 80
 
int main()
{
    char s[MAX_LEN], c;
    int i, j, length;
    fgets(s, 40, stdin);
    scanf("%c", &c);
    length = strlen(s);
    for (i = 0; i < length; ++i)
    {
        
        if(s[i] == c)
        {
            for (j = strlen(s); j >= i; --j)
                s[j+1] = s[j];
            ++i;
            if (length < MAX_LEN) length = strlen(s);
            else break;
        }
    }
    printf("%s", s);
    
    return 0;
}