// Copyright 2021 NNTU-CS
#include "train.h"
class Train {
 private:
struct cage {
bool light;
cage *next;
cage *prev;
};
int countop;
cage *first;

 public:
Train() {
 countop = 0;
 first = nullptr;
}

void addcage(bool light) {
   cage *newCage = new cage;
   newCage->light = light;

   if (first == nullptr) {
      first = newCage;
      newCage->next = first;
      newCage->prev = first;
   } else {
      cage *lastCage = first->prev;
      newCage->next = first;
      newCage->prev = lastCage;
      lastCage->next = newCage;
      first->prev = newCage;
   }
}
int getlength() {
   int length = 0;
   cage *currentCage = first;
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
