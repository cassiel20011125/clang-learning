#include <stdio.h>

#define MAXN 10
typedef float ElementType;

ElementType Median( ElementType A[], int N );

int main ()
{
    ElementType A[MAXN];
    int N, i;

    scanf("%d", &N);
    for ( i=0; i<N; i++ )
        scanf("%f", &A[i]);
    printf("%.2f\n", Median(A, N));

    return 0;
}

/* ��Ĵ��뽫��Ƕ������ */

void ShellSort(ElementType* A, int N){
	for(int gap=N/2;gap>0;gap=gap/2){
		for(int j=gap;j<N;j++){
			if(A[j]<A[j-gap]){//���жϸ�Ԫ���Ƿ���Ҫ��ʼ���ڲ�������
				ElementType tmp=A[j];
				int k=j-gap;
				while(k>=0 && tmp<A[k]){ //һֱ��ǰ�ң�ֱ���ҵ���ȷӦ�ò����λ��
					A[k+gap]=A[k]; //��ǰԪ�غ���
					k=k-gap;
				}
				A[k+gap]=tmp;
			}
		}
	}
}
ElementType Median( ElementType A[], int N ){
	ShellSort(A,N); 
	return A[N/2];
}
