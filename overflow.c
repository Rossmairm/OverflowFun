#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]){
char buffer[64];

if (argc < 2){
	printf("syntax error\r\n");
	printf("must supply at least one arg\r\n");
	return(1);
}
strcpy(buffer, argv[1]);
return(0);
}

