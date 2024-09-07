#include "shell.h"


int atoi( char *str){
	int i;
	int sub;
	int result;
	
	i = 0;
	sub = 1;
	result = 0;
	
	while ( str[i] &&  ( str[i] == 32 || str[i] >=9 && str[i] <= 13 || str[i] == 45 || str[i] ==43 ))
	{
		if ( str[i] == 45)
		{
			sub *= -1;
		}
		i++;
	}
	while ( str[i] >= 48 && str[i] <= 57)
	{
		result = result * 10  + ( str[i] -48);
		i++;
	}
	return (sub * result);

}
