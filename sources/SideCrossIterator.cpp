#include "MagicalContainer.hpp"
//Default constructor
MagicalContainer::SideCrossIterator::SideCrossIterator(MagicalContainer &container)
        :container(container),size(0)
{}
//Default complete constructor
MagicalContainer::SideCrossIterator::SideCrossIterator(MagicalContainer &container,size_t size)
        :container(container),size(size)
{}
//Copy constructor
MagicalContainer::SideCrossIterator::SideCrossIterator(const MagicalContainer::SideCrossIterator &other)
        :container(other.container), size(other.size)
{}
//----------------------------------------------------------------------------------------------------------------------
//Functions begin and end
MagicalContainer::SideCrossIterator MagicalContainer::SideCrossIterator::begin() const {
    return MagicalContainer::SideCrossIterator(*this);
}
MagicalContainer::SideCrossIterator MagicalContainer::SideCrossIterator::end() const {
    return MagicalContainer::SideCrossIterator(this->container, this->size);
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
