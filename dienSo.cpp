/*Cho mang A[] gom n so nguy�n duong. Goi L, R l� max v� min c�c phan tu cua A[].
Nhiem vu cua ban l� t�m so phan tu con thieu can th�m v�o mang de mang c� day du c�c so trong khoang [L, R].
V� du A[] = {5, 7, 9, 3, 6, 2 } ta nhan duoc ket qua l� 2 tuong ung voi c�c so c�n thieu l� 4, 8.*/

#include <bits/stdc++.h>

using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int dem=0;
        sort(a, a + n);
        for (int i = 0; i < n - 1; i++) {
            while (a[i + 1] - a[i] != 1) {
                dem+=1;
                a[i]+=1;
            }
        }
        cout << dem << endl;
    }
}

