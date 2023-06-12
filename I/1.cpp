#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#include <vector>
#include <random>

// Function to evaluate the fitness of a solution
int evaluateSolution(const std::vector<int>& solution) {
    // In this example, the fitness is the sum of all elements in the solution
    int fitness = 0;
    for (int element : solution) {
        fitness += element;
    }
    return fitness;
}

    mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
// Function to generate a random neighbor solution
std::vector<int> generateNeighbor(const std::vector<int>& solution) {
    // std::random_device rd;
    // std::mt19937 gen(rd());
    // std::uniform_int_distribution<> rng(-1, 1);

    std::vector<int> neighbor = solution;
    int index = rng() % solution.size();
    int tmp = rng();
    if (tmp % 2 == 0) tmp = 1;
    else tmp = -1;
    neighbor[index] += tmp;

    return neighbor;
}

// Function to perform the Hill Climbing algorithm
std::vector<int> hillClimbing(const std::vector<int>& initialSolution) {
    std::vector<int> currentSolution = initialSolution;
    int currentFitness = evaluateSolution(currentSolution);
    // std::cout << currentFitness << endl;

    while (true) {
        std::vector<int> neighborSolution = generateNeighbor(currentSolution);
        int neighborFitness = evaluateSolution(neighborSolution);
        for (int X: neighborSolution) cout << X << ' ';
        cout << endl;
        cout << neighborFitness<< ' '<<currentFitness << endl;

        if (neighborFitness > currentFitness) {
            currentSolution = neighborSolution;
            currentFitness = neighborFitness;
        } else {
            break;
        }
    }

    return currentSolution;
}

int main() {
    // Example usage of the Hill Climbing algorithm
    std::vector<int> initialSolution = {1, 2, 3, 4, 5};
    std::vector<int> finalSolution = hillClimbing(initialSolution);

    cout << "Initial Solution: ";
    for (int element : initialSolution) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    std::cout << "Final Solution: ";
    for (int element : finalSolution) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    return 0;
}
