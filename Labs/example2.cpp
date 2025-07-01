#include <iostream>
#include <ctime>
#include <math.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    srand(time(0));
    double N[1000] = {0}, n, max = 0;
    int max_i = 0, idx_1 = 0, s = 0, a, b, idx_2;
    cout << "Количество элементов массива: ";
    cin >> n;
    cout << "Введите a и b: ";
    cin >> a >> b;

    for (int i=0; i<n; i++) {
        N[i]= (rand() % 10 - 1) / float((rand() % 10 + 1));
        cout << N[i] << " ";
    }
    cout << endl;
    for (int i=0; i<n; i++) { //задание1
        if(abs(N[i])>abs(max)) {
            max_i = i;
            max = N[i];
        }
    }
    cout << "Индекс максимального по модулю элемента в массиве: " << max_i << endl;
    for (int i=0; i<n; i++) { //задание2
        if(N[i]>0) {
            idx_1=i;
            break;
        }
    }
    for (int i=idx_1+1; i<n; i++) {
        s=s+N[i];
    }
    cout << "Сумма элементов, расположенных после первого положительного элемента: " << s << endl;

    for (int i=0, j=0; i<n; i++){ //задание 3
        if (N[i]>=a && N[i]<=b){
            double temp = N[i];
            N[i] = N[j];
            N[j] = temp;
            j++;
        } 
    }
    cout << "Отсортированный массив: ";
    for (int i=0; i<n; i++) cout << N[i] << " ";
    cout << endl;
}
