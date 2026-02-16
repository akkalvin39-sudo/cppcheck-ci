// cppcheck-suppress unusedFunction
int sum(int a, int b) { return a + b; }
int main(void)
{
    // cppcheck-suppress constVariable
    int arr[5] = { 0 };
    return arr[2];
}
