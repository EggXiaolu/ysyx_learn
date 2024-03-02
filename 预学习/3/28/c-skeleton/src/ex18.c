#include <stdio.h>
#include <stdlib.h>
#include <error.h>
#include <string.h>

void die(const char *message){
    if(error){
        perror(message);
    }else{
        printf("Error: %s\n", message);
    }
    exit(1);
}

typedef int (*compare_cb)(int a,int b);
typedef int *(*sort_cb)(int *numbers,int count,compare_cb cmp);

// 冒泡排序
int *bubble_sort(int *numbers,int count,compare_cb cmp){
    int *target=malloc(count*sizeof(int));

    if(! target) die("Memerror.");

    memcpy(target, numbers, count*sizeof(int));

    for(int i=0; i<count; i++){
        for(int j=0; j<count-1; j++){
            if(cmp(target[j], target[j+1])>0){
                int temp=target[j];
                target[j]=target[j+1];
                target[j+1]=temp;
            }
        }
    }

    return target;
}

// 选择排序
int *selection_sort(int *numbers,int count,compare_cb cmp){
    int *target=malloc(count*sizeof(int));

    if(! target) die("Memerror.");

    memcpy(target, numbers, count*sizeof(int));

    for(int i=0; i<count-1; i++){
        int num=i;
        for(int j=i; j<count; j++){
            if(cmp(target[num], target[j])>0){
                num=j;
            }
        }
        if(num!=i){
            int temp=target[num];
            target[num]=target[i];
            target[i]=temp;
        }
    }

    return target;
}

int sorted_order(int a,int b){
    return a-b;
}

int reverse_order(int a,int b){
    return b-a;
}

int strange_order(int a,int b){
    if(a==0||b==0){
        return 0;
    }else{
        return a%b;
    }
}

void test_sorting(int *numbers,int count,sort_cb sort,compare_cb cmp){\
    int *sorted=sort(numbers,count,cmp);
    if(!sorted) die("Failed to sort as requested.");

    for(int i=0;i<count;i++){
        printf("%d ",sorted[i]);
    }
    printf("\n");

    // unsigned char *data = (unsigned char *)cmp;
    // for(int i=0;i<25;i++){
    //     printf("%02x:",data[i]);
    // }
    // printf("\n");
    free(sorted);
}

int main(int argc, char *argv[]){
    if(argc < 2) die("USAGE: ./ex18 n1 n2 n3 n4");

    int count=argc-1;
    char **inputs=argv+1;

    int *numbers=malloc(sizeof(int)*count);
    if(!numbers) die("Memory error.");

    for(int i=0;i<count;i++){
        numbers[i]=atoi(inputs[i]);
    }
    //冒泡
    printf("These are bubble sort:\n");
    test_sorting(numbers,count,bubble_sort,sorted_order);
    test_sorting(numbers,count,bubble_sort,reverse_order);
    test_sorting(numbers,count,bubble_sort,strange_order);
    //选择
    printf("These are selection sort:\n");
    test_sorting(numbers,count,selection_sort,sorted_order);
    test_sorting(numbers,count,selection_sort,reverse_order);
    test_sorting(numbers,count,selection_sort,strange_order);
    free(numbers);

    return 0;

}