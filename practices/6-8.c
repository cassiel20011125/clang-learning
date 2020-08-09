#include <stdio.h>

int Factorial( const int N );

int main()
{
    int N, NF;
	
    scanf("%d", &N);
    NF = Factorial(N);
    if (NF)  printf("%d! = %d\n", N, NF);
    else printf("Invalid input\n");

    return 0;
}

/* ��Ĵ��뽫��Ƕ������ */

int Factorial( const int N ){
	int i,sum = 1;
	if(N >= 0){
		for(i=2;i<=N;i++)
			sum*=i;
		return sum;
	}else{
		return 0;
	}
}
