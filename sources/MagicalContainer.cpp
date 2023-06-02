//
// Created by Nisim Atiya on 31/05/2023.
//

#include "MagicalContainer.hpp"

void MagicalContainer::addElement(int _i_) {
    // Add the element to the container
    container.push_back(_i_);

    // Sort the container in ascending order
    std::sort(container.begin(), container.end());

    // Check if the element is prime
    if (is_prime(_i_)) {
        // Add the element to the Prime_container
        Prime_container.push_back(&container.back());

        // Sort the Prime_container in ascending order
        std::sort(Prime_container.begin(), Prime_container.end(),
                  [](const int* a, const int* b) {
                      return *a < *b;
                  });
    }

}

void MagicalContainer::removeElement(int _i_) {
    // Find the position of the member to extract
    auto extractPos = std::lower_bound(container.begin(), container.end(), _i_);

    // Check if the member was found
    if (extractPos != container.end() && *extractPos == _i_) {
        // Extract the member from the vector
        container.erase(extractPos);
    }

}

bool MagicalContainer::is_prime(int num) {
    if(num <=1) return false;
    if(num==2) return true;
    for (int _i_ = 3; _i_*_i_ < num; ++_i_)
    {
        if (num % _i_ == 0)
            return false;
    }

    return true;
}
