void swap (int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void qSort (int arr[], int s, int f) {
    if (s >= f) return;
    
    int piv = s;
    int i = piv+1, j=f;
    
    while (i <= j) {
        while (arr[i]<=arr[piv] && i<=f) i++;
        while (arr[j]>=arr[piv] && j>s) j--;
        
        if (i > j) 
            swap (&arr[piv], &arr[j]);
        else 
            swap (&arr[i], &arr[j]);
            
        qSort (arr, s, j-1);
        qSort (arr, j+1, f);
    }
}

/* https://hongku.tistory.com/149 
에서 배운 알고리즘입니다. */
