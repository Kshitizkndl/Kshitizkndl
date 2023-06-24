#include<stdio.h>
int main()
{
    char ch[30];
    printf("please enter your name:\n");
    scanf("%s",ch);

        if(ch[0]=='P'||ch[0]=='p'&&ch[1]=='r'||ch[1]=='R'&&ch[2]=='a'||ch[2]=='A'&&ch[3]=='s'||ch[3]=='S'&&ch[4]=='i'||ch[4]=='I'&&ch[5]=='d'||ch[5]=='D')
    printf("you are gay");
    else
        printf("you are straight");
    return 0;
}
