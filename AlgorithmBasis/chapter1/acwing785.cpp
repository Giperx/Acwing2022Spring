//
// Created by Giperx on 2024/1/3.
// 快排模板题
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

const int N = 1e6 + 10;
int n, q[N];

void quick_sort(int q[], int l, int r){
    if (l >= r) return;
    // 哨兵取随机位置的元素
    int x = q[rand() % (r - l + 1) + l];
    int i = l - 1, j = r + 1;
    while (i < j){
        do i++; while (q[i] < x);
        do j--; while (q[j] > x);
        if (i < j) swap(q[i], q[j]);
    }
    quick_sort(q, l, j);
    quick_sort(q, j + 1, r);
}

int main(){
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &q[i]);
    }
    quick_sort(q, 0, n - 1);
    for (int i = 0; i < n; ++i) {
        printf("%d ", q[i]);
    }
}
