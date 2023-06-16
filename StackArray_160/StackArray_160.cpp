#include <iostream>
using namespace std;

class StackArray {
private:
    int stackArray[5];
    int top;

public:
    StackArray() { // constructor
        top = -1;
    }

    int push(int element) {
        if (top == 4) {
            cout << "Number of data exceed the limit." << endl;
            return 0;
        }

        top++;
        stackArray[top] = element; //step 3
        cout << endl;
        cout << element << " ditambahkan (pushed)" << endl;
    }

    void pop() {
        if (empty()) { // Step 1
            cout << "\nStack is empty. Cannnot pop." << Endl;
            return;    //1.b
        }

    }

};


int main()
{
    
}
