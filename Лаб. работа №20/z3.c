#include <stdio.h>
#include <ctype.h>
 
int main()
{
    char text[256] = { 0 };
    int count = 0;
    char *ptr; 
 
    fgets(text, sizeof(text), stdin); 
 
    for (ptr = text; *ptr; ++ptr) 
    {
        if (isalpha(*ptr))
        {
            count++;
        }
    }
 
    printf("%u\n", count);
 
    return 0;
}