// Copyright 2020 Your Name <your_email>
#ifndef INCLUDE_HISTOGRAM_HPP_
#define INCLUDE_HISTOGRAM_HPP_
class Histogram{
 public:
  static Histogram& GetInstance();

  [[nodiscard]] int GetNumSkip() const;

  [[nodiscard]] float GetAvg() const;

  void SetAvg(const float& avg_);

  void PlusNumSkip();

  void NewLap();
 private:
  Histogram() = default;
  Histogram( const Histogram&) = delete;
  Histogram& operator=( Histogram& ) = delete;

  int num_skip = 0;
  float avg = 0;
};
#endif  // INCLUDE_HISTOGRAM_HPP_
