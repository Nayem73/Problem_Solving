#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

int minDistSum(const std::vector<int>& dist_centers) {
    int n = dist_centers.size();
    int minSum = INT_MAX;

    // Try all possible pairs of warehouse locations
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            int sum = 0;
            for (int k = 0; k < n; ++k) {
                // Calculate the distance to the nearest warehouse
                sum += std::min(abs(dist_centers[k] - dist_centers[i]), abs(dist_centers[k] - dist_centers[j]));
            }
            minSum = std::min(minSum, sum);
        }
    }

    return minSum;
}

int main() {
    std::vector<int> dist_centers = {1, 2};
    std::cout << "Minimum sum of distances: " << minDistSum(dist_centers) << std::endl;
    return 0;
}
