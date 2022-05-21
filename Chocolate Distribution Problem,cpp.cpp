

/*Given an array of n integers where each value represents the number of chocolates in a packet.
 Each packet can have a variable number of chocolates. There are m students,
  the task is to distribute chocolate packets such that: 

Each student gets one packet.
The difference between the number of chocolates in the packet with maximum
 chocolates and packet with minimum chocolates given to the students is minimum*/
 

int findMinDiff(int arr[], int n, int m)
{
    
    if (m == 0 || n == 0)
        return 0;
  
    
    sort(arr, arr + n);
  
    
    if (n < m){
    	return -1;
	}
        
    int min_diff = 0;
  
    for (int i = 0; i + m - 1 < n; i++) {
        int diff = arr[i + m - 1] - arr[i];
        if (diff < min_diff)
            min_diff = diff;
    }
    return min_diff;
}
