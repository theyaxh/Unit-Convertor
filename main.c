#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "length.c"
#include "temperature.c"
#include "mass.c"

void length();
void temperature();
void mass();

int main()
{
    printf("PLEASE MAKE THE TERMINAL FULL SCREEN AND PRESS ANY KEY TO CONTINUE:)\n");
	getch();
    system("cls");
	system("color 60");
	char choice1;	
	printf("\n     ############################################################");
    printf("\n     #                WELCOME TO UNIT CONVERTOR!                #");
    printf("\n     #**********************************************************#");
    printf("\n     #               Choose the following options:              #");
	printf("\n     #                1. Length Unit Convertor                  #");
	printf("\n     #                2. Temperature Unit Convertor             #");
	printf("\n     #                3. Mass Unit Convertor                    #\n");
    
	do
	{
        printf("     #==========================================================#");
		printf("\n                Please enter your choice from 1 to 3: ");
		scanf("%s", &choice1);
	} while (choice1 != '1' && choice1 != '2' && choice1 != '3');

	switch(choice1)
	{
		case '1':
		{
			system("color b0");
			length();
			break;
		}
		case '2':
		{
			system("color c0");
			temperature();
			break;
		}
		case '3':
		{
			system("color a0");
			mass();
			break;
		}
	}
	return 0;
}