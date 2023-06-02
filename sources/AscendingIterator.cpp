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
    return MagicalContainer::AscendingIterator(this->Mcontainer, this->Mcontainer.size());
}
//----------------------------------------------------------------------------------------------------------------------


MagicalContainer::AscendingIterator &MagicalContainer::AscendingIterator::operator=(const MagicalContainer::AscendingIterator &other) {
    if (this != &other)
    {
        if (&Mcontainer != &other.Mcontainer)
        {
            throw std::runtime_error("Cannot assign iterators from different containers");
        }

        index = other.index;
    }

    return *this;
}

bool MagicalContainer::AscendingIterator::operator==(const MagicalContainer::AscendingIterator &other) const {
    if (&Mcontainer != &other.Mcontainer)
    {
        throw std::runtime_error("Cannot compare iterators from different containers");
    }

    return index == other.index;
}

bool MagicalContainer::AscendingIterator::operator!=(const MagicalContainer::AscendingIterator &other) const {
    if (&Mcontainer != &other.Mcontainer)
    {
        throw std::runtime_error("Cannot compare iterators from different containers");
    }

    return index != other.index;
}

bool MagicalContainer::AscendingIterator::operator<(const MagicalContainer::AscendingIterator &other) const {
    if (&Mcontainer != &other.Mcontainer)
    {
        throw std::runtime_error("Cannot compare iterators from different containers");
    }

    return index < other.index;
}

bool MagicalContainer::AscendingIterator::operator>(const MagicalContainer::AscendingIterator &other) const {
    if (&Mcontainer != &other.Mcontainer)
    {
        throw std::runtime_error("Cannot compare iterators from different containers");
    }

    return index > other.index;
}

int MagicalContainer::AscendingIterator::operator*() {
    if (index > Mcontainer.Order_container.size())
    {
        throw std::out_of_range("Iterator out of range");
    }
    return *(Mcontainer.Order_container.at(index));
}

MagicalContainer::AscendingIterator MagicalContainer::AscendingIterator::operator++() {
    if (index>= Mcontainer.Order_container.size())
    {
        throw std::runtime_error("Iterator out of range");
    }
    index++;
    return *this;
}

MagicalContainer::AscendingIterator& MagicalContainer::AscendingIterator::operator=(MagicalContainer::AscendingIterator &&other) noexcept {
    if (this != &other) {
        Mcontainer = other.Mcontainer;
        index = other.index;
    }
    return *this;
}


