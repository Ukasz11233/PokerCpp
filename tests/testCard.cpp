#include <gtest/gtest.h>
#include "../pokerModel/card.h"
using namespace std;
using namespace ::testing;

struct CardInfo
{
    Suit cardSuit;
    Rank cardRank;
    std::string expectedResult;
};

class TestCard :  public testing::TestWithParam<CardInfo>
{
public:
    void SetUp() override {}

private:
};


TEST_P(TestCard, testSuitCardDiamond)
{
    auto const & cardInfo = GetParam();
    Card testableCard = Card(cardInfo.cardSuit, cardInfo.cardRank);
    EXPECT_EQ(cardInfo.expectedResult, testableCard.toString());
}
std::vector<CardInfo> LoadTestData()
{
    std::vector<CardInfo> testData;
    testData.push_back({Suit::DIAMOND, Rank::FOUR, "Card Suit: 3 Rank: 4"});
    testData.push_back({Suit::DIAMOND, Rank::SEVEN, "Card Suit: 3 Rank: 7"});
    return testData;
}

INSTANTIATE_TEST_CASE_P(CardTests,
                        TestCard,
                        ::testing::ValuesIn(LoadTestData()));

TEST_F(TestCard, testCardSuitHeartSuiteSeven)
{
    Suit cardSuit = Suit::HEART;
    Rank cardRank = Rank::SEVEN;
    Card testableCard = Card(cardSuit, cardRank);
    const std::string expectedCard = "Card Suit: 0 Rank: 7";
    EXPECT_EQ(expectedCard, testableCard.toString());
}

TEST_F(TestCard, testCardSuitSpadeSuiteThree)
{
    Suit cardSuit = Suit::SPADE;
    Rank cardRank = Rank::THREE;
    Card testableCard = Card(cardSuit, cardRank);
    const std::string expectedCard = "Card Suit: 1 Rank: 3";
    EXPECT_EQ(expectedCard, testableCard.toString());
}



