#include <stdio.h>
#define MAXN 20

void strmcpy( char *t, int m, char *s );
void ReadString( char s[] ){gets(s);} /* �ɲ���ʵ�֣���ȥ���� */ /* ����Ϊ�˵����Ҹ������� */

int main()
{
    char t[MAXN], s[MAXN];
    int m;

    scanf("%d\n", &m);
    ReadString(t);
    strmcpy( t, m, s );
    printf("%s\n", s);

    return 0;
}

/* ��Ĵ��뽫��Ƕ������ */

void strmcpy( char *t, int m, char *s ){
	char *tmp = t;
	while(*(tmp++) != '\0')
		if(--m<=0) *(s++)=*(tmp-1);
	*s='\0';
} 
