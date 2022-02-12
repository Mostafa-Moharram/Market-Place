#include "ListNode.h"

void ListNode::remove() {
    if (previous) {
        previous->next = next;
    }
    if (next) {
        next->previous = previous;
    }
	delete this;
}
