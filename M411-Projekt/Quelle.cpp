#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int plynorcanc;

typedef struct Cards {
	char Name[30];
	int Wert1;
	double Wert2;
	struct Cards* pNext;
}structCards;

structCards ListofCards();
void Titelmenue();

int main()
{
	Titelmenue();

}

structCards ListofCards() {
	structCards* pCard = (structCards*)malloc(sizeof(structCards));	//Pointer auf Struktur und gleichzeitig wird Arbeitsspeicher reserviert
	structCards* pStart = pCard;									//Anfang Element

	//Informationen einfüllen
	strcpy_s(pCard->Name, "Character1");
	pCard->Wert1 = 1;
	pCard->Wert2 = 2;

	//nächstes Element
	pCard->pNext = NULL;

	structCards* pCard = (structCards*)malloc(sizeof(structCards));	 //Element 2 

	//Informationen einfüllen
	strcpy_s(pCard->Name, "Character2");
	pCard->Wert1 = 1;
	pCard->Wert2 = 2;

	//nächstes Element
	pCard->pNext = NULL;
	pStart->pNext = pCard;

	structCards* pCard = (structCards*)malloc(sizeof(structCards));	 //Element 3 

	//Informationen einfüllen
	strcpy_s(pCard->Name, "Character3");
	pCard->Wert1 = 1;
	pCard->Wert2 = 2;

	//nächstes Element
	pCard->pNext = NULL;
	pStart->pNext = pCard;

	structCards* pCard = (structCards*)malloc(sizeof(structCards));	 //Element 4 

	//Informationen einfüllen
	strcpy_s(pCard->Name, "Character4");
	pCard->Wert1 = 1;
	pCard->Wert2 = 2;

	//nächstes Element
	pCard->pNext = NULL;
	pStart->pNext = pCard;


	structCards* pCard = (structCards*)malloc(sizeof(structCards));	 //Element 5 

	//Informationen einfüllen
	strcpy_s(pCard->Name, "Character5");
	pCard->Wert1 = 1;
	pCard->Wert2 = 2;

	//nächstes Element
	pCard->pNext = NULL;
	pStart->pNext = pCard;

	structCards* pCard6 = (structCards*)malloc(sizeof(structCards));	 //Element 6 

	//Informationen einfüllen
	strcpy_s(pCard->Name, "Character1");
	pCard->Wert1 = 1;
	pCard->Wert2 = 2;

	//nächstes Element
	pCard->pNext = NULL;
	pStart->pNext = pCard;



	structCards* pCard = (structCards*)malloc(sizeof(structCards));	 //Element 7

	//Informationen einfüllen
	strcpy_s(pCard->Name, "Character8");
	pCard->Wert1 = 1;
	pCard->Wert2 = 2;

	//nächstes Element
	pCard->pNext = NULL;
	pStart->pNext = pCard;


	structCards* pCard = (structCards*)malloc(sizeof(structCards));	 //Element 8 

	//Informationen einfüllen
	strcpy_s(pCard->Name, "Character8");
	pCard->Wert1 = 1;
	pCard->Wert2 = 2;

	//nächstes Element
	pCard->pNext = NULL;
	pStart->pNext = pCard;


	structCards* pCard = (structCards*)malloc(sizeof(structCards));	 //Element 9 

	//Informationen einfüllen
	strcpy_s(pCard->Name, "Character1");
	pCard->Wert1 = 1;
	pCard->Wert2 = 2;

	//nächstes Element
	pCard->pNext = NULL;
	pStart->pNext = pCard;


	structCards* pCard = (structCards*)malloc(sizeof(structCards));	 //Element 10

	//Informationen einfüllen
	strcpy_s(pCard->Name, "Character9");
	pCard->Wert1 = 1;
	pCard->Wert2 = 2;

	//nächstes Element
	pCard->pNext = NULL;
	pStart->pNext = pCard;


}
void Titelmenue() {
	printf("-------------------\n");
	printf("Willkommen im Spiel\n");
	printf("--------------------\n");
	printf("Spielen (1) // Beenden (2)");
	scanf_s("%i", &plynorcanc);

	if (plynorcanc == 1) {

	}

	if (plynorcanc == 2) {

	}
	



	

	
}
