#include <stdio.h>

int main(void)
{
    char s[] = "100";
    int value;

    sscanf_s(s, "%d", &value, sizeof(100));
    printf("%d \n", value);
    value++;
    sprintf_s(s, sizeof(100), "%d", value);
    printf("%s \n", s);

    return 0;
}