class Solution{
  public:
    void swapElements(int arr[], int sizeof_array){
        int temp=0;
        for(int i=0;i<sizeof_array-2;i++)
        {
            temp=arr[i];
            arr[i]=arr[i+2];
            arr[i+2]=temp;
        }    
    }
};
