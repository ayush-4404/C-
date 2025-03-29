#include <iostream>
#include <vector>
using namespace std;

void swap(int *p, int *q) {
    int temp = *p;
    *p = *q;
    *q = temp;
}

void sortZerosAndOnes(vector<int> &v) {
    int lt_ptr = 0;
    int rt_ptr = v.size() - 1;

    while (lt_ptr < rt_ptr) {
        if (v[lt_ptr] == 1 && v[rt_ptr] == 0) {
            // Swap the elements
            v[lt_ptr] = 0;
            v[rt_ptr] = 1;
            lt_ptr++;
            rt_ptr--;
        } else {
            // If left pointer points to 0, move it to the right
            if (v[lt_ptr] == 0) {
                lt_ptr++;
            }
            // If right pointer points to 1, move it to the left
            if (v[rt_ptr] == 1) {
                rt_ptr--;
            }
        }
    }
}

void display(const vector<int> &v) {
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> v(n);
    cout << "Enter elements (0 or 1): ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    cout << "Original vector: ";
    display(v);

    sortZerosAndOnes(v);

    cout << "Sorted vector: ";
    display(v);

    return 0;
}