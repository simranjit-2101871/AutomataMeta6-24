/*For the generation of energy at the atomic center the energy is used to start the plant is in negative sign and the energy generated after the plant started is represented with a positive sign. Our task is to calculate the total number of energy that is generated throughout the day.
 Input:
Two inputs –  One for the number of times energy was recorded  as ‘total_reading’ and Second for reading of the energy used or produced ‘arr’.
 Output:
Sum of the total energy produced
 Example:
Input:

8 1 4 -5 6 7 -4 4 -1

Output:

12*/
#include<stdio.h>

int main()
{
int total_reading, i, arr[20];
scanf("%d",&total_reading);
for(i=0; i<total_reading; i++)
{
    scanf("%d",&arr[i]);
}
int sum = 0;
for(i = 0;i<total_reading;i++)
{
    sum+=arr[i];
}
printf("%d",sum);
return 0;
}