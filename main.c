/*
 * main.c
 *
 *  Created on: Sep 10, 2013
 *      Author: E
 */

#include <stdio.h>
#include <stdlib.h>
#include "sndinfo.h"

int main(int argc, char** argv)
{
	if (argc == 0)
	{
		printf("Usage: ./prog1");
		return 1;
	}

	if (argv[1] == "./sndinfo")
	{
		sndinfo();
	}
	else if (argv[1] == "./sndconv")
	{
		sndconv();
	}
	return 0;
}
