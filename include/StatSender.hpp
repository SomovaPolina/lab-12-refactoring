//
// Created by polinka on 07.06.2021.
//
// Copyright 2020 Your Name <your_email>
#ifndef TEMPLATE_STATSENDER_HPP_
#define TEMPLATE_STATSENDER_HPP_
#include "header.hpp"
#include "Log.hpp"
#include <fstream>
#include <string_view>

class StatSender {
 public:
  void OnLoaded(const std::vector<Item>& new_items);

  void Skip(const Item& item);

  virtual ~StatSender() = default;

 private:
  virtual void AsyncSend(const std::vector<Item>& items, std::string_view path);

  std::ofstream fstr{"network", std::ios::binary};
};
#endif  // TEMPLATE_STATSENDER_HPP_
