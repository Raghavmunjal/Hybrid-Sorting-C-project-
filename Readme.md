# Library For Hybrid Sorting Algorithm

**A Hybrid Algorithm is an algorithm that combines two or more other algorithms that solve the same problem**

### Why Hybrid Sorting Algorithm in C Language? 
Standard C library provides qsort function that can be used for sorting , qsort function uses QuickSort algorithm to sort . C might be the fastest language but qsort is very slow. Quick sort is not a stable algorithm.

To solve this problem, this is a ***Tim Sort Library*** which is stable sort algorithm and more efficient than qsort function provided by C language

### Why Tim Sort?
As we know ***Insertion Sort*** is efficient for small data sets and provides stability. ***Merge Sort***  operates fine on any size of data it has a consistent speed on any size of data and it also provides stability. ***Tim Sort*** is a sorting algorithm based on Insertion Sort and Merge Sort.

### What is Tim Sort?
Timsort is a hybrid stable sorting algorithm, derived from merge sort and insertion sort, designed to perform well on many kinds of real-world data . TimSort is highly optimization Merge Sort. Many other languages uses Tim Sort to sort the data such as Java’s Arrays.sort() as well as Python’s sorted() uses Tim Sort.


### How Tim Sort Works?
It first sort small pieces using Insertion Sort, then merges the pieces using merge of merge sort. Suppose we have to sort the Array we divide that Array into blocks known as Run. We sort those runs using insertion sort one by one and then merge those runs using the combine function used in merge sort. **If the size of the Array is less than run, then Array gets sorted just by using Insertion Sort.** The size of the run may vary from 32 to 64 depending upon the size of the array. 


**Note that The idea is based on the fact that insertion sort performs well for small size of data sets.**


### How Tim Sort Library is Implemented ?
This Tim Sort Library designed for C -> 
* We consider size of run as 32.
* We one by one sort pieces of size equal to run
* After sorting individual pieces, we merge them one by one. We double the size of merged subarrays after every iteration.

### Time Complexity of Sorting Algorithms

**n is the size of input to be sorted**

| Sorting Algorithm |    Best Case     |   Average Case |  Worst case    |
|-------------------|------------------|----------------|----------------|
|   Tim Sort        |      O(n)        |     O(nlogn)   |    O(nlogn)    |
|   Intro Sort      |      O(nlogn)    |     O(nlogn)   |    O(nlogn)    |
|   Merge Sort      |      O(nlogn)    |     O(nlogn)   |    O(nlogn)    |
|   Quick Sort      |      O(nlogn)    |     O(nlogn)   |    O(n^2)      |

### Pros and Cons of Tim Sort
* ***Pros*** 
  * It is unbelievably fast for nearly sorted data sequence (including reverse sorted data).
  * It is stable and the worst case is still O(N*LOG(N)).

* ***Cons***
  * It is not InPlace.
  * Locality of refernce is not so good.



### How to use this Tim Sort in C?
To use this library, download the files in same folder where you have your file in which you want to use this library, then include this header libaray named tim_sort.h
```C
 #include "tim_sort.h"
```
You can also download files in any place and use the path in include statement of the program where you want to use the library.

