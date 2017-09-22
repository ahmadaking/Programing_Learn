#include <iostream>

using namespace std;

int main()
{

    int x[10];
    int getArray(int x[]);
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

                userInput = x[i];
            }

        }
