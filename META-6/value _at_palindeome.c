/*Print the number at the given index of the series 1 1 2 3 5… and so on. Consider the index as the number and print the value
 Input:
Single input of the index of the number as ‘number’
 Output:
The number at the given index of the series
 Example:
Input:

10

Output:

55*/
#include <stdio.h>
int main()
{
    int val1 = 0, val2 = 1, val3 = 1;      
    int number, i;
    scanf("%d",&number);
    for(i=2; i<=number; i++)
    {
        val3 = val1 +val2;        
        val1 = val2;      
        val2 = val3;
        
    }
printf("%d ",val3);
    r