#include <stdio.h>
#include <string.h>
#define WORDS 51
int main()
{
	printf("please input some words(divided by space)\n");
    int len1,len2,i,j,m;
    char s1[WORDS]={0},s2[WORDS]={0};
    scanf("%s%s",s1,s2);
    len1 = strlen(s1);
    len2 = strlen(s2);
    for(i=0;i<len1;++i){
        m = 1;
        for(j=0;j<len2;++j){
            if(s1[i]==s2[j]){
                m=0;
            }
        }
        if(m == 1)
            putchar(s1[i]);
    }
    printf("\n");
    return 0;
}