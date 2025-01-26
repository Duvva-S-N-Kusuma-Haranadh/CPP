#include <iostream>
using namespace std;

// int main()
// {
//     int *p = (int *)malloc(sizeof(int));
//     p = NULL;
//     free(p);
// }

// int i;
// int main()
// {
//     int j;
//     int *k = (int *)malloc(sizeof(int));
// }

int main()
{

    int i, numbers[1];
    numbers[0] = 15;
    free(numbers);
    cout << "\nStored integers are ";
    cout << "\nnumbers[0] = " << numbers[0];
    return 0;
}