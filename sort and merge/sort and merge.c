#include <stdio.h>

int main()
{
int k = 0, i = 0, j = 0;
int a[5], b[5], c[10];
int temp; // Used for swapping during sorting

// 1. User inputs elements for the 1st array
printf("Enter 5 elements for the 1st array:\n");
while (i < 5)
{
scanf("%d", &a[i]);
i++;
}

// 2. User inputs elements for the 2nd array
i = 0;
printf("Enter 5 elements for the 2nd array:\n");
while (i < 5)
{
scanf("%d", &b[i]);
i++;
}

// 3. SORT the 1st array using 'for' loops
for (i = 0; i < 5 - 1; i++)
{
for (j = 0; j < 5 - i - 1; j++)
{
if (a[j] > a[j + 1])
{
temp = a[j];
a[j] = a[j + 1];
a[j + 1] = temp;
}
}
}

// 4. SORT the 2nd array using 'for' loops
for (i = 0; i < 5 - 1; i++)
{
for (j = 0; j < 5 - i - 1; j++)
{
if (b[j] > b[j + 1])
{
temp = b[j];
b[j] = b[j + 1];
b[j + 1] = temp;
}
}
}

// Reset indices back to 0 before starting the merge process
i = 0;
j = 0;

// 5. MERGE the two sorted arrays into array 'c'
while (i < 5 && j < 5)
{
if (a[i] < b[j])
{
c[k] = a[i];
k++;
i++;
}
else
{
c[k] = b[j];
k++;
j++;
}
}

// Copy remaining elements from array 'a' if any are left
while (i < 5)
{
c[k] = a[i];
k++;
i++;
}

// Copy remaining elements from array 'b' if any are left
while (j < 5)
{
c[k] = b[j];
k++;
j++;
}

// 6. Display the final merged and sorted result
printf("\nMerged and sorted array:\n");
i = 0;
while (i < 10)
{
printf("%d ", c[i]);
i++;
}
printf("\n");

return 0;
}