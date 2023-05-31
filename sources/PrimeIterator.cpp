#include "MagicalContainer.hpp"
//Default constructor
MagicalContainer::PrimeIterator::PrimeIterator(MagicalContainer &container)
        :container(container),size(0)
{}
//Default complete constructor
MagicalContainer::PrimeIterator::PrimeIterator(MagicalContainer &container,size_t size)
        :container(container),size(size)
{}
//Copy constructor
MagicalContainer::PrimeIterator::PrimeIterator(const MagicalContainer::PrimeIterator &other)
        :container(other.container), size(other.size)
{}
//----------------------------------------------------------------------------------------------------------------------
//Functions begin and end
MagicalContainer::PrimeIterator MagicalContainer::PrimeIterator::begin() const {
    return MagicalContainer::PrimeIterator(*this);
}
MagicalContainer::PrimeIterator MagicalContainer::PrimeIterator::end() const {
    return MagicalContainer::PrimeIterator(this->container, this->size);
}
//----------------------------------------------------------------------------------------------------------------------


MagicalContainer::PrimeIterator &
MagicalContainer::PrimeIterator::operator=(const MagicalContainer::PrimeIterator &other) {
    return *this;
}

bool MagicalContainer::PrimeIterator::operator==(const MagicalContainer::PrimeIterator &other) const {
    return false;
}

bool MagicalContainer::PrimeIterator::operator!=(const MagicalContainer::PrimeIterator &other) const {
    return false;
}

bool MagicalContainer::PrimeIterator::operator<(const MagicalContainer::PrimeIterator &other) const {
    return false;
}

bool MagicalContainer::PrimeIterator::operator>(const MagicalContainer::PrimeIterator &other) const {
    return false;
}

int MagicalContainer::PrimeIterator::operator*() {
    return 0;
}

MagicalContainer::PrimeIterator &MagicalContainer::PrimeIterator::operator++() {
    return *this;
}
