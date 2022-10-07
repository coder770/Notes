// iterative post order traversal using 1 stack

while(curr!=NULL || !st.isempty()){
    if(curr!=null){
        st.push(curr)
        curr=curr->left;
    }
    else 
        temp=st.top()->right;
        if(temp==null)
             temp=st.top()
             st.pop()
             postorder(temp);
             while(!st.empty && temp==st.top()->right)
                 temp=st.top(),st.pop();
                 postorder.add(temp->val);
        else
          curr=temp;
}