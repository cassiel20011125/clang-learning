#include <stdio.h>
#include <string.h>

#define MAXS 10

char *str_cat( char *s, char *t );

int main()
{
    char *p;
    char str1[MAXS+MAXS] = {'\0'}, str2[MAXS] = {'\0'};

    scanf("%s%s", str1, str2);
    p = str_cat(str1, str2);
    printf("%s\n%s\n", p, str1);

    return 0;
}

/* ��Ĵ��뽫��Ƕ������ */
char *str_cat( char *s, char *t ){
	int len=strlen(s);
	while(*t !='\0') *(s+len++) = *(t++);
	return s;
}