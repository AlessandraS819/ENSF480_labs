/*  
 * Lab05 ExC
 * Completed by: Alessandra Schiavi and Muhammed Umar Khan
 * Submission Date: Oct 28, 2024
 */
public interface Subject {
    void registerObserver(Observer o);
    void removeObserver(Observer o);
    void notifyAllObservers();

}
