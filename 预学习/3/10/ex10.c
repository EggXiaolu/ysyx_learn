#include <stdio.h>

int main(int argc, char **argv){
	int i=0;

	for(i=0;i<argc;i++){
		printf("arg %d: %s\n",i,argv[i]);
	}

	char *states[]={"Cali","Oreg","Wash",NULL};
	int num_states=4;

	for(i=0;i<num_states;i++){
		printf("State %d: %s\n",i,states[i]);
	}

	return 0;
}
