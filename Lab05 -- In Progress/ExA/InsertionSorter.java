import java.util.ArrayList;

public class InsertionSorter<E extends Number & Comparable<E>> implements Sorter<E> {
    @Override
    public void sort(ArrayList<Item<E>> items) {
        int n = items.size();
        for (int i = 1; i < n; i++) {
            E key = items.get(i).getItem();
            int j = i - 1;
            
            while (j >= 0 && items.get(j).getItem().compareTo(key) > 0) {
                items.set(j + 1, items.get(j));
                j--;
            }
            items.set(j + 1, new Item<>(key));
        }
    }
}
