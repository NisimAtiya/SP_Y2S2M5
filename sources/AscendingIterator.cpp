#include "MagicalContainer.hpp"
//Default constructor
MagicalContainer::AscendingIterator::AscendingIterator(MagicalContainer &container)
:Mcontainer(container),index(0)
{}
//Default complete constructor
MagicalContainer::AscendingIterator::AscendingIterator(MagicalContainer &container,size_t index)
:Mcontainer(container),index(index)
{}
//Copy constructor
MagicalContainer::AscendingIterator::AscendingIterator(const MagicalContainer::AscendingIterator &other)
:Mcontainer(other.Mcontainer), index(other.index)
{}
//----------------------------------------------------------------------------------------------------------------------
//Functions begin and end
MagicalContainer::AscendingIterator MagicalContainer::AscendingIterator::begin() const {
    return MagicalContainer::AscendingIterator(this->Mcontainer,0);
}
MagicalContainer::AscendingIterator MagicalContainer::AscendingIterator::end() const {
    return MagicalContainer::AscendingIterator(this->Mcontainer, this->Mcontainer.size()-1);
}
//----------------------------------------------------------------------------------------------------------------------


MagicalContainer::AscendingIterator &MagicalContainer::AscendingIterator::operator=(const MagicalContainer::AscendingIterator &other) {
    return *this;

}

bool MagicalContainer::AscendingIterator::operator==(const MagicalContainer::AscendingIterator &other) const {
    return other.index == this->index;
}

bool MagicalContainer::AscendingIterator::operator!=(const MagicalContainer::AscendingIterator &other) const {
    return other.index != this->index;
}

bool MagicalContainer::AscendingIterator::operator<(const MagicalContainer::AscendingIterator &other) const {
    return other.index < this->index;
}

bool MagicalContainer::AscendingIterator::operator>(const MagicalContainer::AscendingIterator &other) const {
    return other.index > this->index;
}

int MagicalContainer::AscendingIterator::operator*() {
    return this->Mcontainer.container.at(this->index);
}

MagicalContainer::AscendingIterator MagicalContainer::AscendingIterator::operator++() {
    return AscendingIterator(this->Mcontainer, this->index+1);
}

MagicalContainer::AscendingIterator &MagicalContainer::AscendingIterator::operator=(MagicalContainer::AscendingIterator &&other) noexcept{
    return *this;
}
