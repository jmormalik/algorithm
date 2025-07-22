#include <stdio.h>

int main()
{
    int room_num[10] = {0}, len;
    char num[1000000] = {0};
    scanf("%s", num);
    for (int i = 0; num[i]; i++)
        room_num[num[i] - '0']++;
    int six_nine = room_num[6] + room_num[9];
    if (six_nine % 2 == 1)
        six_nine = (six_nine + 1) / 2;
    else
        six_nine = six_nine / 2;
    int tmp = 0;
    for (int i = 0; i < 10; i++)
    {
        if ((i!=6 && i!=9) && tmp < room_num[i])
            tmp = room_num[i];
    }
    if (six_nine >= tmp)
        printf("%d", six_nine);
    else
        printf("%d", tmp);
    return (0);
}