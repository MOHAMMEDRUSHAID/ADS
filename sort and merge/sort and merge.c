#include <stdio.h>

int main()
{
int k = 0, i = 0, j = 0;
int a[5], b[5], c[10];
int temp; 


printf("Enter 5 elements for the 1st array:\n");
while (i < 5)
{
scanf("%d", &a[i]);
i++;
}


i = 0;
printf("Enter 5 elements for the 2nd array:\n");
while (i < 5)
{
scanf("%d", &b[i]);
i++;
}


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


i = 0;
j = 0;


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


while (i < 5)
{
c[k] = a[i];
k++;
i++;
}


while (j < 5)
{
c[k] = b[j];
k++;
j++;
}


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
