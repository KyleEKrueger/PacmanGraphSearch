#include "p2.h"
#include "getword.c"

int c;
int i = 0;
int currentPlace = 0;
int stop;
char s[STORAGE];
char lineStorage[255];
int *newargv[255];
//STORAGE * MAXITEMS

int main()
{
	for(;;) {
	(void)printf("prompt: " );
	parse();
	stop = -1;
	if (stop == -1) break;
	}
}

int parse(){
	for(;;){

		c = getword(s);
		strcat(lineStorage, s);
		newargv[i] = &lineStorage[currentPlace];
		printf("this is newargv[%d]: %d\n", i, newargv[i]);
		printf("what is in newargv[%d]: %d\n", i, *newargv[i]);
		(void)printf("this is the full storage sting: %s\n", lineStorage);
		(void)printf("this is the address of where you should be: %d\n", &lineStorage[currentPlace]);
		currentPlace = currentPlace + c + 1; //1 for null terminator not counted in c
		i++;
		
	/*
		if (c != 0){
			s[c] = '\0';
		}
	*/	

		if (c == -1){
			break;
		}
	}
	(void)printf("linestorage = [%s]\n", lineStorage);
	return 0;
}

/*
		if (getword(s) == -1)
		{
			break;
		}
		else
		{
			printf("prompt: ");
		}*/