/*  
 * Lab05 ExA
 * Completed by: Alessandra Schiavi and Muhammed Umar Khan
 * Submission Date: Oct 28, 2024
 */

import java.util.ArrayList;

public interface Sorter<E extends Number & Comparable<E>> {
    void sort(ArrayList<Item<E>> items);
}
