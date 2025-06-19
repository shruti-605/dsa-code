class Solution {
  public:
    vector<int> minAnd2ndMin(vector<int> &arr) {
        // code here
        int n=arr.size();
        sort(arr.begin(),arr.end());//sort the array
        int sm1=arr[0];//start from 0th index
        int sm2=-1;
        for(int i=1;i<n;i++){
            if(arr[i]!=sm1){//3!=2 true the
                sm2=arr[i];//sm2=3
                return {sm1,sm2};
            }
        }
        return {-1};
    
    }
};
