#include <iostream>
#include <deque>
using namespace std;

void printKMax(int arr[], int n, int k){

    deque<int> d;

    for (int i=0; i<n; i++){

        // base case for first element
        if (d.empty()){
            d.push_back(i);
        }

        // remove elements outside the current window
        if (d.front() <= (i - k)){
            d.pop_front();
        }

        // move max element to the front
        while (!d.empty() && arr[i] >= arr[d.back()]){
            d.pop_back();
        }

        d.push_back(i);

        // print out only when the first window is completed
        if (i >= (k - 1)){
            cout << arr[d.front()] << " ";
        }
    }
    cout << endl;
}

int main(){

	int t;
	cin >> t;
	while(t>0) {
		int n,k;
    	cin >> n >> k;
    	int i;
    	int arr[n];
    	for(i=0;i<n;i++)
      		cin >> arr[i];
    	printKMax(arr, n, k);
    	t--;
  	}
  	return 0;
}
