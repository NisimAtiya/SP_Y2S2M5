
#include "doctest.h"
#include "sources/MagicalContainer.hpp"

TEST_CASE("Test addElement and size functions") {
    MagicalContainer mc;
    CHECK(mc.size() == 0);
    mc.addElement(1);
    CHECK(mc.size() == 1);
    mc.addElement(2);
    CHECK(mc.size() == 2);
    mc.addElement(3);
    CHECK(mc.size() == 3);
}

TEST_CASE("Test removeElement function") {
    MagicalContainer mc;
    mc.addElement(1);
    mc.addElement(2);
    mc.addElement(3);
    mc.removeElement(2);
    CHECK(mc.size() == 2);
    mc.removeElement(1);
    CHECK(mc.size() == 1);

}

TEST_CASE("Test AscendingIterator class") {
    MagicalContainer mc;
    mc.addElement(3);
    mc.addElement(1);
    mc.addElement(2);
    MagicalContainer::AscendingIterator ascIter(mc);
    auto it = ascIter.begin();
    CHECK(*it == 1);
    ++it;
    CHECK(*it == 2);
    ++it;
    CHECK(*it == 3);
}

TEST_CASE("Test PrimeIterator class") {
    MagicalContainer mc;
    mc.addElement(3);
    mc.addElement(1);
    mc.addElement(2);
    MagicalContainer::PrimeIterator ascIter(mc);
    auto it = ascIter.begin();
    CHECK(*it == 2);
    ++it;
    CHECK(*it == 3);

}

TEST_CASE("Test SideCrossIterator class") {
    MagicalContainer mc;
    mc.addElement(3);
    mc.addElement(1);
    mc.addElement(2);
    MagicalContainer::SideCrossIterator ascIter(mc);
    auto it = ascIter.begin();
    CHECK(*it == 1);
    ++it;
    CHECK(*it == 3);
    ++it;
    CHECK(*it == 2);
}

TEST_CASE("Test addElement and AscendingIterator classes together") {
    MagicalContainer mc;
    mc.addElement(3);
    mc.addElement(1);
    mc.addElement(2);
    MagicalContainer::AscendingIterator ascIter(mc);
    auto it = ascIter.begin();
    CHECK(*it == 1);
    ++it;
    CHECK(*it == 2);
    ++it;
    CHECK(*it == 3);
    mc.addElement(0);
    it = ascIter.begin();
    CHECK(*it == 0);
    ++it;
    CHECK(*it == 1);
    ++it;
    CHECK(*it == 2);
    ++it;
    CHECK(*it == 3);
}

TEST_CASE("Test addElement and PrimeIterator classes together") {
    MagicalContainer mc;
    mc.addElement(3);
    mc.addElement(1);
    mc.addElement(2);
    MagicalContainer::PrimeIterator ascIter(mc);
    auto it = ascIter.begin();
    CHECK(*it == 2);
    ++it;
    CHECK(*it == 3);
    mc.addElement(0);
    it = ascIter.begin();
    CHECK(*it == 2);
    ++it;
    CHECK(*it == 3);
}

TEST_CASE("Test addElement and SideCrossIterator classes together") {
    MagicalContainer mc;
    mc.addElement(3);
    mc.addElement(1);
    mc.addElement(2);
    MagicalContainer::SideCrossIterator ascIter(mc);
    auto it = ascIter.begin();
    CHECK(*it == 1);
    ++it;
    CHECK(*it == 3);
    ++it;
    CHECK(*it == 2);

    mc.addElement(0);
    it = ascIter.begin();
    CHECK(*it == 0);
    ++it;
    CHECK(*it == 3);
    ++it;
    CHECK(*it == 1);
    ++it;
    CHECK(*it == 2);
}