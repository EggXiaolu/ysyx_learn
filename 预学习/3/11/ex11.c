#include<stdio.h>

int main(int argc, char *argv[]){
	int i=0;	
	char *states[4];
	while(i < argc){
		printf("arg %d: %s\n",i,argv[i]);

		states[i]=argv[i];
		i++;
	}

	int num_states=4;
	i=0;
	while(i<num_states){
		printf("state %d: %s\n",i,states[i]);
		i++;
	}
	return 0;
}

