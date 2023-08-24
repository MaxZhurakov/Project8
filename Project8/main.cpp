//HM_ex_1_8.04.2023
#include <iostream>
using namespace std;
int arraySum(int arr[], int n) 
{
    if (n == 0)
        return 0;
    else
        return arr[n - 1] + arraySum(arr, n - 1);
}
//HM_ex_2_8.04.2023
#include <locale>
#include <stdio.h>
int main()
{
    double power(double a, int n) 
    
    {

        if (n == 0)

            return 1;

        else if (n < 0)

            return 1 / power(a, -n);

        else if (n % 2 == 0)

            return power(a * a, n / 2);

        else

            return a * power(a, n - 1);
}
//HM_ex_3_8.04.2023 
#include <iostream>
using namespace std;
int main
{
    int fibonacci(int n)
{
        if (n <= 1)
            return n;
        else
            return fibonacci(n - 1) + fibonacci(n - 2);
    }
    return 0;
}
//HM_ex_3_8.04.2023 
#include <iostream>
using namespace std;
int factorial(int n) 
{
if (n == 0)
 return 1;
 else
 return n * factorial(n - 1);
}
