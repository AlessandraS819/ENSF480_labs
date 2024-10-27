import java.util.ArrayList;

public class DoubleArrayListSubject implements Subject{
    private ArrayList<Double> data;
    private ArrayList<Observer> observers;

    public DoubleArrayListSubject(){
        this.data = new ArrayList<>();
        this.observers= new ArrayList<>();
    }
    public void remove(Observer o) {
        observers.remove(o);
    }
    @Override
    public void registerObserver(Observer o) {
        observers.add(o);
    }

    @Override
    public void removeObserver(Observer o) {
        observers.remove(o);
    }

    @Override
    public void notifyAllObservers() {
        for (Observer observer : observers) {
            observer.update(new ArrayList<>(data));
        }
    }
    public void addData(double value) {
        data.add(value);
        notifyAllObservers();
    }

    public void setData(double value, int index) {
        if (index >= 0 && index < data.size()) {
            data.set(index, value);
            notifyAllObservers();
        }
    }

    public void populate(double[] values) {
        for (double value : values) {
            data.add(value);
        }
        notifyAllObservers();
    }

    public void display() {
        if (data.isEmpty()) {
            System.out.println("Empty List ...");
        } else {
            System.out.println(data);
        }
    }
}
