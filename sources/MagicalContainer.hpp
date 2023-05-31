//
// Created by Nisim Atiya on 31/05/2023.
//

#ifndef SP_Y2S2M5_MAGICALCONTAINER_HPP
#define SP_Y2S2M5_MAGICALCONTAINER_HPP
#include <vector>
#include <algorithm>
#include <iostream>
namespace ariel{}


class MagicalContainer {
    std::vector<int> container;
    std::vector<int> ordered;

    public:
    MagicalContainer()= default;
    void addElement(int i);
    size_t size();
    void removeElement(int i);

    class AscendingIterator{
        MagicalContainer &container;
        size_t size;


        public:
            AscendingIterator(MagicalContainer& container);
            AscendingIterator(MagicalContainer& container, size_t index);
            AscendingIterator(const AscendingIterator& other);
            ~AscendingIterator()= default;

            AscendingIterator begin() const;
            AscendingIterator end() const;


            AscendingIterator& operator=(const AscendingIterator& other);
            bool operator==(const AscendingIterator& other) const;
            bool operator!=(const AscendingIterator& other) const;
            bool operator<(const AscendingIterator& other) const;
            bool operator>(const AscendingIterator& other) const;
            int operator*();
            AscendingIterator& operator++();
    };
    class PrimeIterator{
        MagicalContainer &container;
        size_t size;


    public:
        PrimeIterator(MagicalContainer& container);
        PrimeIterator(MagicalContainer& container, size_t index);
        PrimeIterator(const PrimeIterator& other);
        ~PrimeIterator()= default;

        PrimeIterator begin() const;
        PrimeIterator end() const;


        PrimeIterator& operator=(const PrimeIterator& other);
        bool operator==(const PrimeIterator& other) const;
        bool operator!=(const PrimeIterator& other) const;
        bool operator<(const PrimeIterator& other) const;
        bool operator>(const PrimeIterator& other) const;
        int operator*();
        PrimeIterator& operator++();
    };


    class SideCrossIterator{
        MagicalContainer &container;
        size_t size;


    public:
        SideCrossIterator(MagicalContainer& container);
        SideCrossIterator(MagicalContainer& container, size_t index);
        SideCrossIterator(const SideCrossIterator& other);
        ~SideCrossIterator()= default;

        SideCrossIterator begin() const;
        SideCrossIterator end() const;


        SideCrossIterator& operator=(const SideCrossIterator& other);
        bool operator==(const SideCrossIterator& other) const;
        bool operator!=(const SideCrossIterator& other) const;
        bool operator<(const SideCrossIterator& other) const;
        bool operator>(const SideCrossIterator& other) const;
        int operator*();
        SideCrossIterator& operator++();
    };
};


#endif //SP_Y2S2M5_MAGICALCONTAINER_HPP
