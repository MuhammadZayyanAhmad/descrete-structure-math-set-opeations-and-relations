#include <iostream>
using namespace std;

bool reflexive(int relation[][2], int n) {
    for (int i = 1; i <= n; i++) {
        bool found = false;
        for (int j = 0; j < n; j++) {
            if ((relation[j][0] == i && relation[j][1] == i)) {
                found = true;
            }
        }
        if (!found) {
            return false;
        }
    }
    return true;
}

bool symmetric(int relation[][2], int n) {
    for (int i = 0; i < n; i++) {
        bool found = false;
        for (int j = 0; j < n; j++) {
            if (relation[i][0] == relation[j][1] && relation[i][1] == relation[j][0]) {
                found = true;
                break;
            }
        }
        if (!found) {
            return false;
        }
    }
    return true;
}

bool transitive(int relation[][2], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (relation[i][1] == relation[j][0]) {
                bool found = false;
                for (int k = 0; k < n; k++) {
                    if (relation[i][0] == relation[k][0] && relation[j][1] == relation[k][1]) {
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    return false;
                }
            }
        }
    }
    return true;
}

void intersection(int seta[], int sizea, int setb[], int sizeb) {
    int count = 0;
    cout << "intersection = ( ";
    for (int i = 0; i < sizea; i++) {
        for (int j = 0; j < sizeb; j++) {
            if (seta[i] == setb[j]) {
                cout << seta[i] << " ";
                count++;
                break;
            }
        }
    }
    if (count == 0) {
        cout << "null set ";
    }
    cout << ")" << endl;
}

void jointunion(int seta[], int sizea, int setb[], int sizeb) {
    cout << "union = ( ";
    for (int i = 0; i < sizea; i++) {
        cout << seta[i] << " ";
    }
    for (int i = 0; i < sizeb; i++) {
        bool duplicate = false;
        for (int j = 0; j < sizea; j++) {
            if (setb[i] == seta[j]) {
                duplicate = true;
                break;
            }
        }
        if (!duplicate) {
            cout << setb[i] << " ";
        }
    }
    cout << ")" << endl;
}

void difference(int seta[], int sizea, int setb[], int sizeb) {
    cout << "difference = ( ";
    for (int i = 0; i < sizea; i++) {
        bool isinb = false;
        for (int j = 0; j < sizeb; j++) {
            if (seta[i] == setb[j]) {
                isinb = true;
                break;
            }
        }
        if (!isinb) {
            cout << seta[i] << " ";
        }
    }
    cout << ")" << endl;
}

void cartesian(int seta[], int sizea, int setb[], int sizeb) {
    cout << "cartesian product = ";
    for (int i = 0; i < sizea; i++) {
        for (int j = 0; j < sizeb; j++) {
            cout << "(" << seta[i] << ", " << setb[j] << ")" << " ";
        }
    }
    cout << endl;
}

int main() {
    int choice;
    while (true) {
        cout << "1. check relations" << endl;
        cout << "2. set operations" << endl;
        cout << "3. exit" << endl;
        cout << "enter your choice = ";
        cin >> choice;
        system("cls");
        if (choice == 1) {
            int n;
            cout << "enter the number of relation = ";
            cin >> n;
            int relations[100][2];
            for (int i = 0; i < n; i++) {
                cout << "enter " << i + 1 << " (x, y) values" << endl;
                cout << "enter value of 'x' = ";
                cin >> relations[i][0];
                cout << "enter value of 'y' = ";
                cin >> relations[i][1];
            }
            cout << endl;
            bool symm = symmetric(relations, n);
            bool trans = transitive(relations, n);
            bool ref = reflexive(relations, n);
            cout << (ref? "this set is reflexive" : "this set is irreflexive") << endl;
            cout << (symm? "this set is symmetric" : "this set is anti-symmetric") << endl;
            cout << (trans? "this set is transitive" : "this set is not transitive") << endl;
        }
        else if (choice == 2) {
            int sizea, sizeb;
            cout << "enter the size of set a = ";
            cin >> sizea;
            int* seta = new int[sizea];
            for (int i = 0; i < sizea; i++) {
                cout << "enter element " << i + 1 << " = ";
                cin >> seta[i];
            }
            cout << "enter the size of set b = ";
            cin >> sizeb;
            int* setb = new int[sizeb];
            for (int i = 0; i < sizeb; i++) {
                cout << "enter element " << i + 1 << " = ";
                cin >> setb[i];
            }
            cout << endl;
            cout << "your set a is = ( ";
            for (int i = 0; i < sizea; i++) {
                cout << seta[i] << " ";
            }
            cout << ")" << endl;
            cout << "your set b is = ( ";
            for (int i = 0; i < sizeb; i++) {
                cout << setb[i] << " ";
            }
            cout << ")" << endl;
            intersection(seta, sizea, setb, sizeb);
            jointunion(seta, sizea, setb, sizeb);
            difference(seta, sizea, setb, sizeb);
            cartesian(seta, sizea, setb, sizeb);
            cout << endl;
            delete[] seta;
            delete[] setb;
        }
        else if (choice == 3) {
            cout << "exit program" << endl;
            break;
        }
        else {
            cout << "invalid choice" << endl;
        }
        system("pause");
        system("cls");
    }
    return 0;
}
