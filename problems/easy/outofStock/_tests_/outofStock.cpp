int main() {
    const char *inStock[] = {"milk", "eggs", "bread"};
    const char *required[] = {"bread", "butter", "milk", "cheese"};
    char *result[4];

    int count = fillInventory(inStock, 3, required, 4, result);

    if (count == 2 &&
       ((strcmp(result[0], "butter") == 0 && strcmp(result[1], "cheese") == 0) ||
        (strcmp(result[1], "butter") == 0 && strcmp(result[0], "cheese") == 0))) {
        printf("✅ C++ test passed\n");
    } else {
        printf("❌ C++ test failed\n");
    }

    return 0;
}