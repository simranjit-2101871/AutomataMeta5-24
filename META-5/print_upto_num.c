/*Persistent Automata Question-6
The function printPattern(int  num)​ prints elements of an pre inputted array based on the value of input argument num​  ​(num>=​ 0). If the input 
number num​ is even, the function is expected to print all the even numbers upto num of the array, and in case it’s odd, is expected to print all 
the odd numbers upto num of the array.
 Input:
Num , where 0 <= num <= 10
 Output:
All numbers separated with space.
 Example:
Input:

Num = 2

Arr[] = {1,2,3,4,5,6,7,8,9,10}

Output:

 the function prints 2(without quotes).*/
 #include<stdio.h>
 void printPattern(int num)
{
    int i ;
   int arr[] = {1,2,3,4,5,6,7,8,9,0};


    if(num%2==0)
    {
         
        for(i=0;i<=num;i++)
        {
         if(arr[i]%2==0)
         printf(" %d",arr[i]);
        }
    }
   else
   {
        for(i=0;i<=num;i++)
        {
         if(arr[i]%2 != 0)
         printf(" %d",arr[i]);
        }
   }
}

int main()
{
    int num=9;
    printPattern(num);
    return 0;
}