
public class CountingSort {
    public static void countingSort(int arr[], int max) {
        int count[] = new int[max + 1];
        int output[] = new int[arr.length];

        for (int i = 0; i < arr.length; i++) {
            count[arr[i]]++;
        }

        for (int i = 1; i <= max; i++) {
            count[i] += count[i - 1];
        }

        for (int i = arr.length - 1; i >= 0; i--) {
            output[count[arr[i]] - 1] = arr[i];
            count[arr[i]]--;
        }

        for (int i = 0; i < arr.length; i++) {
            arr[i] = output[i];
        }
    }

    public static void main(String[] args) {
        int arr[] = {4, 2, 2, 8, 3};
        countingSort(arr, 8);

        System.out.print("Sorted Array: ");
        for (int n : arr) {
            System.out.print(n + " ");
        }
    }
}
