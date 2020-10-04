package com.company;

import java.util.Scanner;

public class Main {

    // swap function for array elements
    static void swap(int a[], int i, int j) {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
    // partition function
    static int partition(int a[], int low, int high) {
        int pivot = a[high];
        int i = low - 1;
        int j;
        for (j = low; j <= high-1; j++)
        {
            if (a[j] < pivot)
            {
                i++;
                swap(a,i,j);
            }
        }
        swap(a, i+1, high);
        return (i+1);
    }
    //sorting function
    static void quickSort(int a[],int low, int high) {
        int pi;
        if ( low < high) {
            pi = partition(a,low,high);
            quickSort(a, low, pi-1);
            quickSort(a, pi+1, high);
        }
    }

    public static void main(String[] args) {
        int arr[] = {2, 1023, 90, 3, 1};
        quickSort(arr, 0, arr.length-1);
        for (int i=0; i<arr.length; i++)
        {
            System.out.printf("%d ", arr[i]);
        }

    }
}
