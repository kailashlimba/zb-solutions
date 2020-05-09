
TreeNode* buildnewTree(vector<int>&A,vector<int> &B,int iStart,int iEnd,unordered_map<int,int>&map,int &postIndex){

    if(iStart>iEnd)return NULL;
    int rootVal = B[postIndex];
    postIndex--;
    TreeNode* root = new TreeNode(rootVal);

    int index =map[rootVal];
    root->right = buildnewTree(A,B,index+1,iEnd,map,postIndex);
    root->left  = buildnewTree(A,B,iStart,index-1,map,postIndex);

    return root;
}

TreeNode* memorySet(vector<int>&A, vector<int>&B){
    unordered_map<int,int>map;

    int len = A.size();
    for(int i =0;i<len;i++){
        map[A[i]]=i;
    }
    int postIndex = len-1;

    return buildnewTree(A,B,0,len-1,map,postIndex);
}

TreeNode* Solution::buildTree(vector<int> &A, vector<int> &B) {

    struct TreeNode* root = memorySet(A,B);
    return root;
}

