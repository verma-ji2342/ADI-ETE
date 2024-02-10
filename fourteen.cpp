// C++ program to implement
// the above approach

#include <bits/stdc++.h>
using namespace std;

int cntIndexesToMakeBalance(int arr[], int n)
{
	if (n == 1) {
		return 1;
	}

	if (n == 2)
		return 0;

	int sumEven = 0;

	int sumOdd = 0;

	// Traverse the array
	for (int i = 0; i < n; i++) {
		if (i % 2 == 0) {
			sumEven += arr[i];
		}
		else {
			sumOdd += arr[i];
		}
	}

	int currOdd = 0;

	int currEven = arr[0];

	int res = 0;

	int newEvenSum = 0;

	int newOddSum = 0;

	// Traverse the array
	for (int i = 1; i < n - 1; i++) {

		// If i is an odd number
		if (i % 2) {

			// Update currOdd
			currOdd += arr[i];

			// Update newEvenSum
			newEvenSum = currEven + sumOdd
						- currOdd;

			// Update newOddSum
			newOddSum = currOdd + sumEven
						- currEven - arr[i];
		}

		// If i is an even number
		else {

			// Update currEven
			currEven += arr[i];

			// Update newOddSum
			newOddSum = currOdd + sumEven
						- currEven;

			// Update newEvenSum
			newEvenSum = currEven + sumOdd
						- currOdd - arr[i];
		}

		// If newEvenSum is equal to newOddSum
		if (newEvenSum == newOddSum) {

			// Increase the count
			res++;
		}
	}

	// If sum of even-indexed and odd-indexed
	// elements is equal by removing the first element
	if (sumOdd == sumEven - arr[0]) {

		// Increase the count
		res++;
	}

	// If length of the array
	// is an odd number
	if (n % 2 == 1) {

		// If sum of even-indexed and odd-indexed
		// elements is equal by removing the last element
		if (sumOdd == sumEven - arr[n - 1]) {

			// Increase the count
			res++;
		}
	}

	// If length of the array
	// is an even number
	else {

		// If sum of even-indexed and odd-indexed
		// elements is equal by removing the last element
		if (sumEven == sumOdd - arr[n - 1]) {

			// Increase the count
			res++;
		}
	}

	return res;
}

// Driver Code
int main()
{

	int arr[] = { 5, 5, 2, 5, 8};
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << cntIndexesToMakeBalance(arr, n);
	return 0;
}
