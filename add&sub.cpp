int main(int, char**, char**) {
    std::cout << "Sum of 10 and 20 is: " << add(10, 20) << std::endl;
    std::cout << "Dufference of 20 and 10 is: " << sub(20, 10) << std::endl;

    return 0;
}
int add(int a, int b) {
    int sum = a + b;
    return sum;
}

int sub(int big, int small) {
  int diff = big - small;
  return diff;
}

