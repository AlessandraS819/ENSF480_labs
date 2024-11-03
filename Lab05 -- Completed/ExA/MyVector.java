/*  
 * Lab05 ExA
 * Completed by: Alessandra Schiavi and Muhammed Umar Khan
 * Submission Date: Oct 28, 2024
 */

import java.util.ArrayList;

public class MyVector<E extends Number & Comparable<E>> {
    private ArrayList<Item<E>> storageM;
    private Sorter<E> sorter;

    // Constructor to initialize with capacity
    public MyVector(int n) {
        storageM = new ArrayList<>(n);
    }

    // Constructor to initialize with an ArrayList
    public MyVector(ArrayList<Item<E>> arr) {
        storageM = new ArrayList<>(arr);
    }

    // Add method to add an Item to storageM
    public void add(Item<E> value) {
        storageM.add(value);
    }

    // Set the sorting strategy
    public void setSortStrategy(Sorter<E> s) {
        this.sorter = s;
    }

    // Perform sorting using the assigned strategy
    public void performSort() {
        if (sorter != null) {
            sorter.sort(storageM);
        } else {
            System.out.println("No sorting strategy assigned.");
        }
    }

    // Display method to show contents of storageM
    public void display() {
        for (Item<E> item : storageM) {
            System.out.print(item.getItem() + " ");
        }
        System.out.println();
    }
}
