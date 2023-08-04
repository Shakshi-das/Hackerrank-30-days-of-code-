//Testing
//program to finish the implementation of  classes to provide data and expected results for the tests

class TestDataEmptyArray {
public:
    static vector<int> get_array() {
        vector<int> vect{};
        return vect;
    }

};

class TestDataUniqueValues {
public:
    static vector<int> get_array() {
        vector<int> vect{ 23,5,8,12,7 };
        return vect;
    }

    static int get_expected_result() {
        return 1;
    }

};

class TestDataExactlyTwoDifferentMinimums {
public:
    static vector<int> get_array() {
        vector<int> vect{ 9,23,3,8,12,3,7 };
        return vect;
    }

    static int get_expected_result() {
        return 2;
    }

};
