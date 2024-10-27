import java.util.ArrayList;

public class OneRow_Observer implements Observer {
    private DoubleArrayListSubject subject;

    public OneRow_Observer(DoubleArrayListSubject subject) {
        this.subject = subject;
        this.subject.registerObserver(this);
    }

    @Override
    public void update(ArrayList<Double> data) {
        System.out.println("Notification to One-Row Observer: Data Changed:");
        display(data);
    }

    public void display(ArrayList<Double> data) {
        for (Double value : data) {
            System.out.print(value + " ");
        }
        System.out.println();
    }
}
