#include "test.h"

TEST(NaturalSortTest, BasicTest) {
    vector<string> files = {
        "file10.txt",
        "file2.txt",
        "file1.txt",
        "file3.txt",
        "file20.txt",
        "file11.txt"
    };

    vector<string> expected = {
        "file1.txt",
        "file2.txt",
        "file3.txt",
        "file10.txt",
        "file11.txt",
        "file20.txt"
    };

    natural_sort(files);
    EXPECT_EQ(files, expected);
}

TEST(NaturalSortTest, AllNumbersTest) {
    vector<string> files = {
        "10",
        "2",
        "1",
        "3",
        "20",
        "11"
    };

    vector<string> expected = {
        "1",
        "2",
        "3",
        "10",
        "11",
        "20"
    };

    natural_sort(files);
    EXPECT_EQ(files, expected);
}

//TEST(NaturalSortTest, MixedNumbersAndTextTest) {
    //vector<string> files = {
        //"file10.txt",
        //"file2.txt",
        //"file1.txt",
        //"file3.txt",
        //"file20.txt",
        //"file11.txt",
        //"fileA.txt",
        //"fileB.txt",
        //"fileC.txt"
    //};

    //vector<string> expected = {
        //"file1.txt",
        //"file2.txt",
        //"file3.txt",
        //"fileA.txt",
        //"fileB.txt",
        //"fileC.txt",
        //"file10.txt",
        //"file11.txt",
        //"file20.txt"
    //};

    //natural_sort(files);
    //EXPECT_EQ(files, expected);
//}

TEST(NaturalSortTest, EmptyTest) {
    vector<string> files;
    vector<std::string> expected;

    natural_sort(files);
    EXPECT_EQ(files, expected);
}
