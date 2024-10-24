#include <iostream>
#include <stack>
using namespace std;
int NGE(int arr[],int L,int index)
{
    stack < int > st;
    for (int i = L-1; i >= index; i--)
    {
        st.push(arr[i]);
    }
    int target = st.top();
    while (true)
    {
        st.pop();
        if(st.empty()) return -1;
        if(st.top() > target) return st.top();
    }


}
int main()
{
    const int L = 4;
    int arr[L] = {4,5,2,25};

    for (int i = 0; i < L; i++)
        cout<<arr[i]<<" -> "<<NGE(arr,L,i)<<endl;

}
