#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
    setlocale(LC_ALL,"RUS");
    int i,n;
    cin >> n;
    int k=0;
    if (n>0) {
        int arr[i];
            for (int i = 0; i < n; i++) {
                cin >> arr[i];
                k++;
            }
        if (k>n || k<n ) {
            for (int i = 0; i < n / 2; i++) {
                swap(arr[i], arr[n - i - 1]);
            }
            for (int i = 0; i < n; i++) {
                cout << arr[i] << " ";
            }
        } else {
            cout << "введите количесвто цифр,равное n" << endl;
          }
    }
    else {
        cout << "error";
    }
    return 0;
}
