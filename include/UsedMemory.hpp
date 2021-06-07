//
// Created by polinka on 07.06.2021.
//
// Copyright 2020 Your Name <your_email>
#ifndef TEMPLATE_USEDMEMORY_HPP_
#define TEMPLATE_USEDMEMORY_HPP_
#include "header.hpp"
#include "Log.hpp"

class UsedMemory {
 public:
  void OnDataLoad(const std::vector<Item>& old_items,
                  const std::vector<Item>& new_items);

  void OnRawDataLoad(const std::vector<std::string>& old_items,
                     const std::vector<std::string>& new_items);

  [[nodiscard]] size_t Used() const;

 private:
  size_t used_ = 0;
};
#endif  // TEMPLATE_USEDMEMORY_HPP_
