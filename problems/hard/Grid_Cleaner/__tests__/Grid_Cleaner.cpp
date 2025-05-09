#include <iostream>
#include <vector>
#include <cassert>
#include "../hard/Grid_Cleaner/Grid_Cleaner.cpp"

std::vector<std::vector<int>> Grid_Cleaner0(std::vector<std::vector<int>> grid, int column, int row, int n, int direction);

void testGridCleaner() {
    std::vector<std::vector<int>> grid1 = {{1}};
    std::vector<std::vector<int>> result1 = Grid_Cleaner0(grid1, 0, 0, 1, 0);
    assert(result1 == std::vector<std::vector<int>>{{0, 0}});
    
    std::vector<std::vector<int>> grid2 = {{0}};
    std::vector<std::vector<int>> result2 = Grid_Cleaner0(grid2, 0, 0, 1, 0);
    assert(result2 == std::vector<std::vector<int>>{{0, 1}});

    std::cout << "All tests passed!" << std::endl;
}

int main() {
    testGridCleaner();
    return 0;
}