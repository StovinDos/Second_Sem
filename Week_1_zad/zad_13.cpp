#include <iostream>
#include <string>
using namespace std;

bool dfs(int** matrix, int N, int i, int j, const string& target, int index, bool** visited) {
    if (index == target.length()) {
        return true;
    }

    if (i < 0 || i >= N || j < 0 || j >= N || 
        visited[i][j] || (matrix[i][j] != (target[index] - '0'))) {
        return false;
    }

    visited[i][j] = true;

    bool found = dfs(matrix, N, i + 1, j, target, index + 1, visited) ||
                 dfs(matrix, N, i - 1, j, target, index + 1, visited) ||
                 dfs(matrix, N, i, j + 1, target, index + 1, visited) ||
                 dfs(matrix, N, i, j - 1, target, index + 1, visited);

    visited[i][j] = false;

    return found;
}

bool existsPath(int** matrix, int N, const string& target) {
    bool** visited = new bool*[N];
    for (int i = 0; i < N; ++i) {
        visited[i] = new bool[N];
        for (int j = 0; j < N; ++j) {
            visited[i][j] = false;
        }
    }

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (dfs(matrix, N, i, j, target, 0, visited)) {
                for (int k = 0; k < N; ++k) {
                    delete[] visited[k];
                }
                delete[] visited;
                return true;
            }
        }
    }

    for (int i = 0; i < N; ++i) {
        delete[] visited[i];
    }
    delete[] visited;

    return false;
}

int main() {
    int N, K;
    cout << "Enter matrix size (N): ";
    cin >> N;
    cout << "Enter number K: ";
    cin >> K;

    string target = to_string(K);

    int** matrix = new int*[N];
    for (int i = 0; i < N; ++i) {
        matrix[i] = new int[N];
    }

    cout << "Enter the matrix of digits:" << endl;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> matrix[i][j];
        }
    }

    if (existsPath(matrix, N, target)) {
        cout << "A path exists that forms the number " << K << "." << endl;
    } else {
        cout << "No such path exists." << endl;
    }

    for (int i = 0; i < N; ++i) {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}