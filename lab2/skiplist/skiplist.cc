#include "skiplist.h"

#include <algorithm>
#include <limits>
#include <random>

// SkipList Constructor. head node, level에 따른 초기 설정 필요
SkipList::SkipList(int max_level, float p)
    : head_(nullptr), max_level_(std::max(1, max_level)), p_(p), next_seq_(1) {
  // code
}

// SkipList Destructor. 생성한 노드에 대해 모두 delete
SkipList::~SkipList() {
  // code
}

// SkipList Put operation시 높이 설정 함수
int SkipList::RandomLevel() {

  // code

  return 0;
}

// SkipList에 새로운 key 및 value를 삽입하는 Put 함수
void SkipList::Put(int key, const std::string& value) {
  // code
}

// SkipList에 서 key에 해당하는 value 찾기. 존재하면 true, 없으면 (tombstone
// 고려) false 반환. value는 out_value에 저장
bool SkipList::Get(int key, std::string* out_value) const {

  // code

  return false;
}

// SkipList Delete operation. Tombstone으로 삭제 진행
bool SkipList::Delete(int key) {

  // code

  return false;
}

// SkipList range scan operation. 해당하는 노드를 vector에 모아 반환
std::vector<std::pair<int, std::string>>
SkipList::RangeScan(int start_key, int end_key) const {
  std::vector<std::pair<int, std::string>> out;

  // code

  return out;
}
