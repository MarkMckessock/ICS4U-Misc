int *a = new int; //Create a new int an assigns it to the pointer a
int *b = new int[10]; //Creates a 10 element array and assigns it to the pointer b

delete a; //Unallocated the memory used by a;

delete [] b; //Unallocates the array stored at b.
