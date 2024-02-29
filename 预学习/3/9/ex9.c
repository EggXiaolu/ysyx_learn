#include <stdio.h>

int main(int argc , char *argv[]){
	int numbers[4]={1};
	char name[4]={'A'};

	printf("numbers : %d %d %d %d\n",numbers[0],numbers[1],numbers[2],numbers[3]);
	printf("name each : %c %c %c %c\n",name[0],name[1],name[2],name[3]);
	printf("name: %s\n",name);
	printf("name in int is : %d\n",name);
	numbers[0]=1;
	numbers[1]=2;
	numbers[2]=3;
	numbers[3]=4;

	name[0]=23;
	name[1]=24;
	name[2]=25;
	name[3]='\0';

	printf("numbers : %d %d %d %d\n",numbers[0],numbers[1],numbers[2],numbers[3]);
	printf("name each : %c %c %c %c\n",name[0],name[1],name[2],name[3]);
	printf("name: %s\n",name);

	char *another = "Zed";

	printf("another : %s\n",another);

	printf("another each : %c %c %c %c\n",another[0],another[1],another[2],another[3]);
	
	return 0;
}
