#include "tim_sort.h"

struct emp {
	char name;
	int age;
	int id;
};

int int_cmp(void *a, void *b){
    int *i = (int *)a;
    int *j = (int *)b;
	if(*i == *j) return 0;
	if(*i > *j) return +1;
	return -1;
}

int float_cmp(void *a, void *b){
    float *i = (float *)a;
    float *j = (float *)b;
	if(*i == *j) return 0;
	if(*i > *j) return +1;
	return -1;
}

int age_cmp(void *i, void *j){
     struct emp *x = (struct emp *)i;
     struct emp *y = (struct emp *)j;
     return x->age - y->age;
}

void print_arr(struct emp **a, int length)
{
	int i;
	for (i = 0; i < length; i++)
		printf("%c-%d-%d\n", a[i]->name, a[i]->age, a[i]->id);
	printf("*******************************\n");
}


int main()
{
    struct emp **a  = (struct emp **)malloc(sizeof(struct emp *) * 5);
	struct emp a1 = {'a', 5, 10};
	struct emp a2 = {'b', 7, 15};
	struct emp a3 = {'c', 1, 9};
	struct emp a4 = {'d', 3, 6};
	struct emp a5 = {'e', 6, 14};

	a[0] = &a1;
	a[1] = &a2;
	a[2] = &a3;
	a[3] = &a4;
	a[4] = &a5;
	
	print_arr(a,5);
	
	Sort((void **)a,5,age_cmp);
	
	print_arr(a,5);
    return 0;
}