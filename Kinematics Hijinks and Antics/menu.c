#include "menu.h"

/***********************The main menu function that lets the user navigate our program*************************/
void MainMenu()
{
	OneDVariables testVariables;
	for (int i = 0;i < 6; i++)
	{
		testVariables.hasVariable[i] = 0;
		testVariables.variableValue[i] = 0;
	}

	int checkInputNumber = 0;
	int mainMenuExitNumber = 0;
	int miniMunuExitNumber = 0;

	while (mainMenuExitNumber < 1)
	{
		system("cls");
		do {
			printf("Welcome to the Physics Calculator\n");
			printf("To navigate, please type the number next to the prompt\n");
			printf("1) 1D kinimatics calculator\n");
			printf("2) Exit the program\n");
			scanf("%d", &checkInputNumber);
			clearScanf();
		} while (checkInputNumber < 0 || checkInputNumber > 2);

		if (checkInputNumber == 1)
		{
			fetchMeTheirSouls(&testVariables);
			while(miniMunuExitNumber<2)
			{
				int index = getBasicDesiredField1DKinematicsConstantAcceleration();
				if (index == 6)
				{
					break;
				}
				collectionForCalculation(&testVariables);
				printSearchedNumber(testVariables, index);
				system("pause");
				system("cls");
			}
			system("\npause\n");
			
		}
		else if (checkInputNumber == 2)
		{
			system("cls");
			printf("Hope to see you again! :)");
			mainMenuExitNumber = 2;
		}
	}
}