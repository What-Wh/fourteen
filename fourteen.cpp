#include <iostream>
#define SIZE 3 

using namespace std;

struct AUTO {
    int l;
    int k;
    int v;
    int p;
    int dK;
    string c;
    char g;
};

void show(AUTO a[]) {
    for (int i = 0; i < SIZE; i++) {
        cout << "Car number: " << i << endl;
        cout << a[i].l << " " << a[i].k << " " << a[i].v << " " << a[i].p << " " << a[i].dK << " " << a[i].c << " " << a[i].g << endl;
    }
}

void enter(AUTO c[]) {
    for (int i = 0; i < SIZE; i++) {
        cin >> c[i].l;
        cin >> c[i].k;
        cin >> c[i].v;
        cin >> c[i].p;
        cin >> c[i].dK;
        cin >> c[i].c;
        cin >> c[i].g;
    }
}
void find(AUTO a[], int p) {
    cout << "Car number: " << p << endl;
    cout << a[p].l << " " << a[p].k << " " << a[p].v << " " << a[p].p << " " << a[p].dK << " " << a[p].c << " " << a[p].g << endl;
}

int main()
{
    AUTO c[SIZE];
    enter(c);
    show(c);
    find(c, 2);
}