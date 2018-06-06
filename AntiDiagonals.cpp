// Anti_Diagonals
vector<vector<int> > Solution::diagonal(vector<vector<int> > &A) {
    vector<vector<int> > x;
    for(int i=0;i<2*A[0].size()-1;i++){
        vector<int> a;
        for(int k=0,j=i;k<A[0].size(),j>=0;j--,k++)
            if(k<A[0].size()&&j>=0&&j<A[0].size())
                a.push_back(A[k][j]);
        x.push_back(a);
    }
    return x;
}

