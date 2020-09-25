/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 int palindrome(vector<int> A)
 {
     vector<int>B=A;
     reverse(B.begin(),B.end());
     if(A==B) return 1;
     else return 0;
 }
int Solution::isSymmetric(TreeNode* A) {
    if(A==NULL)
      return 1;
    TreeNode* B=A;
    queue<TreeNode*>q1;
    queue<TreeNode*>q2;
    q1.push(A);
    q2.push(B);
    while(!q1.empty())
    {
        TreeNode* tempa;
        TreeNode* tempb;
        int k1=q1.size();
        int k2=q2.size();
        if(k1!=k2)
          return 0;
         while(k1--)
         {
             tempa=q1.front();
             q1.pop();
             tempb=q2.front();
             q2.pop();
             if(tempa->val!=tempb->val) return 0;
             if(tempa->left || tempb->right)
             {
                 if(!(tempa->left && tempb->right)) return 0;
                 q1.push(tempa->left);
                 q2.push(tempb->right);
             }
             if(tempb->left || tempa->right)
             {
                 if(!(tempb->left && tempa->right)) return 0;
                 q1.push(tempa->right);
                 q2.push(tempb->left);
             }
             
         }
    }
    return 1;
    
    
      
      
}
