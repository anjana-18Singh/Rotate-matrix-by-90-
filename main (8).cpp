#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;
void rotate(vector<vector<int>>& matrix){
int n=matrix.size();
//transposing the matrix//
for(int i=0;i<n;i++){
for(int j=0;j<n;j++){
  swap(matrix[i][j],matrix[j][i]);
}
}

//reversin  each row of the 
for(int i=0;i<n;i++){
  reverse(matrix[i].begin(),matrix[i].end());
 }
}

int main(){
  vector<vector<int>>arr;
  arr={{1,2,3},{4,5,6},{7,8,9}};
  rotate(arr);
  cout<<"rotated image"<<endl;
  for(int i=0;i<arr.size();i++){
    for(int j=0;j<arr[0].size(); j++){
      cout<<arr[i][j]<<" ";   }
  }
}
