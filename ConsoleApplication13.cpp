

#include "stdafx.h"
#include <string.h>
#include <stdio.h>

void main()
{
	char names[10][40] = {
		"Thomas Walker", 
		"Chris Barnes", 
		"Billy Phillips",
		"Joseph Thompson", 
		"Beverly Perry", 
		"Linda Carter", 
		"Cheryl Ramirez",
		"Gerald Williams", 
		"Ralph Smith", 
		"Jacqueline Ross"};

	printf("FIRST NAMES:\n");

	char firstNames[10][40];

	int i= 0;
	int j = 0;

	for (i = 0; i < 10; i++)
	{
		j = 0;
		while(names[i][j] != ' ')
		{
			firstNames[i][j] = names[i][j];

			j++;
		}
		
		firstNames[i][j] = '\0';

		printf(" = %s\n", firstNames[i]);

	}

	printf("\n\nSURNAMES:\n");


	char surNames[10][40];
	
	int c = 0;
	i = 0;
	j = 0;

	for (i = 0; i < 10; i++)
	{
		j = 0;
		
		while (names[i][j] != ' ')
		{
		
			j++;
		}

		while (names[i][j] != '\0')
		{

			surNames[i][c] = names[i][j + 1];
			j++;
			c++;
		}
		
		surNames[i][c] = '\0';
		
		printf(" = %s\n", surNames[i]);
		j = 0;
		c = 0;

	}

	char newNames[40][10];


	printf("\n\nNEW NAMES:\n");
	
	
		surNames[0][40] = '\0';
		strcat(newNames[40], firstNames[40]);
		strcat(newNames[40], " ");
		strcat(newNames[40], surNames[40]);
	

}


