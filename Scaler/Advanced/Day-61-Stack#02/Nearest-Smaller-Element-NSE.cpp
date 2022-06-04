/*
Problem Description
Given an array A, find the nearest smaller element G[i] for every element A[i] in the array such that the element has an index smaller than i.

More formally,

G[i] for an element A[i] = an element A[j] such that

j is maximum possible AND

j < i AND

A[j] < A[i]

Elements for which no smaller element exist, consider the next smaller element as -1.

Problem Constraints
1 <= |A| <= 100000

-109 <= A[i] <= 10^9

Input
 A = [4, 5, 2, 10, 8]
Output
 [-1, 4, -1, 2, 2]
*/

#include<bits/stdc++.h>
using namespace std;

vector<int> nextGreaterLeft(vector<int> &A) {
 stack<int>st;
    vector<int>ans;
    for(int i=0;i<A.size();i++){
        while(!st.empty() && st.top()<=A[i]){
            st.pop();
        }
        if(!st.empty()){
            ans.push_back(st.top());
        }else{
            ans.push_back(-1);
        }
        st.push(A[i]);
    }
    return ans;
}
int main(){
    vector<int>A={10,3,9,5,7,2,11};
    vector<int>result;
    result=nextGreaterLeft(A);
    for(auto it:result){
        cout<<it<<" ";
    }
}