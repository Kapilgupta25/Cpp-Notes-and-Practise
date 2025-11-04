class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int diag=0;
        int area=0;
        for(int i=0; i<dimensions.size(); i++){
            int temp=(dimensions[i][0]*dimensions[i][0])+(dimensions[i][1]*dimensions[i][1]);
            if(temp>=diag){
                diag=temp;
                area=max(area, (dimensions[i][0]*dimensions[i][1]));
            }  
        }

        return area;
    }
};
