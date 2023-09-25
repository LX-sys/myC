#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
    system("chcp 65001");

    clock_t start, end;
    double cpu_time_used;

    start = clock();

    int n = 0;
    for(int i = 0; i < 900000000; i++) {
        n++;
        n--;
    }

    end = clock();
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("循环执行时间：%f 秒\n", cpu_time_used);
    return 0;
}
