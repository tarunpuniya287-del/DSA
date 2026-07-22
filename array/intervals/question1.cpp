// You are given an array of non-overlapping intervals intervals where intervals[i] = [starti, endi] represent the start and the end of the ith interval and intervals is sorted in ascending order by starti. You are also given an interval newInterval = [start, end] that represents the start and end of another interval.
// Insert newInterval into intervals such that intervals is still sorted in ascending order by starti and intervals still does not have any overlapping intervals (merge overlapping intervals if necessary).
// Return intervals after the insertion.
// Note that you don't need to modify intervals in-place. You can make a new array and return it.

// Example 1:
// Input: intervals = [[1,3],[6,9]], newInterval = [2,5]
// Output: [[1,5],[6,9]]

// Example 2:
// Input: intervals = [[1,2],[3,5],[6,7],[8,10],[12,16]], newInterval = [4,8]
// Output: [[1,2],[3,10],[12,16]]
// Explanation: Because the new interval [4,8] overlaps with [3,5],[6,7],[8,10].
 


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<vector<int>> insert(vector<vector<int>>& intervals , vector<int> &newinterval){
    vector<vector<int>> ans;
    int n = intervals.size();
    int i = 0;
    while(i<n && intervals[i][1]<newinterval[0]){
        ans.push_back(intervals[i]);
        i++;
    }
    while(i<n && newinterval[1]>=intervals[i][0]){
        newinterval[0] = min(newinterval[0],intervals[i][0]);
        newinterval[1]= max(newinterval[1],intervals[i][1]);
        i++;
    } ans.push_back(newinterval);
    while(i<n){
        ans.push_back(intervals[i]);
        i++;
    }
    return ans;
}


int main(){
    int m; cout<<"Enter the size: "; cin>>m;
    vector<vector<int>> intervals(m,vector<int>(2));
    for(int i=0; i<m; i++){
        cin>>intervals[i][0]>>intervals[i][1];
    }
    
    vector<int> newinterval(2);
    cin>>newinterval[0]>>newinterval[1];

    vector<vector<int>> result = insert(intervals, newinterval);
    for(auto &v : result){
        cout << "[" << v[0] << "," << v[1] << "] ";
    }
    return 0;

}