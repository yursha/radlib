#include <chrono>
#include <cstdint>
#include <iostream>

uint64_t get_ns() {
  using std::chrono::duration_cast;
  using std::chrono::microseconds;
  using std::chrono::system_clock;

  return duration_cast<microseconds>(system_clock::now().time_since_epoch()).count();
}

int main() {
  std::cout << "Microseconds since Epoch: " << get_ns() << std::endl;
}
