#include "source.h"




int main(void)
{

	OneDVariables variables;
	variables.hasVariable[veloctiy] = 0;
	variables.variableValue[veloctiy] = 0;

	variables.hasVariable[initalVelocity] = 1;
	variables.variableValue[initalVelocity] = 3;

	variables.hasVariable[acceleration] = 0;
	variables.variableValue[acceleration] = 5;


	variables.hasVariable[time] = 0;
	variables.variableValue[time] = 5;

	variables.hasVariable[initialPosition] = 1;
	variables.variableValue[initialPosition] = 2;

	variables.hasVariable[finalPosition] = 1;
	variables.variableValue[finalPosition] = 4;

	

	return 14;
}