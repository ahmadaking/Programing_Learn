#include <iostream>

using namespace std;

int main()
{

    int x[10];
    int getArray(int x[]);
    int printArrray(x,10);
    //cout << "Enter 10 +ve numbers:" << endl;
    //cin <<
    int e = getArray(x);
    int b = printArrray(x,10);

return 0;
}

    int getArray(int x[])
    {
        int userInput;

        for (int count = 0; count <  10; count ++)
        {
            cout << "Please enter 10 numbers: ";
            cin >> userInput;

            userInput = x[10];
        }

    }

    printArray(x,10)
    {
        for(int i=1; i<10; i++)
        {
            cout << x[i] << ' ';
        }
    }
