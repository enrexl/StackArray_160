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
            cout << "\nStack is empty. Cannnot pop." << endl;
            return;    //1.b
        }

        cout << "\nThe popped element is : " << stackArray[top] << endl; //Step 2
        top--;  //Step 3 decrement
    }

    bool empty() {
        return (top == -1);
    }

    void display() {
        if (empty()) {
            cout << "\nStack is empty." << endl;
        }
        else {
            for (int tmp = top;tmp >= 0; tmp--) {
                cout << stackArray[tmp] << endl;
            }
        }
    }
};

int main() {
    StackArray s;
    char ch;
    while (true) {
        cout << endl;
        cout << "====Stack Menu===\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Display\n";
        cout << "4. Exit\n";
        cout << "\nEnter your choice : ";
        cin >> ch;
        switch (ch){
        case '1': {
            cout << "\nEnter an element : ";
            int element;
            cin >> element;
            s.push(element);
            break;
        }

        case '2': {
            if (s.empty()) {
                cout << "\nStack is empty." << endl;
                break;
            }
            s.pop();
            break;
        }

        case '3': {
            s.display();
            break;
        }

        case '4': {
            return 0;
        }

        default: 
            cout << "\nInvalid Choice";
            break;
        
        }
        
    }
}




