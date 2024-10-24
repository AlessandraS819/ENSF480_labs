/*  
 * Lab05 ExB
 * Completed by: Alessandra Schiavi and Muhammed Umar Khan
 * Submission Date: Oct 28, 2024
 */


import java.util.ArrayList;

public class SelectionSorter<E extends Number & Comparable<E>> implements Sorter<E> {
    @Override
    public void sort(ArrayList<Item<E>> items) {
        int n = items.size();
        for (int i = 0; i < n-1; i++) {
            int min_idx = i;
            for (int j = i+1; j < n; j++)
                if (items.get(j).getItem().compareTo(items.get(min_idx).getItem()) < 0)
                    min_idx = j;

            // Swap the found minimum element with the first element
            Item<E> temp = items.get(min_idx);
            items.set(min_idx, items.get(i));
            items.set(i, temp);
        }
    }
}
