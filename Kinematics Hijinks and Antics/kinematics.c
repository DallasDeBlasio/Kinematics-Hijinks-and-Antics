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

/***********************this function is for returning the final velocity index of the struct*************************/
double FinalVelocity(OneDVariables variables)
{
	return variables.variableValue[veloctiy];
}

/***********************this function is for returning the initial velocity index of the struct*************************/
double InitialVelocity(OneDVariables variables)
{
	return variables.variableValue[initalVelocity];
}

/***********************this function is for returning the acceleration index of the struct*************************/
double Acceleration(OneDVariables variables)
{
	return variables.variableValue[acceleration];
}

/***********************this function is for returning the time index of the struct*************************/
double Time(OneDVariables variables)
{
	return variables.variableValue[time];
}

/***********************this function is for returning the initial position index of the struct*************************/
double InitialPosition(OneDVariables variables)
{
	return variables.variableValue[initialPosition];
}

/***********************this function is for returning the final position index of the struct*************************/
double FinalPosition(OneDVariables variables)
{
	return variables.variableValue[finalPosition];
}










/////////////////////////////////////////////////////Final Velocity///////////////////////////////////////////////////////////////

















////////////////////////////////////////////////////////////////////////// All the ways to calculate velocity

/***********************the first method to calculate velocity*************************/
double findVelocityMethod1(OneDVariables variables)
{
	double velocity = sqrt(variables.variableValue[initalVelocity] * variables.variableValue[initalVelocity] + 2 * variables.variableValue[acceleration] * (variables.variableValue[finalPosition] - variables.variableValue[initialPosition]));
	return velocity;
}
/***********************the second method to calculate velocity*************************/
double findVelocityMethod2(OneDVariables variables)
{
	double velocity = 2 * (variables.variableValue[finalPosition] - variables.variableValue[initialPosition]) / variables.variableValue[time] - (variables.variableValue[initalVelocity]);
	return velocity;
}
/***********************the third method to calculate velocity*************************/
double findVelocityMethod3(OneDVariables variables)
{
	double velocity = variables.variableValue[initalVelocity] + variables.variableValue[acceleration] * variables.variableValue[time];
	return velocity;
}

////////////////////////////////////////////////////////////////////////// All the checks for if each calculation method is valid

/***********************the first method check to calculate velocity*************************/
int canUsefindVelocityMethod1(OneDVariables variables)//check if we have the proper variables to use method 1 to find velocity
{
	int canIUseIt = cannot;
	if (hasVariable(variables, initalVelocity) && hasVariable(variables, acceleration) && hasVariable(variables, initialPosition) && hasVariable(variables, finalPosition))
	{// all these variables are needed for finding velocity via our first equation
		canIUseIt = can;
	}
	return canIUseIt;
}
/***********************the second method check to calculate velocity*************************/
int canUsefindVelocityMethod2(OneDVariables variables)//check if we have the proper variables to use method 1 to find velocity
{
	int canIUseIt = cannot;
	if (hasVariable(variables, finalPosition) && hasVariable(variables, initialPosition) && hasVariable(variables, time) && hasVariable(variables, initalVelocity))
	{// all these variables are needed for fiding velocity with our second equation
		canIUseIt = can;
	}
	return canIUseIt;
}
/***********************the third method check to calculate velocity*************************/
int canUsefindVelocityMethod3(OneDVariables variables)//check if we have the proper variables to use method 1 to find velocity
{
	int canIUseIt = cannot;
	if (hasVariable(variables, initalVelocity) && hasVariable(variables, acceleration) && hasVariable(variables, time))
	{// all these variables are needed for fiding velocity with our second equation
		canIUseIt = can;
	}
	return canIUseIt;
}

/***********************function to call all of the checking function to see if there is any possible way to calculate velocity*************************/
int canFindVelocity(OneDVariables variables)
{
	int canIFindIt = cannot;
	if (canUsefindVelocityMethod1(variables) || canUsefindVelocityMethod2(variables) || canUsefindVelocityMethod3(variables))
	{// all these variables are needed for fiding velocity with our second equation
		canIFindIt = can;
	}
	return canIFindIt;
}

/***********************Function to find the velocity method that works and call it for calculation*************************/
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









/////////////////////////////////////////////////inital velocity//////////////////////////////////////////////////////////////////////











/***********************the first method to calculate initial velocity*************************/
double findInitialVelocityMethod1(OneDVariables variables)
{
	double initialVelocity = variables.variableValue[veloctiy] - variables.variableValue[acceleration] * (variables.variableValue[time]);
	return initialVelocity;
}
/***********************the first method check to calculate initial velocity*************************/
int canUsefindInitialVelocityMethod1(OneDVariables variables)//check if we have the proper variables to use method 1 to find velocity
{
	int canIUseIt = cannot;
	if (hasVariable(variables, veloctiy) && hasVariable(variables, acceleration) && hasVariable(variables, time))
	{// all these variables are needed for finding initial velocity via our first equation(method 1)
		canIUseIt = can;
	}
	return canIUseIt;
}
/***********************the second method to calculate initial velocity*************************/
double findInitialVelocityMethod2(OneDVariables variables)
{
	double initialVelocity = sqrt(variables.variableValue[veloctiy] * variables.variableValue[veloctiy] - 2 * variables.variableValue[acceleration] * (variables.variableValue[finalPosition] - variables.variableValue[initialPosition]));
	return initialVelocity;
}
/***********************the second method check to calculate initial velocity*************************/
int canUsefindInitialVelocityMethod2(OneDVariables variables)//check if we have the proper variables to use method 1 to find velocity
{
	int canIUseIt = cannot;
	if (hasVariable(variables, veloctiy) && hasVariable(variables, acceleration) && hasVariable(variables, initialPosition) && hasVariable(variables, finalPosition))
	{// all these variables are needed for finding initial velocity via our first equation(method 1)
		canIUseIt = can;
	}
	return canIUseIt;
}
/***********************the third method to calculate initial velocity*************************/
double findInitialVelocityMethod3(OneDVariables variables)
{
	double initialVelocity = 2 * ((variables.variableValue[finalPosition] - variables.variableValue[initialPosition]) / variables.variableValue[time]) - variables.variableValue[veloctiy];
	return initialVelocity;
}
/***********************the third method check to calculate initial velocity*************************/
int canUsefindInitialVelocityMethod3(OneDVariables variables)//check if we have the proper variables to use method 1 to find velocity
{
	int canIUseIt = cannot;
	if (hasVariable(variables, finalPosition) && hasVariable(variables, initialPosition) && hasVariable(variables, time) && hasVariable(variables, veloctiy))
	{// all these variables are needed for finding initial velocity via our first equation(method 1)
		canIUseIt = can;
	}
	return canIUseIt;
}

/***********************function to call all of the checking function to see if there is any possible way to calculate initial velocity*************************/
int canFindInitialVelocity(OneDVariables variables)
{
	int canIFindIt = cannot;
	if (canUsefindInitialVelocityMethod1(variables) || canUsefindInitialVelocityMethod2(variables) || canUsefindInitialVelocityMethod3(variables))
	{// all these variables are needed for fiding velocity with our second equation
		canIFindIt = can;
	}
	return canIFindIt;
}

/***********************Function to find the velocity method that works and call it for calculation*************************/
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








///////////////////////////////////////////////////acceleration////////////////////////////////////////////////////////////////










/***********************the first method to calculate acceleration*************************/
double findAccelerationMethod1(OneDVariables variables)
{
	double acceleration = (variables.variableValue[veloctiy] - variables.variableValue[initalVelocity]) / (variables.variableValue[time]);
	return acceleration;
}
/***********************the first method check to calculate acceleration*************************/
int canUsefindAccelerationMethod1(OneDVariables variables)//check if we have the proper variables to use method 1 to find velocity
{
	int canIUseIt = cannot;
	if (hasVariable(variables, veloctiy) && hasVariable(variables, initalVelocity) && hasVariable(variables, time))
	{// all these variables are needed for finding initial velocity via our first equation(method 1)
		canIUseIt = can;
	}
	return canIUseIt;
}


/***********************the second method to calculate acceleration*************************/
double findAccelerationMethod2(OneDVariables variables)
{
	double acceleration = 2 * (variables.variableValue[finalPosition] - variables.variableValue[initialPosition] - variables.variableValue[initalVelocity] * variables.variableValue[time]) / (variables.variableValue[time] * variables.variableValue[time]);
	return acceleration;
}
/***********************the second method check to calculate acceleration*************************/
int canUsefindAccelerationMethod2(OneDVariables variables)//check if we have the proper variables to use method 1 to find velocity
{
	int canIUseIt = cannot;
	if (hasVariable(variables, finalPosition) && hasVariable(variables, initialPosition) && hasVariable(variables, initalVelocity) && hasVariable(variables, time))
	{// all these variables are needed for finding initial velocity via our first equation(method 1)
		canIUseIt = can;
	}
	return canIUseIt;
}


/***********************the third method to calculate acceleration*************************/
double findAccelerationMethod3(OneDVariables variables)
{
	double acceleration = (variables.variableValue[veloctiy] * variables.variableValue[veloctiy] - variables.variableValue[initalVelocity] * variables.variableValue[initalVelocity]) / ((variables.variableValue[finalPosition] - variables.variableValue[initialPosition]) * 2);
	return acceleration;
}
/***********************the third method to calculate acceleration*************************/
int canUsefindAccelerationMethod3(OneDVariables variables)//check if we have the proper variables to use method 1 to find velocity
{
	int canIUseIt = cannot;
	if (hasVariable(variables, finalPosition) && hasVariable(variables, initialPosition) && hasVariable(variables, initalVelocity) && hasVariable(variables, veloctiy))
	{// all these variables are needed for finding initial velocity via our first equation(method 1)
		canIUseIt = can;
	}
	return canIUseIt;
}

/***********************function to call all of the checking function to see if there is any possible way to calculate acceleration*************************/
int canFindAcceleration(OneDVariables variables)
{
	int canIFindIt = cannot;
	if (canUsefindAccelerationMethod3(variables) || canUsefindAccelerationMethod3(variables) || canUsefindAccelerationMethod3(variables))
	{// all these variables are needed for fiding velocity with our second equation
		canIFindIt = can;
	}
	return canIFindIt;
}

/***********************Function to find the acceleration method that works and call it for calculation*************************/
double findingAcceleration(OneDVariables variables)
{
	double initialVelocity = 0;
	if (canUsefindAccelerationMethod1(variables))
	{
		initialVelocity = findAccelerationMethod1(variables);
	}
	else if (canUsefindAccelerationMethod2(variables))
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








//////////////////////////////////////////////////time/////////////////////////////////////////////////////////////////











/***********************the first method to calculate time*************************/
double findTimeMethod1(OneDVariables variables)
{
	double time = (variables.variableValue[veloctiy] - variables.variableValue[initalVelocity]) / (variables.variableValue[acceleration]);
	return time;
}
/***********************the first method check to calculate time*************************/
int canUsefindTimeMethod1(OneDVariables variables)//check if we have the proper variables to use method 1 to find velocity
{
	int canIUseIt = cannot;
	if (hasVariable(variables, veloctiy) && hasVariable(variables, initalVelocity) && hasVariable(variables, acceleration))
	{// all these variables are needed for finding initial velocity via our first equation(method 1)
		canIUseIt = can;
	}
	return canIUseIt;
}

/***********************the second method to calculate time*************************/
double findTimeMethod2(OneDVariables variables)
{
	double time = 2 * (FinalPosition(variables) - InitialPosition(variables)) / (InitialVelocity(variables) + FinalVelocity(variables));
	return time;
}
/***********************the second method check to calculate time*************************/
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
/***********************the third method to calculate time, this is different because it will be a quadratic*************************/
//used variable names a, b, and c because thats how it is in the equation
int canUseQuadraticFormula(double a, double b, double c)
{
	int canIUseIt = can;
	if (a == 0)
	{
		canIUseIt = cannot;
	}
	else if ((b * b - 4 * a * c) < 0)
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
	double time = 0;
	//double time = 2 * (FinalPosition(variables) - InitialPosition(variables)) / (InitialVelocity(variables) + FinalVelocity(variables));
	if (canUseQuadraticFormula(a, b, c))
	{
		//q=quadratic
		double qMinus = quadraticFormulaMinus(a, b, c);
		double qPlus = quadraticFormulaMinus(a, b, c);

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
/***********************the third method check to calculate time*************************/
int canUsefindTimeMethod3(OneDVariables variables)//check if we have the proper variables to use method 1 to find velocity
{
	int canIUseIt = cannot;
	if (hasVariable(variables, acceleration) && hasVariable(variables, initalVelocity) && hasVariable(variables, initialPosition) && hasVariable(variables, finalPosition))
	{// all these variables are needed for finding initial velocity via our first equation(method 1)
		canIUseIt = can;
	}
	return canIUseIt;
}



/***********************function to call all of the checking function to see if there is any possible way to calculate time*************************/
int canFindTime(OneDVariables variables)
{
	int canIFindIt = cannot;
	if (canUsefindTimeMethod1(variables) || canUsefindTimeMethod2(variables) || canUsefindTimeMethod3(variables))
	{// all these variables are needed for fiding velocity with our second equation
		canIFindIt = can;
	}
	return canIFindIt;
}

/***********************Function to find the time method that works and call it for calculation*************************/
double findingTime(OneDVariables variables)
{
	double time = 0;
	if (canUsefindTimeMethod1(variables))
	{
		time = findTimeMethod1(variables);
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








//////////////////////////////////////////////////final position/////////////////////////////////////////////////////////////////









/***********************the first method to calculate final position*************************/
double findFinalPositionMethod1(OneDVariables variables)
{
	double finalPosition = (InitialPosition(variables) + InitialVelocity(variables) * Time(variables) + 1.0 / 2.0 * Acceleration(variables) * Time(variables) * Time(variables));
	return finalPosition;
}
/***********************the first method check to calculate final position*************************/
int canUsefindFinalPositionMethod1(OneDVariables variables)//check if we have the proper variables to use method 1 to find velocity
{
	int canIUseIt = cannot;
	if (hasVariable(variables, initialPosition) && hasVariable(variables, initalVelocity) && hasVariable(variables, time) && hasVariable(variables, acceleration))
	{// all these variables are needed for finding initial velocity via our first equation(method 1)
		canIUseIt = can;
	}
	return canIUseIt;
}

/***********************the second method to calculate final position*************************/
double findFinalPositionMethod2(OneDVariables variables)
{
	double finalPosition = (FinalVelocity(variables) * FinalVelocity(variables) - InitialVelocity(variables) * InitialVelocity(variables)) / (2 * Acceleration(variables)) + InitialPosition(variables);
	return finalPosition;
}
/***********************the second method check to calculate final position*************************/
int canUsefindFinalPositionMethod2(OneDVariables variables)//check if we have the proper variables to use method 1 to find velocity
{
	int canIUseIt = cannot;
	if (hasVariable(variables, veloctiy) && hasVariable(variables, initalVelocity) && hasVariable(variables, acceleration) && hasVariable(variables, initialPosition))
	{// all these variables are needed for finding initial velocity via our first equation(method 1)
		canIUseIt = can;
	}
	return canIUseIt;
}

/***********************the third method to calculate final position*************************/
double findFinalPositionMethod3(OneDVariables variables)
{
	double finalPosition = ((FinalVelocity(variables) + InitialVelocity(variables)) / 2.0) * Time(variables) + InitialPosition(variables);
	return finalPosition;
}
/***********************the third method check to calculate final position*************************/
int canUsefindFinalPositionMethod3(OneDVariables variables)//check if we have the proper variables to use method 1 to find velocity
{
	int canIUseIt = cannot;
	if (hasVariable(variables, veloctiy) && hasVariable(variables, initalVelocity) && hasVariable(variables, initialPosition))
	{// all these variables are needed for finding initial velocity via our first equation(method 1)
		canIUseIt = can;
	}
	return canIUseIt;
}

/***********************function to call all of the checking function to see if there is any possible way to calculate final position*************************/
int canFindFinalPosition(OneDVariables variables)
{
	int canIFindIt = cannot;
	if (canUsefindFinalPositionMethod1(variables) || canUsefindFinalPositionMethod2(variables) || canUsefindFinalPositionMethod3(variables))
	{// all these variables are needed for fiding velocity with our second equation
		canIFindIt = can;
	}
	return canIFindIt;
}

/***********************Function to find the final position method that works and call it for calculation*************************/
double findingFinalPosition(OneDVariables variables)
{
	double finalPosition = 0;
	if (canUsefindFinalPositionMethod1(variables))
	{
		finalPosition = findFinalPositionMethod1(variables);
	}
	else if (canUsefindFinalPositionMethod2(variables))
	{
		finalPosition = findFinalPositionMethod2(variables);
	}
	else if (canUsefindFinalPositionMethod3(variables))
	{
		finalPosition = findFinalPositionMethod3(variables);
	}
	else//if cannot find velocity with provided variables, should not be reached
	{
		finalPosition = -141.141;
	}
	return finalPosition;
}






//////////////////////////////////////initial position////////////////////////////////////////////////






/***********************the first method to calculate initial position*************************/
double findInitialPositionMethod1(OneDVariables variables)
{
	double initialPosition = (FinalPosition(variables) - InitialVelocity(variables) * Time(variables) - 1.0 / 2.0 * Acceleration(variables) * Time(variables) * Time(variables));
	return initialPosition;
}
/***********************the first method check to calculate initial position*************************/
int canUsefindInitialPositionMethod1(OneDVariables variables)//check if we have the proper variables to use method 1 to find velocity
{
	int canIUseIt = cannot;
	if (hasVariable(variables, finalPosition) && hasVariable(variables, initalVelocity) && hasVariable(variables, time) && hasVariable(variables, acceleration))
	{// all these variables are needed for finding initial velocity via our first equation(method 1)
		canIUseIt = can;
	}
	return canIUseIt;
}

/***********************the second method to calculate initial position*************************/
double findInitialPositionMethod2(OneDVariables variables)
{
	double initialPosition = FinalPosition(variables) - (FinalVelocity(variables) * FinalVelocity(variables) - InitialVelocity(variables) * InitialVelocity(variables)) / (2 * Acceleration(variables));
	return initialPosition;
}
/***********************the second method check to calculate initial position*************************/
int canUsefindInitialPositionMethod2(OneDVariables variables)//check if we have the proper variables to use method 1 to find velocity
{
	int canIUseIt = cannot;
	if (hasVariable(variables, finalPosition) && hasVariable(variables, veloctiy) && hasVariable(variables, initalVelocity) && hasVariable(variables, acceleration))
	{// all these variables are needed for finding initial velocity via our first equation(method 1)
		canIUseIt = can;
	}
	return canIUseIt;
}

/***********************the third method to calculate initial position*************************/
double findInitialPositionMethod3(OneDVariables variables)
{
	double initialPosition = FinalPosition(variables) - (FinalVelocity(variables) + InitialVelocity(variables)) / 2;
	return initialPosition;
}
/***********************the third method check to calculate initial position*************************/
int canUsefindInitialPositionMethod3(OneDVariables variables)//check if we have the proper variables to use method 1 to find velocity
{
	int canIUseIt = cannot;
	if (hasVariable(variables, finalPosition) && hasVariable(variables, veloctiy) && hasVariable(variables, initalVelocity))
	{// all these variables are needed for finding initial velocity via our first equation(method 1)
		canIUseIt = can;
	}
	return canIUseIt;
}


/***********************function to call all of the checking function to see if there is any possible way to calculate inital position*************************/
int canFindInitialPosition(OneDVariables variables)
{
	int canIFindIt = cannot;
	if (canUsefindInitialPositionMethod1(variables) || canUsefindInitialPositionMethod2(variables) || canUsefindInitialPositionMethod3(variables))
	{// all these variables are needed for fiding velocity with our second equation
		canIFindIt = can;
	}
	return canIFindIt;
}

/***********************Function to find the initial position method that works and call it for calculation*************************/
double findingInitialPosition(OneDVariables variables)
{
	double finalPosition = 0;
	if (canUsefindInitialPositionMethod1(variables))
	{
		finalPosition = findFinalPositionMethod1(variables);
	}
	else if (canUsefindInitialPositionMethod2(variables))
	{
		finalPosition = findFinalPositionMethod2(variables);
	}
	else if (canUsefindInitialPositionMethod3(variables))
	{
		finalPosition = findFinalPositionMethod3(variables);
	}
	else//if cannot find velocity with provided variables, should not be reached
	{
		finalPosition = -141.141;
	}
	return finalPosition;
}