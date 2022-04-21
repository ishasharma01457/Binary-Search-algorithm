
#include <bits/stdc++.h>
using namespace std;



int binarySearch(int a[], int l, int r, int x)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;


	if (a[mid] == x)
            return mid;


	if (a[mid] > x)
	    return binarySearch(a, l, mid - 1, x);


	return binarySearch(a, mid + 1, r, x);
    }


    return -1;
}

int main(void)
{
    int a[] = { 1, 3, 6, 10, 11,34};
    int x = 34;
    int n = sizeof(a) / sizeof(a[0]);
    int result = binarySearch(a, 0, n - 1, x);
    (result == -1)
	? cout << "Element is not present in array"
	: cout << "Element is present at index " << result;
    return 0;
}


