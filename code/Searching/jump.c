#include <stdio.h>
#include <math.h>

// Jump Search Function
int jumpSearch(int arr[], int n, int key) {
    int step = sqrt(n);   // জাম্প করার ব্লক সাইজ (√n)
    int prev = 0;

    // key যে ব্লকে থাকতে পারে সেটা খুঁজে বের করা
    while (arr[(step < n ? step : n) - 1] < key) {
        prev = step;
        step += sqrt(n);
        if (prev >= n)  // key নেই
            return -1;
    }

    // ব্লকের মধ্যে লিনিয়ার সার্চ চালানো
    for (int i = prev; i < step && i < n; i++) {
        if (arr[i] == key)
            return i;  // key পাওয়া গেছে
    }

    return -1;  // key পাওয়া যায়নি
}

int main() {
    int arr[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key;

    printf("Sorted Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nযে উপাদান খুঁজবেন তা লিখুন: ");
    scanf("%d", &key);

    int result = jumpSearch(arr, n, key);

    if (result != -1)
        printf("উপাদান %d পাওয়া গেছে ইনডেক্স %d এ।\n", key, result);
    else
        printf("উপাদান %d অ্যারেতে নেই।\n", key);

    return 0;
}

