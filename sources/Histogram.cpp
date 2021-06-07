//
// Created by polinka on 07.06.2021.
//
// Copyright 2020 Your Name <your_email>
#include "Histogram.hpp"
int Histogram::GetNumSkip() const {
  return num_skip;
}
Histogram& Histogram::GetInstance() {
  static Histogram instance;
  return instance;
}
void Histogram::SetAvg(const float& avg_) {
  avg = avg_;
}
void Histogram::PlusNumSkip() {
  ++num_skip;
}
void Histogram::NewLap() {
  num_skip = 0;
}
float Histogram::GetAvg() const {
  return avg;
}
