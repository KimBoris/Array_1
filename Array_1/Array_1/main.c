#include <stdio.h>

int main()
{/*
	printf("%d\n", sizeof(int[5]));

	int aList[5];
	printf("%d\n", sizeof(aList));*/



	/*int aList[3] = { 0 };
	aList[0] = 10;
	aList[1] = 20;
	aList[2] = 30;*/

	/*int aList[5] = { 30,40,10,50,20 };
	int i = 0;


	for (i = 0; i < 5; i++)
	{
		if (aList[0] < aList[i])
		{
			aList[0] = aList[i];
		}
	}

	for (i = 0; i < 5; ++i)
	{
		printf("%d\t", aList[i]);
	}
	printf("MAX : %d", aList[0]);*/



	int aList[5] = { 30, 40, 10, 50, 20 };
	int i = 0, nTmp = 0;

	for (i = 0; i < 4; i++)
	{
		if (aList[0] > aList[i])
		{
			nTmp = aList[i];
			aList[i] = aList[0];
			aList[0] = nTmp;
		}

	}
	for(int i = 0; i< 5; i++){
		printf("%d", aList[i]);

	}
	printf("Min : %d", aList[0]);


	return 0;
}