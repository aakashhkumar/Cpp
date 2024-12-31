double calculateAverage(int arr[], int arrSize) {
    double sum = 0.0;
     
    for (int i = 0; i < arrSize; ++i) {
        sum += arr[i]; 
    } 
  
    double average = sum / arrSize;
    return average; 
    
}
