#include<stdio.h>

int main (int argc , char *argv[]){
	int ages[]={23,43,12,89,2};
	char *names[]={"Alen","Frank","Marry","John","Lisa"};

	int count = sizeof(ages)/sizeof(int);

	for(int i=0;i<count;i++){
		printf("%s has %d year alive.\n",names[i],ages[i]);
	}

	printf("---\n");

	int *cur_age=ages;
	char **cur_name=names;

	for(int i=0;i<count;i++){	
		printf("%s has %d year alive.\n",*(cur_name+i),*(cur_age+i));
	}

	printf("---\n");

	for(int i=0;i<count;i++){	
		printf("%s has %d year alive.\n",cur_name[i],cur_age[i]);
	}

	printf("---\n");

	for(cur_name = names,cur_age = ages;(cur_age-ages)<count;cur_name++,cur_age++){	
		printf("%s has %d year alive.\n",*cur_name,*cur_age);
	}

	printf("---\n");
	for(cur_name=names+count-1,cur_age=ages+count-1;(cur_age-ages)>=0;cur_name--,cur_age--){
		printf("%s has %d year alive.\n",*cur_name,*cur_age);

	}
	return 0;


}
