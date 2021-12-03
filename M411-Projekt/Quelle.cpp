#include <stdlib.h>
#include <stdio.h>

int main()
{
	printf("Diese welt sie gehört den juden nicht");
}


typedef struct Cards {
	char Name[30];
	int Wert1;
	double Wert2;
	struct Cards* pNext;
}structCards;