#include "stack.hpp"

void Stack::Push(int value) { 
  data_.push_back(value); 
}

int Stack::Pop() {
  auto result = data_.back();
  data_.pop_back();
  return result;
}

void MinStack::Push(int value) {
  data_.push_back(value);
  
  if (min_data_.empty() || value <= min_data_.back()) {
    min_data_.push_back(value);
  }
}

int MinStack::Pop() {
  auto result = data_.back();
  data_.pop_back();
  
  if (result == min_data_.back()) {
    min_data_.pop_back();
  }
  
  return result;
}

int MinStack::GetMin() { 
  return min_data_.back(); 
} 