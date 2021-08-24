class Solution {
public:
    vector<int> frequencySort(vector<int>& arr) {
        map<int,int>A;
        
        for(int i=0;i<arr.size();i++)
        {
            A[arr[i]]++;
        }
        sort(arr.begin(),arr.end(),[&](int a,int b){
            return A[a]!=A[b]?A[a]<A[b]:a>b;
        });
     return arr; 
    }
};
