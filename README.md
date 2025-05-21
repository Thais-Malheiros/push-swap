# Push_swap

The **Push_swap** project challenges you to sort a stack of integers using a limited set of operations. The goal is to find the shortest sequence of operations to sort the stack in ascending order.

---

## 📚 Project Overview

In this project, you will work with two stacks (`a` and `b`) and a set of instructions to manipulate them. Your task is to implement a C program called `push_swap` that calculates and displays the shortest sequence of instructions to sort the integers in stack `a`.

### Key Operations:
- **sa**: Swap the first two elements of stack `a`.
- **sb**: Swap the first two elements of stack `b`.
- **pa**: Push the first element from stack `b` to stack `a`.
- **pb**: Push the first element from stack `a` to stack `b`.
- **ra**: Rotate stack `a`.
- **rb**: Rotate stack `b`.
- **rra**: Reverse rotate stack `a`.
- **rrb**: Reverse rotate stack `b`.
- **ss**: `sa` and `sb` at the same time.
- **rr**: `ra` and `rb` at the same time.
- **rrr**: `rra` and `rrb` at the same time.

The goal is to sort the integers in stack `a` in ascending order with the smallest number of operations.

---

## 🛠️ How to Compile

1. Clone the repository:
   ```bash
   git clone https://github.com/your-username/push_swap.git
   cd push_swap

2. Compile the program:
	make

3. Run with a list of integers:
	./push_swap 2 1 3 6 5 8
	This will output the shortest sequence of instructions to sort the stack.

🔧 Requirements
C programming language

Libft: Custom library used in this project.

Functions: read, write, malloc, free, exit, and ft_printf (or equivalent).

⚠️ Constraints
Global variables are forbidden.

The program must print the shortest sequence to sort the stack.

If incorrect, it will display Error.

📄 License
This project is part of the 42 curriculum.
