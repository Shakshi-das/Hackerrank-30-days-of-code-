//more on exceptions
//program to create a calculator class and throw an exception message if inputs are negative integers

class Calculator {
public:
    int power(int n, int p) {
        if (n < 0 || p < 0)
            throw invalid_argument("n and p should be non-negative");
        return (int) pow(n, p);
    }
};
