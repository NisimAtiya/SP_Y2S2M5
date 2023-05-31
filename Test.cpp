
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
    mc.removeElement(3);
    CHECK(mc.size() == 0);
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

//TEST_CASE("Test AscendingIterator and PrimeIterator classes together") {
//    MagicalContainer mc;
//    mc.addElement(3);
//    mc.addElement(1);
//    mc.addElement(2);
//    auto it1 = mc.AscendingIterator::begin();
//    auto it2 = mc.PrimeIterator::begin();
//    CHECK(*it1 == 1);
//    CHECK(*it2 == 2);
//    ++it1;
//    ++it2;
//    CHECK(*it1 == 2);
//    CHECK(*it2 == 3);
//    ++it1;
//    ++it2;
//    CHECK(*it1 == 3);
//    CHECK(it == mc.PrimeIterator::end());
//    ++it1;
//    CHECK(it1 == mc.AscendingIterator::end());
//}
//
//TEST_CASE("Test AscendingIterator and SideCrossIterator classes together") {
//    MagicalContainer mc;
//    mc.addElement(3);
//    mc.addElement(1);
//    mc.addElement(2);
//    auto it1 = mc.AscendingIterator::begin();
//    auto it2 = mc.SideCrossIterator::begin();
//    CHECK(*it1 == 1);
//    CHECK(*it2 == 1);
//    ++it1;
//    ++it2;
//    CHECK(*it1 == 2);
//    CHECK(*it2 == 3);
//    ++it1;
//    ++it2;
//    CHECK(*it1 == 3);
//    CHECK(*it2 == 2);
//    ++it1;
//    ++it2;
//    CHECK(it1 == mc.AscendingIterator::end());
//    CHECK(it2 == mc.SideCrossIterator::end());
//}
//
//TEST_CASE("Test PrimeIterator and SideCrossIterator classes together") {
//    MagicalContainer mc;
//    mc.addElement(3);
//    mc.addElement(1);
//    mc.addElement(2);
//    auto it1 = mc.PrimeIterator::begin();
//    auto it2 = mc.SideCrossIterator::begin();
//    CHECK(*it1 == 2);
//    CHECK(*it2 == 1);
//    ++it1;
//    ++it2;
//    CHECK(*it1 == 3);
//    CHECK(*it2 == 3);
//    ++it1;
//    CHECK(it1 == mc.PrimeIterator::end());
//    ++it2;
//    CHECK(*it2 == 2);
//    ++it2;
//    CHECK(it2 == mc.SideCrossIterator::end());
//}
//
//TEST_CASE("Test adding and removing elements with AscendingIterator class") {
//    MagicalContainer mc;
//    mc.addElement(3);
//    mc.addElement(1);
//    mc.addElement(2);
//    auto it = mc.AscendingIterator::begin();
//    CHECK(*it == 1);
//    ++it;
//    CHECK(*it == 2);
//    ++it;
//    CHECK(*it == 3);
//    ++it;
//    CHECK(it == mc.AscendingIterator::end());
//    mc.addElement(0);
//    it = mc.AscendingIterator::begin();
//    CHECK(*it == 0);
//    ++it;
//    CHECK(*it == 1);
//    ++it;
//    CHECK(*it == 2);
//    ++it;
//    CHECK(*it == 3);
//    ++it;
//    CHECK(it == mc.AscendingIterator::end());
//    mc.removeElement(2);
//    it = mc.AscendingIterator::begin();
//    CHECK(*it == 0);
//    ++it;
//    CHECK(*it == 1);
//    ++it;
//    CHECK(*it == 3);
//    ++it;
//    CHECK(it == mc.AscendingIterator::end());
//}
//
//TEST_CASE("Test adding and removing elements with PrimeIterator class") {
//    MagicalContainer mc;
//    mc.addElement(3);
//    mc.addElement(1);
//    mc.addElement(2);
//    auto it = mc.PrimeIterator::begin();
//    CHECK(*it == 2);
//    ++it;
//    CHECK(*it == 3);
//    ++it;
//    CHECK(it == mc.PrimeIterator::end());
//    mc.addElement(0);
//    it = mc.PrimeIterator::begin();
//    CHECK(*it == 2);
//    ++it;
//    CHECK(*it == 3);
//    ++it;
//    CHECK(it == mc.PrimeIterator::end());
//    mc.removeElement(3);
//    it = mc.PrIterator::begin();
//    CHECK(*it == 2);
//    ++it;
//    CHECK(it == mc.PrimeIterator::end());
//}
//
//TEST_CASE("Test adding and removing elements with SideCrossIterator class") {
//    MagicalContainer mc;
//    mc.addElement(3);
//    mc.addElement(1);
//    mc.addElement(2);
//    auto it = mc.SideCrossIterator::begin();
//    CHECK(*it == 1);
//    ++it;
//    CHECK(*it == 3);
//    ++it;
//    CHECK(*it == 2);
//    ++it;
//    CHECK(it == mc.SideCrossIterator::end());
//    mc.addElement(0);
//    it = mc.SideCrossIterator::begin();
//    CHECK(*it == 0);
//    ++it;
//    CHECK(*it == 1);
//    ++it;
//    CHECK(*it == 3);
//    ++it;
//    CHECK(*it == 2);
//    ++it;
//    CHECK(it == mc.SideCrossIterator::end());
//    mc.removeElement(1);
//    it = mc.SideCrossIterator::begin();
//    CHECK(*it == 0);
//    ++it;
//    CHECK(*it == 3);
//    ++it;
//    CHECK(*it == 2);
//    ++it;
//    CHECK(it == mc.SideCrossIterator::end());
//}