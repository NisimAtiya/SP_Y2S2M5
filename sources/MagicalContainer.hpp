//
// Created by Nisim Atiya on 31/05/2023.
//

#ifndef SP_Y2S2M5_MAGICALCONTAINER_HPP
#define SP_Y2S2M5_MAGICALCONTAINER_HPP
#include <vector>
#include <algorithm>
#include <iostream>
#include <set>
namespace ariel{}

// Declare the MagicalContainer class
class MagicalContainer {
    std::set<int> elements;
    std::vector<const int*> Order_container;
    std::vector<const int*> Prime_container;
    std::vector<const int*> Sidecross_container;




public:
    static bool is_prime(int num);
    MagicalContainer()= default;    // Declare a default constructor
    // Declare three public member functions: addElement, size, and removeElement
    void addElement(int _i_);
    size_t size(){return elements.size();}
    void removeElement(int _i_);

//----------------------------------------------------------------------------------------------------------------------
    // Declare the AscendingIterator nested class
    class AscendingIterator{
        //reference to the MagicalContainer object that the iterator belongs to
        MagicalContainer &Mcontainer;
        //size of the container vector
        size_t index;


    public:
        // Declare constructors and destructor for the AscendingIterator class
        AscendingIterator(MagicalContainer& container);
        AscendingIterator(MagicalContainer& container, size_t index);
        AscendingIterator(const AscendingIterator& other);
        ~AscendingIterator()= default;
        AscendingIterator(AscendingIterator&& other) = delete;   // Added move constructor deletion
        AscendingIterator& operator=(AscendingIterator&& other)noexcept;

        AscendingIterator begin() const;
        AscendingIterator end() const;


        AscendingIterator& operator=(const AscendingIterator& other);
        bool operator==(const AscendingIterator& other) const;
        bool operator!=(const AscendingIterator& other) const;
        bool operator<(const AscendingIterator& other) const;
        bool operator>(const AscendingIterator& other) const;
        int operator*();
        AscendingIterator operator++();
    };


//----------------------------------------------------------------------------------------------------------------------
    // Declare the PrimeIterator nested class
    class PrimeIterator{
        //reference to the MagicalContainer object that the iterator belongs to
        MagicalContainer &Mcontainer;
        //size of the container vector
        size_t index;



    public:
        // Declare constructors and destructor for the AscendingIterator class
        PrimeIterator(MagicalContainer& container);
        PrimeIterator(MagicalContainer& container, size_t index);
        PrimeIterator(const PrimeIterator& other);
        ~PrimeIterator()= default;
        PrimeIterator(PrimeIterator&& other) = delete;   // Added move constructor deletion
        PrimeIterator& operator=(PrimeIterator&& other)noexcept;

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


//----------------------------------------------------------------------------------------------------------------------
    // Declare the PrimeIterator nested class
    class SideCrossIterator{
        //reference to the MagicalContainer object that the iterator belongs to
        MagicalContainer &container;
        //size of the container vector
        size_t index;


    public:
        // Declare constructors and destructor for the AscendingIterator class
        SideCrossIterator(MagicalContainer& container);
        SideCrossIterator(MagicalContainer& container, size_t index);
        SideCrossIterator(const SideCrossIterator& other);
        ~SideCrossIterator()= default;
        SideCrossIterator(SideCrossIterator&& other) = delete;   // Added move constructor deletion
        SideCrossIterator& operator=(SideCrossIterator&& other) noexcept ;


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