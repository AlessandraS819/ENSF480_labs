import java.util.ArrayList;

public class FiveRowsTable_Observer implements Observer {
    private DoubleArrayListSubject subject;

    public FiveRowsTable_Observer(DoubleArrayListSubject subject) {
        this.subject = subject;
        this.subject.registerObserver(this);
    }

    @Override
    public void update(ArrayList<Double> data) {
        System.out.println("Notification to Five-Rows Table Observer: Data Changed:");
        display(data);
    }

    public void display(ArrayList<Double> data) {
        int rows = 5;
        int columns = (int) Math.ceil((double) (data.size()) / rows); // Calculate columns needed
        for (int i = 0; i < data.size(); i++) {
            System.out.print(data.get(i) + " ");
            if ((i + 1) % columns == 0 || i == data.size() - 1) {
                System.out.println();
            }
        }
    }
}
