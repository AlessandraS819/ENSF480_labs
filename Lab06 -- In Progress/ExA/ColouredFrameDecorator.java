/*  
 * Lab06 ExA
 * ColouredFrameDecorator.java
 * Completed by: Alessandra Schiavi and Muhammed Umar Khan
 * Submission Date: Nov 04, 2024
 */
import java.awt.BasicStroke;
import java.awt.Color;
import java.awt.Graphics;
import java.awt.Graphics2D;

public class ColouredFrameDecorator extends Decorator {
    private final int thickness;

    // Ensure the constructor matches the signature required
    public ColouredFrameDecorator(Component cmp, int x, int y, int width, int height, int thickness) {
        super(cmp, x, y, width, height);
        this.thickness = thickness;
    }

   
    @Override
    public void draw(Graphics g){
        super.draw(g);
        Graphics2D g2d = (Graphics2D) g;
        g2d.setColor(Color.RED); // red frame
        g2d.setStroke(new BasicStroke(thickness)); // set the thickness of the border
        g2d.drawRect(getX(), getY(), getWidth(), getHeight());
    }
}
