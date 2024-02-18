#include "source.h"
// for these arrays index 0 is velocity, index 1 is initaly velocity, index 3 is acceleration, index 4 is time, index 5 is final position, index 6 is begining position







//finds if the variables is present in the variables struct
//use enumerated types for variable Index
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


//more handy that calling the variables.variableValue[field] over and over again
//Only use of capital variable names
double FinalVelocity(OneDVariables variables)
{
	return variables.variableValue[veloctiy];
}

double InitialVelocity(OneDVariables variables)
{
	return variables.variableValue[initialPosition];
}

double Acceleration(OneDVariables variables)
{
	return variables.variableValue[acceleration];
}

double Time(OneDVariables variables)
{
	return variables.variableValue[time];
}

double InitialPosition(OneDVariables variables)
{
	return variables.variableValue[initialPosition];
}

double FinalPosition(OneDVariables variables)
{
	return variables.variableValue[finalPosition];
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
double findVelocityMethod3(OneDVariables variables)
{
	double velocity = variables.variableValue[initalVelocity] + variables.variableValue[acceleration] * variables.variableValue[time];
	return velocity;
}
int canUsefindVelocityMethod1(OneDVariables variables)//check if we have the proper variables to use method 1 to find velocity
{
	int canIUseIt = cannot;
	if (hasVariable(variables, initalVelocity) && hasVariable(variables, acceleration) && hasVariable(variables, initialPosition) && hasVariable(variables, finalPosition))
	{// all these variables are needed for finding velocity via our first equation
		canIUseIt = can;
	}
	return canIUseIt;
}
int canUsefindVelocityMethod2(OneDVariables variables)//check if we have the proper variables to use method 1 to find velocity
{
	int canIUseIt = cannot;
	if (hasVariable(variables, finalPosition) && hasVariable(variables, initialPosition) && hasVariable(variables, time) && hasVariable(variables, initalVelocity))
	{// all these variables are needed for fiding velocity with our second equation
		canIUseIt = can;
	}
	return canIUseIt;
}
int canUsefindVelocityMethod3(OneDVariables variables)//check if we have the proper variables to use method 1 to find velocity
{
	int canIUseIt = cannot;
	if (hasVariable(variables, initalVelocity) && hasVariable(variables, acceleration) && hasVariable(variables, time))
	{// all these variables are needed for fiding velocity with our second equation
		canIUseIt = can;
	}
	return canIUseIt;
}
int canFindVelocity(OneDVariables variables)
{
	int canIFindIt = cannot;
	if (canUsefindVelocityMethod1(variables) || canUsefindVelocityMethod2(variables) || canUsefindVelocityMethod3(variables))
	{// all these variables are needed for fiding velocity with our second equation
		canIFindIt = can;
	}
	return canIFindIt;
}

double findingVelocity(OneDVariables variables)
{
	double velocity = 0;
	if (canUsefindVelocityMethod1(variables))
	{
		velocity = findVelocityMethod1(variables);
	}
	else if (canUsefindVelocityMethod2(variables))
	{
		velocity = findVelocityMethod2(variables);
	}
	else if (canUsefindVelocityMethod3(variables))
	{
		velocity = findVelocityMethod3(variables);
	}
	else//if cannot find velocity with provided variables
	{
		velocity = -141.141;
	}
	return velocity;
}



double findInitialVelocityMethod1(OneDVariables variables)
{
	double initialVelocity = variables.variableValue[veloctiy] - variables.variableValue[acceleration] * (variables.variableValue[time]);
	return initialVelocity;
}
int canUsefindInitialVelocityMethod1(OneDVariables variables)//check if we have the proper variables to use method 1 to find velocity
{
	int canIUseIt = cannot;
	if (hasVariable(variables, veloctiy) && hasVariable(variables, acceleration) && hasVariable(variables, time))
	{// all these variables are needed for finding initial velocity via our first equation(method 1)
		canIUseIt = can;
	}
	return canIUseIt;
}

double findInitialVelocityMethod2(OneDVariables variables)
{
	double initialVelocity = sqrt(variables.variableValue[veloctiy]*variables.variableValue[veloctiy] - 2 * variables.variableValue[acceleration] * (variables.variableValue[finalPosition] - variables.variableValue[initialPosition]));
	return initialVelocity;
}
int canUsefindInitialVelocityMethod2(OneDVariables variables)//check if we have the proper variables to use method 1 to find velocity
{
	int canIUseIt = cannot;
	if (hasVariable(variables, veloctiy) && hasVariable(variables, acceleration) && hasVariable(variables, initialPosition) && hasVariable(variables, finalPosition))
	{// all these variables are needed for finding initial velocity via our first equation(method 1)
		canIUseIt = can;
	}
	return canIUseIt;
}

double findInitialVelocityMethod3(OneDVariables variables)
{
	double initialVelocity = 2*((variables.variableValue[finalPosition] - variables.variableValue[initialPosition])/variables.variableValue[time]) - variables.variableValue[veloctiy];
	return initialVelocity;
}
int canUsefindInitialVelocityMethod3(OneDVariables variables)//check if we have the proper variables to use method 1 to find velocity
{
	int canIUseIt = cannot;
	if (hasVariable(variables, finalPosition) && hasVariable(variables, initialPosition) && hasVariable(variables, time) && hasVariable(variables, veloctiy))
	{// all these variables are needed for finding initial velocity via our first equation(method 1)
		canIUseIt = can;
	}
	return canIUseIt;
}

int canFindInitialVelocity(OneDVariables variables)
{
	int canIFindIt = cannot;
	if (canUsefindInitialVelocityMethod1(variables) || canUsefindInitialVelocityMethod2(variables) || canUsefindInitialVelocityMethod3(variables))
	{// all these variables are needed for fiding velocity with our second equation
		canIFindIt = can;
	}
	return canIFindIt;
}

double findingInitialVelocity(OneDVariables variables)
{
	double initialVelocity = 0;
	if (canUsefindInitialVelocityMethod1(variables))
	{
		initialVelocity = findInitialVelocityMethod1(variables);
	}
	else if (canUsefindInitialVelocityMethod2(variables))
	{
		initialVelocity = findInitialVelocityMethod2(variables);
	}
	else if (canUsefindInitialVelocityMethod3(variables))
	{
		initialVelocity = findInitialVelocityMethod3(variables);
	}
	else//if cannot find velocity with provided variables, should not be reached
	{
		initialVelocity = -141.141;
	}
	return initialVelocity;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////


double findAccelerationMethod1(OneDVariables variables)
{
	double acceleration = (variables.variableValue[veloctiy] - variables.variableValue[initalVelocity]) / (variables.variableValue[time]);
	return acceleration;
}
int canUsefindAccelerationMethod1(OneDVariables variables)//check if we have the proper variables to use method 1 to find velocity
{
	int canIUseIt = cannot;
	if (hasVariable(variables, veloctiy) && hasVariable(variables, initalVelocity) && hasVariable(variables, time))
	{// all these variables are needed for finding initial velocity via our first equation(method 1)
		canIUseIt = can;
	}
	return canIUseIt;
}

double findAccelerationMethod2(OneDVariables variables)
{
	double acceleration = 2*(variables.variableValue[finalPosition] - variables.variableValue[initialPosition] - variables.variableValue[initalVelocity] * variables.variableValue[time])/(variables.variableValue[time]* variables.variableValue[time]);
	return acceleration;
}
int canUsefindAccelerationMethod2(OneDVariables variables)//check if we have the proper variables to use method 1 to find velocity
{
	int canIUseIt = cannot;
	if (hasVariable(variables, finalPosition) && hasVariable(variables, initialPosition) && hasVariable(variables, initalVelocity) && hasVariable(variables, time))
	{// all these variables are needed for finding initial velocity via our first equation(method 1)
		canIUseIt = can;
	}
	return canIUseIt;
}

double findAccelerationMethod3(OneDVariables variables)
{
	double acceleration = (variables.variableValue[veloctiy] * variables.variableValue[veloctiy] - variables.variableValue[initalVelocity] * variables.variableValue[initalVelocity]) / ((variables.variableValue[finalPosition] - variables.variableValue[initialPosition])*2);
	return acceleration;
}
int canUsefindAccelerationMethod3(OneDVariables variables)//check if we have the proper variables to use method 1 to find velocity
{
	int canIUseIt = cannot;
	if (hasVariable(variables, finalPosition) && hasVariable(variables, initialPosition) && hasVariable(variables, initalVelocity) && hasVariable(variables, time))
	{// all these variables are needed for finding initial velocity via our first equation(method 1)
		canIUseIt = can;
	}
	return canIUseIt;
}

int canFindAcceleration(OneDVariables variables)
{
	int canIFindIt = cannot;
	if (canUsefindAccelerationMethod3(variables) || canUsefindAccelerationMethod3(variables) || canUsefindAccelerationMethod3(variables))
	{// all these variables are needed for fiding velocity with our second equation
		canIFindIt = can;
	}
	return canIFindIt;
}

double findingAcceleration(OneDVariables variables)
{
	double initialVelocity = 0;
	if (canUsefindAccelerationMethod3(variables))
	{
		initialVelocity = findAccelerationMethod1(variables);
	}
	else if (canUsefindAccelerationMethod3(variables))
	{
		initialVelocity = findAccelerationMethod2(variables);
	}
	else if (canUsefindAccelerationMethod3(variables))
	{
		initialVelocity = findAccelerationMethod3(variables);
	}
	else//if cannot find velocity with provided variables, should not be reached
	{
		initialVelocity = -141.141;
	}
	return initialVelocity;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////


double findTimeMethod1(OneDVariables variables)
{
	double time = (variables.variableValue[veloctiy] - variables.variableValue[initalVelocity]) / (variables.variableValue[acceleration]);
	return time;
}
int canUsefindTimeMethod1(OneDVariables variables)//check if we have the proper variables to use method 1 to find velocity
{
	int canIUseIt = cannot;
	if (hasVariable(variables, veloctiy) && hasVariable(variables, initalVelocity) && hasVariable(variables, acceleration))
	{// all these variables are needed for finding initial velocity via our first equation(method 1)
		canIUseIt = can;
	}
	return canIUseIt;
}

double findTimeMethod2(OneDVariables variables)
{
	double time = 2*(FinalPosition(variables) - InitialPosition(variables)) / (InitialVelocity(variables)+FinalVelocity(variables));
	return time;
}
int canUsefindTimeMethod2(OneDVariables variables)//check if we have the proper variables to use method 1 to find velocity
{
	int canIUseIt = cannot;
	if (hasVariable(variables, finalPosition) && hasVariable(variables, initialPosition) && hasVariable(variables, initalVelocity) && hasVariable(variables, veloctiy))
	{// all these variables are needed for finding initial velocity via our first equation(method 1)
		canIUseIt = can;
	}
	return canIUseIt;
}


//check the preconditions for the quadratic formula (a cannot be 0 (divide by 0) and b^2 - 4ac >= 0 (negative square root))
int canUseQuadraticFormula(double a, double b, double c)
{
	int canIUseIt = can;
	if(a == 0)
	{ 
		canIUseIt = cannot;
	}
	else if((b * b - 4 * a * c) < 0)
	{
		canIUseIt = cannot;
	}
	return canIUseIt;
}

//preCondition a cannot be 0 (divide by 0) and b^2 - 4ac >= 0 (negative square root)
double quadraticFormulaPlus(double a, double b, double c)
{
	return (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
}

//preCondition a cannot be 0 (divide by 0) and b^2 - 4ac >= 0 (negative square root)
double quadraticFormulaMinus(double a, double b, double c)
{
	return (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
}


//returns a negative if there are issue
double findTimeMethod3Temp(OneDVariables variables)
{
	double a = 1.0 / 2.0 * Acceleration(variables);
	double b = InitialVelocity(variables);
	double c = (InitialPosition(variables) - FinalPosition(variables));
	int time = 0;
	//double time = 2 * (FinalPosition(variables) - InitialPosition(variables)) / (InitialVelocity(variables) + FinalVelocity(variables));
	if (canUseQuadraticFormula(a, b, c))
	{
		//q=quadratic
		int qMinus = quadraticFormulaMinus(a, b, c);
		int qPlus = quadraticFormulaMinus(a, b, c);

		if (qMinus == qPlus)//if theres only one point
		{
			time = qMinus;
		}
		else if (qMinus < 0 && qPlus>0)//if there's qMinus is negative 
		{
			time = qPlus;
		}
		else if (qPlus < 0 && qMinus>0)//if there's qMinus is negative 
		{
			time = qMinus;
		}
		else
		{
			return -1;//FIX ME DADDY
		}


	}
	return time;
}
int canUsefindTimeMethod3(OneDVariables variables)//check if we have the proper variables to use method 1 to find velocity
{
	int canIUseIt = cannot;
	if (hasVariable(variables, acceleration) && hasVariable(variables, initalVelocity) && hasVariable(variables, initialPosition) && hasVariable(variables, finalPosition))
	{// all these variables are needed for finding initial velocity via our first equation(method 1)
		canIUseIt = can;
	}
	return canIUseIt;
}

int canFindTime(OneDVariables variables)
{
	int canIFindIt = cannot;
	if (canUsefindTimeMethod1(variables) || canUsefindTimeMethod2(variables) || canUsefindTimeMethod3(variables))
	{// all these variables are needed for fiding velocity with our second equation
		canIFindIt = can;
	}
	return canIFindIt;
}

double findingTime(OneDVariables variables)
{
	double time = 0;
	if (canUsefindTimeMethod1(variables))
	{
		time = findTimeMethod2(variables);
	}
	else if (canUsefindTimeMethod2(variables))
	{
		time = findTimeMethod2(variables);
	}
	else if (canUsefindTimeMethod3(variables))
	{
		time = findTimeMethod3Temp(variables);
	}
	else//if cannot find velocity with provided variables, should not be reached
	{
		time = -141.141;
	}
	return time;
}



double findFinalPositionMethod1(OneDVariables variables)
{
	double finalPosition = (InitialPosition(variables) + InitialVelocity(variables) * Time(variables) + 1 / 2 * Acceleration(variables) * Time(variables) * Time(variables));
	return finalPosition;
}
int canUsefindFinalDistanceMethod1(OneDVariables variables)//check if we have the proper variables to use method 1 to find velocity
{
	int canIUseIt = cannot;
	if (hasVariable(variables, initialPosition) && hasVariable(variables, veloctiy) && hasVariable(variables, time) && hasVariable(variables, acceleration))
	{// all these variables are needed for finding initial velocity via our first equation(method 1)
		canIUseIt = can;
	}
	return canIUseIt;
}

double findFinalPositionMethod2(OneDVariables variables)
{
	double finalPosition = (FinalVelocity(variables) * FinalVelocity(variables) - InitialVelocity(variables) * InitialVelocity(variables)) / (2 *Acceleration(variables)) + InitialPosition(variables);
	return finalPosition;
}
int canUsefindFinalDistanceMethod2(OneDVariables variables)//check if we have the proper variables to use method 1 to find velocity
{
	int canIUseIt = cannot;
	if (hasVariable(variables, veloctiy) && hasVariable(variables, initalVelocity) && hasVariable(variables, acceleration) && hasVariable(variables, initialPosition))
	{// all these variables are needed for finding initial velocity via our first equation(method 1)
		canIUseIt = can;
	}
	return canIUseIt;
}

double findFinalPositionMethod3(OneDVariables variables)
{
	double finalPosition = (FinalVelocity(variables) + InitialVelocity(variables)) / 2 + InitialPosition(variables);
	return finalPosition;
}
int canUsefindFinalDistanceMethod3(OneDVariables variables)//check if we have the proper variables to use method 1 to find velocity
{
	int canIUseIt = cannot;
	if (hasVariable(variables, veloctiy) && hasVariable(variables, initalVelocity) && hasVariable(variables, initialPosition))
	{// all these variables are needed for finding initial velocity via our first equation(method 1)
		canIUseIt = can;
	}
	return canIUseIt;
}

int canFindTime(OneDVariables variables)
{
	int canIFindIt = cannot;
	if (canUsefindFinalDistanceMethod1(variables) || canUsefindTimeMethod2(variables) || canUsefindTimeMethod3(variables))
	{// all these variables are needed for fiding velocity with our second equation
		canIFindIt = can;
	}
	return canIFindIt;
}

double findingTime(OneDVariables variables)
{
	double finalPosition = 0;
	if (canUsefindFinalDistanceMethod1(variables))
	{
		finalPosition = findFinalPositionMethod1(variables);
	}
	else if (canUsefindFinalDistanceMethod2(variables))
	{
		finalPosition = findFinalPositionMethod2(variables);
	}
	else if (canUsefindFinalDistanceMethod3(variables))
	{
		finalPosition = findFinalPositionMethod3(variables);
	}
	else//if cannot find velocity with provided variables, should not be reached
	{
		finalPosition = -141.141;
	}
	return finalPosition;
}

//Position

double findInitialPositionMethod1(OneDVariables variables)
{
	double initialPosition = (InitialPosition(variables) + InitialVelocity(variables) * Time(variables) + 1 / 2 * Acceleration(variables) * Time(variables) * Time(variables));
	return initialPosition;
}
int canUsefindFinalDistanceMethod1(OneDVariables variables)//check if we have the proper variables to use method 1 to find velocity
{
	int canIUseIt = cannot;
	if (hasVariable(variables, initialPosition) && hasVariable(variables, veloctiy) && hasVariable(variables, time) && hasVariable(variables, acceleration))
	{// all these variables are needed for finding initial velocity via our first equation(method 1)
		canIUseIt = can;
	}
	return canIUseIt;
}

double findFinalPositionMethod2(OneDVariables variables)
{
	double initialPosition = (FinalVelocity(variables) * FinalVelocity(variables) - InitialVelocity(variables) * InitialVelocity(variables)) / (2 * Acceleration(variables)) + InitialPosition(variables);
	return initialPosition;
}
int canUsefindFinalDistanceMethod2(OneDVariables variables)//check if we have the proper variables to use method 1 to find velocity
{
	int canIUseIt = cannot;
	if (hasVariable(variables, veloctiy) && hasVariable(variables, initalVelocity) && hasVariable(variables, acceleration) && hasVariable(variables, initialPosition))
	{// all these variables are needed for finding initial velocity via our first equation(method 1)
		canIUseIt = can;
	}
	return canIUseIt;
}

double findFinalPositionMethod3(OneDVariables variables)
{
	double initialPosition = (FinalVelocity(variables) + InitialVelocity(variables)) / 2 + InitialPosition(variables);
	return initialPosition;
}
int canUsefindFinalDistanceMethod3(OneDVariables variables)//check if we have the proper variables to use method 1 to find velocity
{
	int canIUseIt = cannot;
	if (hasVariable(variables, veloctiy) && hasVariable(variables, initalVelocity) && hasVariable(variables, initialPosition))
	{// all these variables are needed for finding initial velocity via our first equation(method 1)
		canIUseIt = can;
	}
	return canIUseIt;
}

int canFindTime(OneDVariables variables)
{
	int canIFindIt = cannot;
	if (canUsefindFinalDistanceMethod1(variables) || canUsefindTimeMethod2(variables) || canUsefindTimeMethod3(variables))
	{// all these variables are needed for fiding velocity with our second equation
		canIFindIt = can;
	}
	return canIFindIt;
}

double findingTime(OneDVariables variables)
{
	double finalPosition = 0;
	if (canUsefindFinalDistanceMethod1(variables))
	{
		finalPosition = findFinalPositionMethod1(variables);
	}
	else if (canUsefindFinalDistanceMethod2(variables))
	{
		finalPosition = findFinalPositionMethod2(variables);
	}
	else if (canUsefindFinalDistanceMethod3(variables))
	{
		finalPosition = findFinalPositionMethod3(variables);
	}
	else//if cannot find velocity with provided variables, should not be reached
	{
		finalPosition = -141.141;
	}
	return finalPosition;
}
/*
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
*/


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