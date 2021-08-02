class Solution {
  public:
    int findPosition(int N) {
        if(N==0)
            return -1;
        if(!(N&(N-1))){
            int x = log2(N);
            return x+1;
        }else{
            return -1;
        }
        // code here
    }
};