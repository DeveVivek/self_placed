#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<int> st;

    //insertion
    st.push(5);
    st.push(7);
    st.push(9);

    //check size
    cout<<st.size()<<endl;

    //check empty or not
    cout<<st.empty()<<endl;

    //top element
    cout<<st.top()<<endl;

    //remove element from top
    st.pop();

    //top element
    cout<<st.top()<<endl;


    return 0;
}