#include <stdio.h>
#include <stdlib.h>
#define TIME 80000000
          /spaces(t)/size(s)
void print(int t, int s) {
    char arr[s+1][s+1];
    for (int i = 0; i < s; ++i) {
        arr[s][i] = '\0';
    }
    for (int i = 0; i < s; ++i) {
        for (int j = 0; j < s; ++j) {
            arr[i][j] = '*';
        }
    }
    for (int i = 0; i < s; ++i) {
        for (int j = 0; j < s; ++j) {
            putc(arr[i][j], stdout);
        }
        for (int u = 0; u < t; ++u) putc(' ', stdout);
        for (int j = 0; j < s; ++j) {
            putc(arr[i][j], stdout);
        }
        putc('\n', stdout);
    }
}

int main() {
    while (1) {
    ///This part changes the size
    for (int I = 0; I < 3; ++I) {
        for (int i = 1; i <= 20; ++i) {
            system("clear");
            print(3, i);
            for (int s = 0; s < TIME; ++s);
        }
        for (int i = 20; i >= 1; --i) {
            system("clear");
            print(3, i);
            for (int s = 0; s < TIME; ++s);
        }
    }
    ///
    ///
    for (int i = 1; i <= 20; ++i) {
        system("clear");
        print(3, i);
        for (int s = 0; s < TIME; ++s);
    }
    ///
    ///This part moves the spaces
    for (int I = 0; I < 3; ++I) {
        for (int i = 3; i <= 20; ++i) {
            system("clear");
            print(i, 20);
            for (int s = 0; s < TIME; ++s);
        }
        for (int i = 20; i >= 3; --i) {
            system("clear");
            print(i, 20);
            for (int s = 0; s < TIME; ++s);
        }
    }
    ///
    for (int i = 20; i >= 1; --i) {
        system("clear");
        print(3, i);
        for (int s = 0; s < TIME; ++s);
    }
    }
    return 0;
}
