/**
 * Project to Implement tim sort 
 *
 * Compilation : make final
 * Execution : ./final
 *
 * @Raghav and 1910990074  5/09/21
 * 
 * Resources : wikipedia and gfg
 */

#include "tim_sort.h"

// emp struct name -> name of an employee
// age -> age of an employee
// id -> id of an employee
struct emp {
	char name[25];
	int age;
	int id;
};

// integer comparator
int int_cmp(void *a, void *b){
    int *i = (int *)a;
    int *j = (int *)b;
	if(*i == *j) return 0;
	if(*i > *j) return +1;
	return -1;
}

// float comparator
int float_cmp(void *a, void *b){
    float *i = (float *)a;
    float *j = (float *)b;
	if(*i == *j) return 0;
	if(*i > *j) return +1;
	return -1;
}

// age comparator to sort employee on basis of there age
int age_cmp(void *i, void *j){
     struct emp *x = (struct emp *)i;
     struct emp *y = (struct emp *)j;
     return x->age - y->age;
}


// printing all employee
void print_arr(struct emp **a, int length)
{
	int i;
	for (i = 0; i < length; i++)
		printf("%s-%d-%d\n", a[i]->name, a[i]->age, a[i]->id);
		
	printf("-----------ARRAY-----------\n");
}


int main()
{
    
    // creating employees
    struct emp **a  = (struct emp **)malloc(sizeof(struct emp *) * 5);
	struct emp a1 = {"John", 5, 10};
	struct emp a2 = {"Brad", 7, 15};
	struct emp a3 = {"Jimmy", 1, 9};
	struct emp a4 = {"Raghav", 3, 6};
	struct emp a5 = {"Tim", 6, 14};

	a[0] = &a1;
	a[1] = &a2;
	a[2] = &a3;
	a[3] = &a4;
	a[4] = &a5;
	
	// before sorting
	print_arr(a,5);
	
	// calling sort which is basically tim sort passing comparator on which tim_sort is going to sort 
	Sort((void **)a,5,age_cmp);
	
	// after sorting
	print_arr(a,5);
	
    return 0;
}