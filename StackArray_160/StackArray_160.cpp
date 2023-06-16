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
    //Metode untuk menambah atau memasukkan data
    void push() {
        cout << "\nEnter an element : ";
        int element;
        cin >> element;
        if (top == 4) { //Step 1
            cout << "Number of data exceed the limit." << endl;
            return ;
        }

        top++;
        stackArray[top] = element; //step 3
        cout << endl;
        cout << element << " ditambahkan (pushed)" << endl;
    }
    //Method menghapus data paling atas / terakhir
    void pop() {
        if (empty()) { // Step 1
            cout << "\nStack is empty. Cannnot pop." << endl;
            return;    //1.b
        }

        cout << "\nThe popped element is : " << stackArray[top] << endl; //Step 2
        top--;  //Step 3 decrement
    }
    //Method untuk mengecek apakah stack kosong
    bool empty() {
        return (top == -1);
    }
    //Method untuk menampilkan stack dari data terakhir / paling atas
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
            s.push();
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




