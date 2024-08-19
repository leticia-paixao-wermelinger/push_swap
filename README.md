# 📚 PUSH_SWAP 📚

The push_swap project encompasses a number of operations to organize a given pile composed of a random number of random integer values. It does so by manipulating two linked lists that behave as if they were piles.

The program analises each node in said lists and juggles them out between the two piles by using a number of pre-vetted operations until it sorts out the piles in a specific fashion: from lowest to biggest value.

The main sorting algorithm used was the radix sorting algorithm.

## Here are the pre-vetted operations:

### sa (swap a): Swap the first 2 elements at the top of stack a.
- Do nothing if there is only one or no elements.
### sb (swap b): Swap the first 2 elements at the top of stack b.
- Do nothing if there is only one or no elements.
### ss : sa and sb at the same time.

### pa (push a): Take the first element at the top of b and put it at the top of a.
- Do nothing if b is empty.
### pb (push b): Take the first element at the top of a and put it at the top of b.
- Do nothing if a is empty.

### ra (rotate a): Shift up all elements of stack a by 1.
- The first element becomes the last one.
### rb (rotate b): Shift up all elements of stack b by 1.
- The first element becomes the last one.
### rr : ra and rb at the same time.

### rra (reverse rotate a): Shift down all elements of stack a by 1.
- The last element becomes the first one.
### rrb (reverse rotate b): Shift down all elements of stack b by 1.
- The last element becomes the first one.
### rrr : rra and rrb at the same time.
