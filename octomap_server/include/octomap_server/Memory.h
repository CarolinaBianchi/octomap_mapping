#include <octomap_server/OctomapServer.h>
#include <array>
#include <iostream>
#include <queue>
#include <pcl/point_types.h>
namespace octomap_server{

template <class T, size_t N = 2 >
class Memory {
 public:


  void push_back(T & v) {
    if(size_ == N){
      //delete data_[front_];
    }else{
      size_ = size_+1;
    }
    data_[front_] = v;
    front_ = (front_+1) %N;
  }
  std::array<T,N>& getData(){
    return data_;
  }

  size_t size() const {
    return size_;
  }

 private:
  size_t front_ = 0;
  size_t size_ = 0; // Current size, can reach N at max
  std::array<T,N> data_;
};


}
