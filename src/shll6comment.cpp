#include "rshell.h"



int main()
{
	char inputBuffer[MAXLINE];

	while (1)
	{
		printf ("COMMAND->");
		cin.getline(inputBuffer,MAXLINE);
		//int result;
		if ((strcmp(inputBuffer, "exit") == 0))
		{
			exit(1);
		}
		else
		{
			smcln(inputBuffer);
		}
	}
	return 0;
}
