#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct Cards {
	char Name[30];
	int Wert1;
	double Wert2;
	struct Cards* pNext;
}structCards;

structCards ListofCards();

int main()
{
	printf("Diese welt sie gehört den juden nicht");
	printf("Kek = ", ListofCards());
}

structCards ListofCards() {
	structCards* pCard1 = (structCards*)malloc(sizeof(structCards));	//Pointer auf Struktur und gleichzeitig wird Arbeitsspeicher reserviert
	structCards* pStart = pCard1;

	//Informationen einfüllen
	strcpy_s(pCard1->Name, "Character1");
	pCard1->Wert1 = 1;
	pCard1->Wert2 = 2;

	//nächstes Element
	pCard1->pNext = NULL;

	structCards* pCard2 = (structCards*)malloc(sizeof(structCards));	 //Element 2 (Card2)

	//Informationen einfüllen
	strcpy_s(pCard2->Name, "Character2");
	pCard2->Wert1 = 1;
	pCard2->Wert2 = 2;

	//nächstes Element
	pCard2->pNext = NULL;

	structCards* pCard3 = (structCards*)malloc(sizeof(structCards));	 //Element 3 (Card3)

	//Informationen einfüllen
	strcpy_s(pCard3->Name, "Character3");
	pCard3->Wert1 = 1;
	pCard3->Wert2 = 2;

	//nächstes Element
	pCard3->pNext = NULL;


	structCards* pCard4 = (structCards*)malloc(sizeof(structCards));	 //Element 4 (Card4)

	//Informationen einfüllen
	strcpy_s(pCard4->Name, "Character4");
	pCard4->Wert1 = 1;
	pCard4->Wert2 = 2;

	//nächstes Element
	pCard4->pNext = NULL;


	structCards* pCard5 = (structCards*)malloc(sizeof(structCards));	 //Element 5 (Card5)

	//Informationen einfüllen
	strcpy_s(pCard5->Name, "Character5");
	pCard5->Wert1 = 1;
	pCard5->Wert2 = 2;

	//nächstes Element
	pCard5->pNext = NULL;

	structCards* pCard6 = (structCards*)malloc(sizeof(structCards));	 //Element 6 (Card6)

	//Informationen einfüllen
	strcpy_s(pCard6->Name, "Character1");
	pCard6->Wert1 = 1;
	pCard6->Wert2 = 2;

	//nächstes Element
	pCard6->pNext = NULL;



	structCards* pCard7 = (structCards*)malloc(sizeof(structCards));	 //Element 7 (Card7)

	//Informationen einfüllen
	strcpy_s(pCard7->Name, "Character8");
	pCard7->Wert1 = 1;
	pCard7->Wert2 = 2;

	//nächstes Element
	pCard7->pNext = NULL;


	structCards* pCard8 = (structCards*)malloc(sizeof(structCards));	 //Element 8 (Card8)

	//Informationen einfüllen
	strcpy_s(pCard8->Name, "Character8");
	pCard8->Wert1 = 1;
	pCard8->Wert2 = 2;

	//nächstes Element
	pCard8->pNext = NULL;


	structCards* pCard8 = (structCards*)malloc(sizeof(structCards));	 //Element 8 (Card8)

	//Informationen einfüllen
	strcpy_s(pCard8->Name, "Character1");
	pCard8->Wert1 = 1;
	pCard8->Wert2 = 2;

	//nächstes Element
	pCard8->pNext = NULL;


	structCards* pCard9 = (structCards*)malloc(sizeof(structCards));	 //Element 9 (Card9)

	//Informationen einfüllen
	strcpy_s(pCard9->Name, "Character9");
	pCard9->Wert1 = 1;
	pCard9->Wert2 = 2;

	//nächstes Element
	pCard9->pNext = NULL;



	structCards* pCard10 = (structCards*)malloc(sizeof(structCards));	 //Element 10 (Card10)

	//Informationen einfüllen
	strcpy_s(pCard10->Name, "Character10");
	pCard10->Wert1 = 1;
	pCard10->Wert2 = 2;

	//nächstes Element
	pCard10->pNext = NULL;

	pStart->pNext = pCard10;
}
