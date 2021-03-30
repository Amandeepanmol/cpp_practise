class Solution{
    public:
    //Complete this function
    //The array arr is globally declared
    void interchange(vector<vector<int>>&arr, int r,int c)
    {
        int  temp=0;
        for(int i=0;i<r;i++)
        {
            temp=arr[i][0];
            arr[i][0]=arr[i][c-1];
            arr[i][c-1]=temp;
        }
      //Printing the modified matrix
        for(int i=0;i<r;i++)
        { 
        	 for(int j=0;j<c;j++)
             {
            	   cout<<arr[i][j]<<" ";
            	        
             }
             cout<<endl;
    	 }
    }
};
