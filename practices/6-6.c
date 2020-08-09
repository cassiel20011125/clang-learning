#include <stdio.h>
#include <stdlib.h>

typedef struct Node *PtrToNode;
struct Node {
    int Data; /* �洢������� */
    PtrToNode Next; /* ָ����һ������ָ�� */
};
typedef PtrToNode List; /* ���嵥�������� */

int FactorialSum( List L );

int main()
{
    int N, i;
    List L, p;

    scanf("%d", &N);
    L = NULL;
    for ( i=0; i<N; i++ ) {
        p = (List)malloc(sizeof(struct Node));
        scanf("%d", &p->Data);
        p->Next = L;  L = p;
    }
    printf("%d\n", FactorialSum(L));

    return 0;
}

/* ��Ĵ��뽫��Ƕ������ */
int dpow( int d ){
	int i,s=1;
	for(i=2;i<=d;i++)s*=i;
	return s;
}
int FactorialSum( List L ){
	int sum;
	if(L == NULL) return 0;
	sum=dpow(L->Data);
	while(L->Next != NULL){
		sum+=dpow(L->Next->Data);
		L = L->Next;
	}
	return sum;
}
