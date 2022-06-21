#include <iostream>

class arr {
private:
    int* data;
    int n;
    bool isSorted() {
        for (int i = 1; i < n; i++) {
            if (data[i] >= data[i - 1]) {
                continue;
            }
            else {
                return false;
            }
        }
        return true;
    }
public:
    arr() {
        n = 0;
        data = new int[n];
    }
    arr(int* a, int n) {
        this->n = n;
        data = new int[n];
        for (int i = 0; i < n; i++) {
            data[i] = a[i];
        }
    }
    void set(int* a, int n) {
        delete[] data;
        this->n = n;
        data = new int[n];
        for (int i = 0; i < n; i++) {
            data[i] = a[i];
        }
    }
    int* get() {
        return data;
    }
    void bubbleSort() {
        while (!isSorted()) {
            for (int i = 1; i < n; i++) {
                if (data[i] < data[i - 1]) {
                    int temp = data[i];
                    data[i] = data[i - 1];
                    data[i - 1] = temp;
                }
            }
        }
    }
};

int main()
{
    std::cout << " - Oh shit, I'm sorry.\n - Sorry for what? Our daddy taught us not to be ashamed of our Labs" << std::endl;
    
}