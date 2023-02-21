#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int num_of_elements;
    scanf("%d", &num_of_elements);
    int num_array[num_of_elements];
    for (int i = 0; i < num_of_elements; i++)
        scanf("%d", &num_array[num_of_elements - i -1]);
    for (int i = 0; i < num_of_elements; i++)
       printf("%d",num_array[i]);
        return 0;
}