void test(int *ptr) {

    *ptr = 6;

}

int main() {
    int *ptr;
    // 是不小心, 还是故意的?
    test(ptr);
    return 0;
}

