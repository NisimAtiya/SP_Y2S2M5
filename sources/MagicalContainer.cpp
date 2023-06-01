//
// Created by Nisim Atiya on 31/05/2023.
//

#include "MagicalContainer.hpp"

void MagicalContainer::addElement(int _i_) {
    // Find the position where the new element should be inserted
    auto insertPos = std::lower_bound(container.begin(), container.end(), _i_);
    // Insert the new element at the found position
    container.insert(insertPos, _i_);
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
