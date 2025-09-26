
#include <stdio.h>

// Linear Search Function
int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i;  // key পাওয়া গেছে, ইনডেক্স রিটার্ন
        }
    }
    return -1;  // key পাওয়া যায়নি
}

int main() {
    int arr[] = {10, 25, 30, 45, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key;

    printf("অ্যারের উপাদানগুলো: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nযে উপাদান খুঁজবেন তা লিখুন: ");
    scanf("%d", &key);

    int result = linearSearch(arr, n, key);

    if (result != -1)
        printf("উপাদান %d পাওয়া গেছে ইনডেক্স %d এ।\n", key, result);
    else
        printf("উপাদান %d অ্যারেতে নেই।\n", key);

    return 0;
}
