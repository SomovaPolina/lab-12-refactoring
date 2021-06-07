//
// Created by polinka on 07.06.2021.
//
// Copyright 2020 Your Name <your_email>
#ifndef INCLUDE_LOG_HPP_
#define INCLUDE_LOG_HPP_
#include "header.hpp"

class Log {
 public:
  static Log& GetInstance();

  void Setting(bool level);

  void Write(const std::string_view& message) const;

  void WriteDebug(const std::string_view& message) const;

 private:
  Log(): level_(false), out_(&std::cout){}

  Log( const Log&) = delete;
  Log& operator=( Log& ) = delete;

  bool level_ = false;
  mutable std::ostream* out_;
};

struct Item {
  std::string id;
  std::string name;
  float score = 0;
};
#endif  // INCLUDE_LOG_HPP_
