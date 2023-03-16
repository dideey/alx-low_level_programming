#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *
 *
 *
 */
 int main(int argc, char* argv[])
{
if (argc != 3)
	printf("Error\n");
		exit(98);

for (i = 0; i < strlen(argv[1]); i++)
{
if (isdigit(argv[1][i]) == 0)
{
printf("Error\n");
exit(98);
}

}


}
