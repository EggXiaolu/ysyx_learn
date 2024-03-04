#include <stdio.h>

char full_name[]={'Z','e','d','.','A','.','S','h','a','w'};
int main(int argc,char **argv){
	int areas[] = {10,20,30,40};
	char name[]="Zed";
	
	areas[0]=100;
	printf("The size of an int: %ld\n",sizeof(int));
	printf("The size of areas (int[]): %ld\n",sizeof(areas));
	printf("The number of ints in areas: %ld\n",sizeof(areas)/sizeof(int));
	printf("The fisrt area is %d ,the 2nd is %d",areas[0],areas[1]);

	printf("The size of a char: %ld\n",sizeof(char));
	printf("The size of areas (char[]): %ld\n",sizeof(name));
	printf("The number of chars:%ld\n",sizeof(name)/sizeof(char));

	printf("The size of full_name(char[]): %ld\n",sizeof(full_name));
	printf("The number of chars:%ld\n",sizeof(full_name)/sizeof(char));

	printf("name=\"%s\" and full_name=\"%s\"\n",name,full_name);

	return 0;
}
