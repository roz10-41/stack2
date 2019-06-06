#include <iostream>

using namespace std;

class StacK
{

private:
    int sizeOfStack;
    int *StackFull;
    int sizeFin;

public:
    StacK(int s1ze){
        sizeOfStack = s1ze;
        int *Stackk = new int[sizeOfStack];
        StackFull = Stackk;
    }

    void enterNums(){
        cout << "Enter data in stack" << endl;
        int data;
        char cont;
        for (sizeFin = 0; sizeFin < sizeOfStack; sizeFin++){
            cin >> data;
            StackFull[sizeFin] = data;
            cout << "Do you want to continue typing?(y/n): ";
            cin >> cont;
            if (cont == 'y'){continue;}
            if (cont == 'n'){break;}
        }

        for (int j = 0; j<=sizeFin; j++){
            cout << StackFull[j] << " ";
        }
        cout << endl;

    }

    int pop(){
        int *px;
        px = StackFull;
        cout << "Stack = ";
        for(int i = 0; i<sizeFin; i++){
            if(i==0){
                cout << *px << " ";
                px  = px + 1;
                continue;
            }
            else{
                cout << *px << " ";
                px  = px + 1;
            }
        }
        cout << endl;
        int delelem = *px;
        cout << "Deleted element: " << delelem << endl;
        sizeFin = sizeFin - 1;
        return delelem;
    }

    void push(){
        int *pa;
        pa = StackFull;
        int newData;
        cout << "Enter new data: ";
        cin >> newData;
        cout << "Stack = ";
        StackFull[sizeFin + 1] = newData;
        for(int i = 0; i<=sizeFin; i++){
            if(i == 0){
                cout << *pa << " ";
                pa  = pa + 1;
            }
            else{
                cout << *pa << " ";
                pa  = pa + 1;
            }
        }
        cout << *pa << endl;
        sizeFin = sizeFin + 1;
    }

    ~StacK(){
        delete []StackFull;
    }



};

int main()
{
    cout << "Enter size of stack: ";
    int SIZE;
    cin >> SIZE;
    cout << endl;
    StacK S(SIZE);
    S.enterNums();
    int choosen;
    while(true){
        cout << "Choose function(1-push/2-pop/0-exit): ";
        cin >> choosen;
        if(choosen == 1){
            S.push();
        }
        if(choosen == 2){
            S.pop();
        }
        if(choosen == 0){
            break;
        }
    }
    return 0;
}
