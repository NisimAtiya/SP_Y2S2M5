#include "MagicalContainer.hpp"
//Default constructor
MagicalContainer::SideCrossIterator::SideCrossIterator(MagicalContainer &container)
        :container(container),index(0)
{}
//Default complete constructor
MagicalContainer::SideCrossIterator::SideCrossIterator(MagicalContainer &container,size_t index)
        :container(container),index(index)
{}
//Copy constructor
MagicalContainer::SideCrossIterator::SideCrossIterator(const MagicalContainer::SideCrossIterator &other)
        :container(other.container), index(other.index)
{}
//----------------------------------------------------------------------------------------------------------------------
//Functions begin and end
MagicalContainer::SideCrossIterator MagicalContainer::SideCrossIterator::begin() const {
    return MagicalContainer::SideCrossIterator(*this);
}
MagicalContainer::SideCrossIterator MagicalContainer::SideCrossIterator::end() const {
    return MagicalContainer::SideCrossIterator(this->container, this->container.size());
}
//----------------------------------------------------------------------------------------------------------------------


MagicalContainer::SideCrossIterator &
MagicalContainer::SideCrossIterator::operator=(const MagicalContainer::SideCrossIterator &other) {
    return *this;
}

bool MagicalContainer::SideCrossIterator::operator==(const MagicalContainer::SideCrossIterator &other) const {
    return false;
}

bool MagicalContainer::SideCrossIterator::operator!=(const MagicalContainer::SideCrossIterator &other) const {
    return false;
}

bool MagicalContainer::SideCrossIterator::operator<(const MagicalContainer::SideCrossIterator &other) const {
    return false;
}

bool MagicalContainer::SideCrossIterator::operator>(const MagicalContainer::SideCrossIterator &other) const {
    return false;
}

int MagicalContainer::SideCrossIterator::operator*() {
    return 0;
}

MagicalContainer::SideCrossIterator &MagicalContainer::SideCrossIterator::operator++() {
    return *this;
}

MagicalContainer::SideCrossIterator &MagicalContainer::SideCrossIterator::operator=(MagicalContainer::SideCrossIterator &&other) {
    return *this;
}
