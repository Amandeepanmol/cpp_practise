int lonelyinteger(vector<int> a) {
    
    int xor1=0;
    for(int i=0;i<a.size();i++)
    {
        xor1=xor1^a[i];
    }
    
    return xor1;

}
