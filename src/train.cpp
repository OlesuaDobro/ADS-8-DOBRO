// Copyright 2021 NNTU-CS
#include "train.h"
Train::Train() {
    first = nullptr;
    countOp = 0;
Cage {false, nullptr, nullptr};

void Train::addCage(bool light2) {
  Cage *newCage = new Cage;
  newCage->light = light2;

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
