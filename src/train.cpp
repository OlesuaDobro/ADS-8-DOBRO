// Copyright 2021 NNTU-CS
#include "train.h"
class Train {
 private:
struct Cage {
bool light;
Cage *next;
Cage *prev;
};
int countop;
Cage *first;

Train::Train() {
    first = nullptr;
    countOp = 0;
}

void addCage(bool light) {
  Cage *newCage = new Cage;
  newCage->light = light;

  if (first == nullptr) {
      first = newCage;
      newCage->next = first;
      newCage->prev = first;
  } else {
      Cage *lastCage = first->prev;
      newCage->next = first;
      newCage->prev = lastCage;
      lastCage->next = newCage;
      first->prev = newCage;
  }
}
int getlength() {
  int length = 0;
  Cage *currentCage = first;
  do {
      length++;
      currentCage = currentCage->next;
  } while (currentCage != first);
  return length;
}
int getopcount() {
  return countop;
}
};
