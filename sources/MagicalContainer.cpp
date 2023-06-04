//
// Created by Nisim Atiya on 31/05/2023.
//

#include "MagicalContainer.hpp"


void MagicalContainer::addElement(int _i_) {
    auto in = elements.insert(_i_);

    if (in.second) {
        const int* address = &(*in.first);

        Order_container.push_back(address);

        if (is_prime(_i_)) {
            Prime_container.push_back(address);
            sort(Prime_container.begin(), Prime_container.end(), [](const int* a, const int* b) { return *a < *b; });
        }

        sort(Order_container.begin(), Order_container.end(), [](const int* a, const int* b) { return *a < *b; });

        Sidecross_container.clear();
        Sidecross_container.reserve(Order_container.size());

        size_t start = 0, end = Order_container.size() - 1;

        if (!Order_container.empty()) {
            if (Order_container.size() == 1)
                Sidecross_container.push_back(Order_container.at(0));
            else {
                while (start <= end && end != 0) {
                    Sidecross_container.push_back(Order_container.at(start));

                    if (start != end)
                        Sidecross_container.push_back(Order_container.at(end));

                    start++;
                    end--;
                }
            }
        }
    }
}


void MagicalContainer::removeElement(int _i_) {
    auto it = elements.find(_i_);

    if (it == elements.end()) {
        throw std::runtime_error("Element not found");
    }
    elements.erase(_i_);

    if (is_prime(_i_)){
        auto it_prime = find(Prime_container.begin(), Prime_container.end(), &(*it));
        Prime_container.erase(it_prime);
    }

    auto it_ascending = find(Order_container.begin(), Order_container.end(), &(*it));
    Order_container.erase(it_ascending);

    Sidecross_container.clear();
    Sidecross_container.reserve(elements.size());

    size_t start = 0, end = size() - 1;

    if (size() == 1) {
        Sidecross_container.push_back(Order_container.at(0));
    }
    else{
        while (start <= end && end != 0){
            Sidecross_container.push_back(Order_container.at(start));

            if (start != end) {
                Sidecross_container.push_back(Order_container.at(end));
            }
            start++;
            end--;
        }
    }

}

bool MagicalContainer::is_prime(int num) {
    if (num <=1)return false;
    if (num == 2)return true;
    for (int _j_ = 2; _j_ * _j_ <= num; _j_++)
    {
        if ((num % _j_) == 0)
        {

            return false;
        }
    }

    return true;
}
