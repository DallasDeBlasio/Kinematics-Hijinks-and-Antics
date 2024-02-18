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

int getBasicDesiredField1DKinematicsConstantAcceleration(void)
{
	int menuNav = 0;
	do
	{
		system("cls");
		printf("Please enter the number of the variable you would like to calculate\n");
		printf("(1) Final Velocity\n");
		printf("(2) Start Velocity\n");
		printf("(3) Acceleration\n");
		printf("(4) Time\n");
		printf("(5) Postition at end of time\n");
		printf("(5) Postition at start of time\n");
		printf("Or enter 6 to exit\n");
		scanf("%d", &menuNav);
		clearScanf();
	} while (menuNav<1||menuNav>6);
	return menuNav;
}

