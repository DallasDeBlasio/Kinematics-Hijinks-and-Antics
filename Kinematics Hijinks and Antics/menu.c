#include "menu.h"


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

	while (mainMenuExitNumber < 1)
	{
		system("cls");
		do {
			printf("Welcome to the Physics Calculator\n");
			printf("To navigate, please type the number next to the prompt\n");
			printf("1) 1D kinimatics calculator\n");
			printf("2) Fluids calculator\n");
			printf("3) Exit the program\n");
			scanf("%d", &checkInputNumber);
			clearScanf();
		} while (checkInputNumber < 0 || checkInputNumber > 3);

		if (checkInputNumber == 1)
		{
			fetchMeTheirSouls(&testVariables);
			//printStructInfo(testVariables);
			int index = getBasicDesiredField1DKinematicsConstantAcceleration();
			system("cls");
			printSearchedNumber(testVariables, index);
			system("\npause\n");
		}
		else if (checkInputNumber == 2)
		{
			printf("coming soon");
		}
		else if (checkInputNumber == 3)
		{
			system("cls");
			printf("Hope to see you again! :)");
			mainMenuExitNumber = 2;
		}
	}
}