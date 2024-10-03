<?php

class Node {
    public $data;
    public $next;

    public function __construct($data) {
        $this->data = $data;
        $this->next = null; // Initially, the next node is null
    }
}

class LinkedList {
    private $head;

    public function __construct() {
        $this->head = null; // The list starts empty
    }

    // Function to add a node at the end of the list
    public function insert($data) {
        $newNode = new Node($data);

        if ($this->head === null) {
            $this->head = $newNode;
        } else {
            $current = $this->head;
            while ($current->next !== null) {
                $current = $current->next;
            }
            $current->next = $newNode;
        }
    }

    // Function to display the list
    public function display() {
        $current = $this->head;
        while ($current !== null) {
            echo $current->data . " -> ";
            $current = $current->next;
        }
        echo "null\n";
    }
}

// Create a new LinkedList
$list = new LinkedList();

// Insert data into the list
$list->insert(10);
$list->insert(20);
$list->insert(30);
$list->insert(40);


// Display the list
$list->display();
