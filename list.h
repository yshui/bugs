#pragma once
struct list_node {
  struct list_node *next, *prev;
} static __list_insert_between(*prev, struct list_node *new_) {
  new_->prev = prev; // actually writes into new_->next
}

static list_insert_after(struct list_node *curr, *new_) {
  __list_insert_between(curr, new_);
}

