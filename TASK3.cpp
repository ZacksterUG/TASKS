#include <stdio.h>
int main()
{
    char str[513];
    scanf("%512[^\n]",str);
    getchar();
    char undstr[513];
    scanf("%512[^\n]",undstr);
    getchar();
    int found = 0;
    int count1 = 0,l = 0;
    for(int i = 0; str[i] != 0; i++)
    {
        l++;
        if(str[i] == '[') count1 ++;
    }
    int pos[count1][2];
    for(int i = 0; i < count1; i++)
    {
        pos[i][0] = -1;
        pos[i][1] = -1;
    }
    int placed[l] = {0};
    int id = 0;
    for(int i = l; i >= 0; i--)
    {
        if(str[i] == '[')
        {
            pos[count1-1-id][0] = i;
            for(int j = i; str[j] != 0; j++)
            {
                if(str[j] == ']' && placed[j] == 0)
                {
                    placed[j] = 1;
                    pos[count1-1-id][1] = j;
                    break;
                }
            }
            id++;
        }
    }
    for(int i = 0; str[i] != 0; i++)
    {
        if(str[i] == '[' && found == 0 && pos[0][1] != -1)
        {
            found = 1;
            printf("%s",undstr);
            i = pos[0][1];
        }
        else printf("%c",str[i]);
    }
    return 0;
}
