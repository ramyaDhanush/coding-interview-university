# AVL TREE (Adelson, Velski & Landis)

**Prerequisite** : BST

1. AVL is height balanced tree
2. Why BST is not enough? and we needed balancing BST (AVL Tree)
   a. Normal BST is having issues when data is sorted or almost sorted (skewed BT)
   b. Usign AVL tree we keep balancing when it becomes non-balancing while inserting data
3. AVL tree take the height of left and right subtrees and find the difference (L - R) and it should beeither {-1, 0, 1}
4. This difference is called Balance factor. 
5. If the balance factor of left and right subtrees is not either {-1, 0, 1} then tree is balanced using rotating techniques
    a. left left ==> Right rotation
    b. left right ==> left and right rotation
    c. right left ==> right and left rotation
    d. right right ==> left rotation

