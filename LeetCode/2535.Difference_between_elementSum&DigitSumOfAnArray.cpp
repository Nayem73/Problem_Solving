void incrementByD(int arr[], struct query q_arr[],
                  int n, int m, int d)
{
    int sum[n];
    memset(sum, 0, sizeof(sum));
 
    // for each (start, end) index pair perform the
    // following operations on 'sum[]'
    for (int i = 0; i < m; i++) {
 
        // increment the value at index 'start' by
        // the given value 'd' in 'sum[]'
        sum[q_arr[i].start] += d;
 
        // if the index '(end+1)' exists then decrement
        // the value at index '(end+1)' by the given
        // value 'd' in 'sum[]'
        if ((q_arr[i].end + 1) < n)
            sum[q_arr[i].end + 1] -= d;
    }
 
    // Now, perform the following operations:
    // accumulate values in the 'sum[]' array and
    // then add them to the corresponding indexes
    // in 'arr[]'
    arr[0] += sum[0];
    for (int i = 1; i < n; i++) {
        sum[i] += sum[i - 1];
        arr[i] += sum[i];
    }
}