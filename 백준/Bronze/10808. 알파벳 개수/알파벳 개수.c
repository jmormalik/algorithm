#include <stdio.h>

int main()
{
    char input[100];
    int count[26] = {0};
    scanf("%s", input);
    for (int i = 0; input[i]; i++)
        count[input[i] - 'a']++;
    for (int i = 0; i < 26; i++)
        printf("%d ", count[i]);
    return (0);
}