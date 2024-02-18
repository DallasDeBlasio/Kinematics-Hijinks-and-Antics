#include "source.h"
// for these arrays index 0 is velocity, index 1 is initaly velocity, index 3 is acceleration, index 4 is time, index 5 is final position, index 6 is begining position








int hasVariable(OneDVariables variables, int variableIndex)
{
	//int index = 0;
	//index = variable;
	int hasVariable = doesNotHave;//V = velocity
	if (variables.hasVariable[variableIndex] == doesHave)
	{
		hasVariable = doesHave;
	}
	return hasVariable;
}


double findVelocityMethod1(OneDVariables variables)
{
	double velocity = sqrt(variables.variableValue[initalVelocity] * variables.variableValue[initalVelocity] + 2 * variables.variableValue[acceleration] * (variables.variableValue[finalPosition] - variables.variableValue[initialPosition]));
	return velocity;
}
double findVelocityMethod2(OneDVariables variables)
{
	double velocity = 2 * (variables.variableValue[finalPosition] - variables.variableValue[initialPosition]) /variables.variableValue[time] - (variables.variableValue[initalVelocity]);
	return velocity;
}
int canUsefindVelocityMethod1(OneDVariables variables)//check if we have the proper variables to use method 1 to find velocity
{

}
int canUsefindVelocityMethod2(OneDVariables variables)//check if we have the proper variables to use method 1 to find velocity
{

}
int canFindVelocity(OneDVariables variables)
{

}

double findingVelocity(OneDVariables variables)
{
	double velocity = 0;
	if (hasVariable(variables, initalVelocity) && hasVariable(variables, acceleration) && hasVariable(variables, initialPosition) && hasVariable(variables, finalPosition))
	{// all these variables are needed for finding velocity via our first equation
		velocity = findVelocityMethod1(variables);
	}
	else if (hasVariable(variables, finalPosition) && hasVariable(variables, initialPosition) && hasVariable(variables, time) && hasVariable(variables, initalVelocity))
	{// all these variables are needed for fiding velocity with our second equation
		velocity = findVelocityMethod2(variables);
	}
	else//if cannot find velocity with provided variables
	{
		velocity = -141.141;
	}
}


double findVelocityMethod1(OneDVariables variables)
{
	double velocity = sqrt(variables.variableValue[initalVelocity] * variables.variableValue[initalVelocity] + 2 * variables.variableValue[acceleration] * (variables.variableValue[finalPosition] - variables.variableValue[initialPosition]));
	return velocity;
}
double findVelocityMethod2(OneDVariables variables)
{
	double velocity = 2 * (variables.variableValue[finalPosition] - variables.variableValue[initialPosition]) / variables.variableValue[time] - (variables.variableValue[initalVelocity]);
	return velocity;
}

double findingVelocity(OneDVariables variables)
{
	double velocity = 0;
	if (hasVariable(variables, initalVelocity) && hasVariable(variables, acceleration) && hasVariable(variables, initialPosition) && hasVariable(variables, finalPosition))
	{// all these variables are needed for finding velocity via our first equation
		velocity = findVelocityMethod1(variables);
	}
	else if (hasVariable(variables, finalPosition) && hasVariable(variables, initialPosition) && hasVariable(variables, time) && hasVariable(variables, initalVelocity))
	{
		velocity = findVelocityMethod2(variables);
	}
	else//if cannot find velocity with provided variables
	{
		velocity = -141.141;
	}
}


//
//int hasVelocity(OneDVariables variables)
//{
//	int hasV = doesNotHave;//V = velocity
//	if (variables.hasVariable[veloctiy] == doesHave)
//	{
//		hasV = doesHave;
//	}
//	return hasV;
//}
//int hasInitialVelocity(OneDVariables variables)
//{
//	int hasVi = doesNotHave;//Vi = initial velocity
//	if (variables.hasVariable[initalVelocity] == doesHave)
//	{
//		hasVi = doesHave;
//	}
//	return hasVi;
//}
//int hasAcceleration(OneDVariables variables)
//{
//	int hasA = doesNotHave;//A= acceleration
//	if (variables.hasVariable[initalVelocity] == doesHave)
//	{
//		hasA = doesHave;
//	}
//	return hasA;
//}
//double hasTime(OneDVariables variables)
//{
//	int hasT = doesNotHave;//t= time
//	if (variables.hasVariable[time] == doesHave)
//	{
//		hasT = doesHave;
//	}
//	return hasT;
//}
//double hasFinalPosition(OneDVariables variables)
//{
//	int hasFinalPosition = doesNotHave;//t= time
//	if (variables.hasVariable[finalPosition] == doesHave)
//	{
//		hasFinalPosition = doesHave;
//	}
//	return hasFinalPosition;
//}
//double hasInitialPosition(OneDVariables variables)
//{
//	int hasInitialPosition = doesNotHave;//t= time
//	if (variables.hasVariable[initialPosition] == doesHave)
//	{
//		hasInitialPosition = doesHave;
//	}
//	return hasInitialPosition;
//}