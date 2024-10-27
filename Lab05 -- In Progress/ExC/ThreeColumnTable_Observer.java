import java.util.ArrayList;

public class ThreeColumnTable_Observer implements Observer {
    private DoubleArrayListSubject subject;

    public ThreeColumnTable_Observer(DoubleArrayListSubject subject) {
        this.subject = subject;
        this.subject.registerObserver(this);
    }

    @Override
    public void update(ArrayList<Double> data) {
        System.out.println("Notification to Three-Column Table Observer: Data Changed:");
        display(data);
    }

    public void display(ArrayList<Double> data) {
        int columns = 3;
        for (int i = 0; i < data.size(); i++) {
            System.out.print(data.get(i) + " ");
            if ((i + 1) % columns == 0 || i == data.size() - 1) {
                System.out.println();
            }
        }
    }
}
