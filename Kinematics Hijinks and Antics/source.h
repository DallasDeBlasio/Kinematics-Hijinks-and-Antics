#pragma once
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


//1D kinematics constant acceleration

typedef struct oneDKinematicsVariables
{
	// for these arrays index 0 is velocity, index 1 is initaly velocity, index 3 is acceleration, index 4 is time, index 5 is final position, index 6 is begining position
	int hasVariable[6];//has a 1 if the variable is present, a 0 if it is not
	double variableValue[6];
}OneDVariables;

// read above struct
typedef enum OneDVariablesIndex
{
	veloctiy, initalVelocity, acceleration, time, finalPosition, initialPosition
}OneDVariablesIndex;

typedef enum hasOrNo
{
	//has =0, doesNotHave =1
	doesHave,doesNotHave
}hasOrNo;

typedef enum canOrNo
{
	//has =0, doesNotHave =1
	cannot, can
}hasOrNo;

int hasVariable(OneDVariables variables, int variableIndex);
double findingVelocity(OneDVariables variables);


/**************************Functions for Menu*********************************/

void MainMenu();


/**************************Functions for user input*********************************/

void fetchMeTheirSouls(OneDVariables* variables);
void getVariableForStruct(int* variableIsHad, double* variableValue, char* field);
void printStructInfo(OneDVariables variables);
void clearScanf(void);
void printSearchedNumber(OneDVariables variables, int index);
int getBasicDesiredField1DKinematicsConstantAcceleration(void);