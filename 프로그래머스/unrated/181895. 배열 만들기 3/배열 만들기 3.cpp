#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> intervals) {
    vector<int> answer;
    for(int i=0;i<intervals.size();i++){
        for(int j=intervals[i].front();j<=intervals[i].back();j++){
            answer.emplace_back(arr[j]);
        }
    }
    return answer;
}