//HM_ex_1_10.04.2023
//#include <iostream> 
//#include <algorithm> 
//using namespace std;
//int main()
//{
//    const int length = 5;
//    int array[length] = { 30, 50, 20, 10, 40 };
//    std::sort(array, array + length);
//    for (int i = 0; i < length; ++i)
//        std::cout << array[i] << ' ';
//    return 0;
//}
//HM_ex_2_10.04.2023
#include <iostream> 
#include <algorithm> 
using namespace std;
int main()
{
    const int length = 5;
    int array[length] = { 30, 50, 20, 10, 40 };
    for (int startIndex = 0; startIndex < length - 1; ++startIndex)
    {
        int largestIndex = startIndex;
        for (int currentIndex = startIndex + 1; currentIndex < length; ++currentIndex)
        {
            if (array[currentIndex] > array[largestIndex])
                largestIndex = currentIndex;
        }
        std::swap(array[startIndex], array[largestIndex]);
    }
    for (int index = 0; index < length; ++index)
        std::cout << array[index] << ' ';
    return 0;
}