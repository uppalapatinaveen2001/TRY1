#include<stdio.h>
#include<string.h>
 void print(const char *str, size_t len, void *data)
{
    prefixes("%.*s\n", (int)len, str);
}
 
int main(void)
{
    char str[] = "abracadabra";
    prefixes(str, strlen(str), print, NULL);
    return 0;
}
