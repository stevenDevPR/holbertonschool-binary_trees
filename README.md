# Binary Tree Functions

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)

## Description
This project provides a set of functions for working with binary trees in C. It includes functions for creating nodes, inserting nodes as children, deleting nodes, traversing the tree using pre-order traversal, ...

## Features
- Creates a binary tree node with the specified parent and value. Allows the construction of binary trees by creating individual nodes.
- Inserts a node as the left child of another node. Supports building the tree structure by adding left child nodes.
- Inserts a node as the right child of another node. Supports building the tree structure by adding right child nodes.
- Deletes an entire binary tree, freeing memory allocated for all nodes. Ensures proper memory management and cleanup when the binary tree is no longer needed.
- Checks if a node is a leaf in a binary tree. Helps identify nodes that do not have any children.
- Checks if a node is a root in a binary tree. Identifies nodes that are at the top level of the tree hierarchy.
- Traverses a binary tree using pre-order traversal. Allows users to perform operations on each node in the tree in a specific order.

## Getting Started

To use this custom printf function in your C project, follow these steps:

1. Clone this repository to your local machine:

    ```bash
    git clone https://github.com/your-username/custom-printf-c.git
    ```

2. Include the `binary_trees.h` header file in your C source files:

    ```c
    #include "binary_trees.h"
    ```

3. Compile your project along with the provided source files:

    ```bash
    gcc your_source_file.c main.c -o your_executable
    ```

## Usage

Here are some examples of how to use any of the binary trees functions.

### 'binary_tree_node'
Create a binary tree node with the specified parent and value.

```c
#include "binary_tree.h"
#include <stdio.h>

int main() {
    binary_tree_t *node = binary_tree_node(NULL, 10);
    if (node != NULL) {
        printf("Created node with value: %d\n", node->n);
    }
    return 0;
}
```

### 'binary_tree_insert_left'
Insert a node as the left child of another node.
```c
#include "binary_tree.h"
#include <stdio.h>

int main() {
    binary_tree_t *parent = binary_tree_node(NULL, 10);
    if (parent != NULL) {
        binary_tree_t *left_child = binary_tree_insert_left(parent, 5);
        if (left_child != NULL) {
            printf("Inserted left child with value: %d\n", left_child->n);
        }
    }
    return 0;
}
```

### 'binary_tree_insert_right'
Insert a node as the right child of another node.
```c
#include "binary_tree.h"
#include <stdio.h>

int main() {
    binary_tree_t *parent = binary_tree_node(NULL, 10);
    if (parent != NULL) {
        binary_tree_t *right_child = binary_tree_insert_right(parent, 15);
        if (right_child != NULL) {
            printf("Inserted right child with value: %d\n", right_child->n);
        }
    }
    return 0;
}
```

### 'binary_tree_delete'
Delete an entire binary tree.
```c
#include "binary_tree.h"
#include <stdio.h>

int main() {
    binary_tree_t *root = binary_tree_node(NULL, 10);
    if (root != NULL) {
        binary_tree_t *left_child = binary_tree_insert_left(root, 5);
        binary_tree_t *right_child = binary_tree_insert_right(root, 15);

        printf("Deleting binary tree...\n");
        binary_tree_delete(root);
        printf("Binary tree deleted\n");
    }
    return 0;
}
```

### 'binary_tree_is_leaf'
Check if a given node is a leaf.
```c
#include "binary_tree.h"
#include <stdio.h>

int main() {
    binary_tree_t *leaf = binary_tree_node(NULL, 10);
    if (leaf != NULL) {
        if (binary_tree_is_leaf(leaf)) {
            printf("Node is a leaf\n");
        } else {
            printf("Node is not a leaf\n");
        }
    }
    return 0;
}
```

### 'binary_tree_is_root'
Check if a given node is a root
```c
#include "binary_tree.h"
#include <stdio.h>

int main() {
    binary_tree_t *root = binary_tree_node(NULL, 10);
    if (root != NULL) {
        if (binary_tree_is_root(root)) {
            printf("Node is a root\n");
        } else {
            printf("Node is not a root\n");
        }
    }
    return 0;
}
```

### 'binary_tree_preorder
Traverse a binary tree using pre-order traversal.
```c
#include "binary_tree.h"
#include <stdio.h>

void print_node_value(int value) {
    printf("%d ", value);
}

int main() {
    binary_tree_t *root = binary_tree_node(NULL, 10);
    if (root != NULL) {
        binary_tree_t *left_child = binary_tree_insert_left(root, 5);
        binary_tree_t *right_child = binary_tree_insert_right(root, 15);

        printf("Pre-order traversal: ");
        binary_tree_preorder(root, print_node_value);
        printf("\n");
    }
    return 0;
}
```

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

© 2024 Holberton Coding School by Steven Bonilla, Luis Soto, and Abimael Vega.
