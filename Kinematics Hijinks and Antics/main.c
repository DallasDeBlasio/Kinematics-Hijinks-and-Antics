#include "source.h"




int main(void)
{

	//menu navigation
	int MainMenuExitCode = 3;
	int MainMenuNav = 0;



	int testing = 1;
	if (testing != 1)
	{
		do//main menu loop begin
		{
			printf("Welcome to the Kinematics Calculator\n");
			printf("If you would like to enter our calculator, please enter 1\n");
			//printf("If you would like to try and find a plant via questions, please enter 2\n");
			printf("If you would like to exit the program, please enter 2\n");
			//printf("\n");
			//printf("\n");
			



		} while (MainMenuNav == MainMenuExitCode);//main menu loop end
	}

	OneDVariables variables;
	variables.hasVariable[veloctiy] = 0;
	variables.variableValue[veloctiy] = 0;

	variables.hasVariable[initalVelocity] = 1;
	variables.variableValue[initalVelocity] = 3;

	variables.hasVariable[acceleration] = 1;
	variables.variableValue[acceleration] = 5;


	variables.hasVariable[time] = 0;
	variables.variableValue[time] = 5;

	variables.hasVariable[initialPosition] = 1;
	variables.variableValue[initialPosition] = 2;

	variables.hasVariable[finalPosition] = 1;
	variables.variableValue[finalPosition] = 4;

	

	printf("%lf", findingVelocity(variables));

	return 14;
}