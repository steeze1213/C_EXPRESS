#include <stdio.h>
#include <string.h>

int main(void)
{
    char filename[100];
    char s[100];
    int i;

    for (i = 0; i < 6; i++) {
        strcpy_s(filename, 100, "image");
        sprintf_s(s, 100, "%d", i);
        strcat_s(filename, 100, s);
        strcat_s(filename, 100, ".jpg");
        printf("%s \n", filename);
    }
    return 0;
}