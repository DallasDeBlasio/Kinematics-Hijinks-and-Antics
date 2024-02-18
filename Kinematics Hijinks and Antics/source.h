#pragma once
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>



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
	//cannot =0, can =1
	cannot, can
}hasOrNo;



/**************************Functions for kinematic calculations*********************************/

int hasVariable(OneDVariables variables, int variableIndex);
double FinalVelocity(OneDVariables variables);
double InitialVelocity(OneDVariables variables);
double Acceleration(OneDVariables variables);
double Time(OneDVariables variables);
double InitialPosition(OneDVariables variables);
double FinalPosition(OneDVariables variables);

int canFindVelocity(OneDVariables variables);
double findingVelocity(OneDVariables variables);
int canFindInitialVelocity(OneDVariables variables);
double findingInitialVelocity(OneDVariables variables);
int canFindAcceleration(OneDVariables variables);
double findingAcceleration(OneDVariables variables);
int canFindTime(OneDVariables variables);
double findingTime(OneDVariables variables);
int canFindFinalPosition(OneDVariables variables);
double findingFinalPosition(OneDVariables variables);
int canFindInitialPosition(OneDVariables variables);
double findingInitialPosition(OneDVariables variables);


/**************************Functions for Menu*********************************/

void MainMenu();


/**************************Functions for kinimatic user input*********************************/

void fetchMeTheirSouls(OneDVariables* variables);
void getVariableForStruct(int* variableIsHad, double* variableValue, char* field);
void printStructInfo(OneDVariables variables);
void clearScanf(void);
void printSearchedNumber(OneDVariables variables, int index);
int getBasicDesiredField1DKinematicsConstantAcceleration(void);
void collectionForCalculation(OneDVariables *Variables);