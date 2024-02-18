#include "source.h"

//inspired by Pablo on stack overflow
//https://stackoverflow.com/questions/49865301/can-someone-explain-why-my-fgets-is-skipping-lines-when-i-enter-more-then-allowe

void clearScanf(void)
{
	char clearChar;
	while ((clearChar = getchar()) != '\n' && clearChar != EOF);
	{
	}
}

/***********************Funciton to be able to get all of the *************************/
void fetchMeTheirSouls(OneDVariables* variables)
{
	getVariableForStruct(&((*variables).hasVariable[veloctiy]), &((*variables).variableValue[veloctiy]), "Veloctiy");
	getVariableForStruct(&((*variables).hasVariable[initalVelocity]), &((*variables).variableValue[initalVelocity]), "Initial Velocity");
	getVariableForStruct(&((*variables).hasVariable[acceleration]), &((*variables).variableValue[acceleration]), "Acceleration");
	getVariableForStruct(&((*variables).hasVariable[time]), &((*variables).variableValue[time]), "time");
	getVariableForStruct(&((*variables).hasVariable[finalPosition]), &((*variables).variableValue[finalPosition]), "final Position");
	getVariableForStruct(&((*variables).hasVariable[initialPosition]), &((*variables).variableValue[initialPosition]), "initial Position");
}

void printStructInfo(OneDVariables variables)
{
	printf("Does it have a variable: %d,    Variable number: %f\n", variables.hasVariable[veloctiy], variables.variableValue[veloctiy]);
	printf("Does it have a variable: %d,    Variable number: %f\n", variables.hasVariable[initalVelocity], variables.variableValue[initalVelocity]);
	printf("Does it have a variable: %d,    Variable number: %f\n", variables.hasVariable[acceleration], variables.variableValue[acceleration]);
	printf("Does it have a variable: %d,    Variable number: %f\n", variables.hasVariable[time], variables.variableValue[time]);
	printf("Does it have a variable: %d,    Variable number: %f\n", variables.hasVariable[finalPosition], variables.variableValue[finalPosition]);
	printf("Does it have a variable: %d,    Variable number: %f\n", variables.hasVariable[initialPosition], variables.variableValue[initialPosition]);
}

//getVariableForStruct(&variables.hasVariable[initalVelocity],variables.variableValue[initalVelocity],"Initial Velocity");
void getVariableForStruct(int* variableIsHad, double* variableValue, char* field)
{
	system("cls");
	char initialVelocity[32] = { '0' };
	printf("if the value is unknown please enter in a \"?\"\n");
	printf("Please enter the %s: ", field);
	scanf("%s", initialVelocity);
	if (isdigit(*initialVelocity))
	{
		double FinalVelocity = atof(initialVelocity);
		*(variableIsHad) = 1;
		*(variableValue) = FinalVelocity;
	}
	else if (*initialVelocity == '?')
	{
		*(variableIsHad) = 0;
	}
	else
	{
		printf("\n");
		printf("please enter a valid input, you will be taken back to enter a new number\n");
		system("pause");
		getVariableForStruct(variableIsHad, variableValue, field);
	}
}

int getBasicDesiredField1DKinematicsConstantAcceleration(void)
{
	int menuNav = 0;
	do
	{
		system("cls");
		printf("To navigate, please type the number next to the prompt\n");
		printf("Please enter the number of the variable you would like to find\n");
		printf("(0) Final Velocity\n");
		printf("(1) Initial Velocity\n");
		printf("(2) Acceleration\n");
		printf("(3) Time\n");
		printf("(4) Final Position\n");
		printf("(5) Initial Position\n");
		printf("Or enter 6 to exit\n");
		scanf("%d", &menuNav);
		clearScanf();
	} while (menuNav<0||menuNav>5);
	return menuNav;
}

void printSearchedNumber(OneDVariables variables, int index)
{
	if (index == 0)
	{
		if (variables.hasVariable[index] == 0)
		{
			//calculate function
			printf("coming soon\n");
		}
		else
		{
			printf("The final velocity is: %f\n", variables.variableValue[index]);
		}
	}

	if (index == 1)
	{
		if (variables.hasVariable[index] == 0)
		{
			//calculate function
			printf("coming soon\n");
		}
		else
		{
			printf("The initial velocity is: %f\n", variables.variableValue[index]);
		}
	}
	if (index == 2)
	{
		if (variables.hasVariable[index] == 0)
		{
			//calculate function
			printf("coming soon\n");
		}
		else
		{
			printf("The acceleration is: %f\n", variables.variableValue[index]);
		}
	}
	if (index == 3)
	{
		if (variables.hasVariable[index] == 0)
		{
			//calculate function
			printf("coming soon\n");
		}
		else
		{
			printf("The time is: %f\n", variables.variableValue[index]);
		}
	}
	if (index == 4)
	{
		if (variables.hasVariable[index] == 0)
		{
			//calculate function
			printf("coming soon\n");
		}
		else
		{
			printf("The final position is: %f\n", variables.variableValue[index]);
		}
	}
	if (index == 5)
	{
		if (variables.hasVariable[index] == 0)
		{
			//calculate function
			printf("coming soon\n");
		}
		else
		{
			printf("The initial position is: %f\n", variables.variableValue[index]);
		}
	}
}