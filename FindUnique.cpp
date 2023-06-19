int findUnique(int *arr, int size)
{
    //Write your code here
    int single  = 0 ; 

    for(int i = 0 ; i < size ; i++){
         single ^= arr[i] ; 
    }

    return single  ; 
}
