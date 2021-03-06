#include "TestIncludes.h"

#include <vector>
#include <array>
#include <deque>
#include <list>
#include <forward_list>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>

#include "Small.h"

TEST(SmallTest, SizeIsOneByte) {

    EXPECT_EQ(1u, sizeof(Small));
}

TEST(SmallTest, CreateObject) {

    Small small{};
}

TEST(SmallTest, HasLessThenOperator) {

    Small a{};
    Small b{};

    a < b;
}

TEST(SmallTest, HasEqualityOperator) {

    Small a{};
    Small b{};

    a == b;
}

TEST(SmallTest, CanBeHashed) {

    Small small{};
    std::hash<Small> hash;

    hash(small);
}

TEST(SmallTest, Collections) {

    Small small{};

    std::vector<Small> vector{};
    vector.push_back(small);

    std::array<Small, 1> array{};
    array[0] = small;

    std::deque<Small> deque{};
    deque.push_back(small);

    std::list<Small> list{};
    list.push_back(small);

    std::forward_list<Small> forward_list{};
    forward_list.push_front(small);

    std::map<Small, bool> map{};
    map[small] = true;

    std::set<Small> set{};
    set.insert(small);

    std::unordered_map<Small, bool> unordered_map{};
    unordered_map[small] = true;

    std::unordered_set<Small> unordered_set{};
    unordered_set.insert(small);
}

TEST(SmallTest, Randomize) {

    auto count = 0u;

    for (auto n = 0u; n < 1024u; n++) {

        Small small{};
        small.randomize();

        for (char i : small.data) {

            ASSERT_LE(-128, i);
            ASSERT_GE(127, i);

            if (i != 0)
                ++count;
        }
    }

    EXPECT_NE(0u, count) << "All elements were zero?";
}

TEST(SmallTest, Clear) {

    Small small{};
    small.randomize();
    small.clear();

    for (char i : small.data) {
        ASSERT_EQ(0, i);
    }
}


// TODO: Add tests for your operators implementation!

TEST(SmallTest, IsEqual)
{
    Small a{3};
    Small b{1};
    Small c{5};
    Small d{3};
    EXPECT_EQ(a==b, 0);
    EXPECT_EQ(a==c, 0);
    EXPECT_EQ(a==d, 1);
}

TEST(SmallTest, IsLessThan)
{
    Small a{3};
    Small b{1};
    Small c{5};
    Small d{3};
    EXPECT_EQ(a<b, 0);
    EXPECT_EQ(a<c, 1);
    EXPECT_EQ(a<d, 0);
}

TEST(SmallTest, IsHashEqual)
{
    Small a{'c'};
    std::size_t hashed1 = (std::hash<int>{}(0)) ^ ((std::hash<char>{}(a.data[0]))<<1);
    std::hash <Small> fubar;
    std::size_t hashed2 = fubar(a);
    EXPECT_EQ(hashed1, hashed2);
}