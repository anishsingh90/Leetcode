#include <vector>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // if (matrix.empty() || matrix[0].empty()) {
        //     return false;
        // }
        
        int n = matrix.size();
        int m = matrix[0].size();
        
        for (int i = 0; i < n; ++i) {
            if (binarySearch(matrix[i], target)) {
                return true;
            }
        }
        
        return false;
    }
    
private:
    bool binarySearch(const vector<int>& row, int target) {
        int left = 0;
        int right = row.size() - 1;
        
        while (left <= right) {
            int mid = left + (right - left) / 2;
            
            if (row[mid] == target) {
                return true;
            } else if (row[mid] < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        
        return false;
    }
};