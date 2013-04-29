#include <stdio.h>

void selectionSort(int[], int);

int main(int argc, const char *argv[])
{

int unSorted[] = { 5, 1, 6, 25, 4, 7, 2, 5, 15, 23, 16};

int i, len;
len = sizeof(unSorted)/sizeof(int);

for(i = 0; i < len; i++)
printf("%d-> %d\n", i, unSorted[i]);

selectionSort(unSorted, len);

for(i=0; i < len; i++)
printf("Sorted | %d-> %d\n", i, unSorted[i]);


return 0;
}

void selectionSort(int D[], int N){
int i, j, minimum, index;

for(i = 0; i < N-1; i++){
minimum = D[N-1];
index = N - 1;

for(j = i; j < N-1; j++)
if(D[j] < minimum){
minimum = D[j];
index = j;
}

D[index] = D[i];
D[i] = minimum;
}
}
