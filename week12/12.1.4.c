#include <stdio.h>

char *getmonth( int n );

int main()
{
    int n;
    char *s;

    scanf("%d", &n);
    s = getmonth(n);
    if ( s==NULL ) printf("wrong input!\n");
    else printf("%s\n", s);

    return 0;
}

/* ��Ĵ��뽫��Ƕ������ */
char *getmonth( int n ){
	static char months[12][10]={"January","February","March","April","May","June","July","August","September","October","November","December"};
	if(n>=1 && n<=12)
		return months[n-1];
	else
		return NULL;
}
