/*  
 * Lab06 ExB
 * BorderDecorator.java
 * Completed by: Alessandra Schiavi and Muhammed Umar Khan
 * Submission Date: Nov 04, 2024
 */
import java.awt.BasicStroke;
import java.awt.Color;
import java.awt.Graphics;
import java.awt.Graphics2D;

public class BorderDecorator extends Decorator {
    // Ensure the constructor matches the signature required
    public BorderDecorator(Component cmp, int x, int y, int width, int height) {
        super(cmp, x, y, width, height);
    }
    @Override
    public void draw(Graphics g){
        super.draw(g);
        Graphics2D g2d = (Graphics2D) g;
        g2d.setColor(Color.BLACK);
        /*
         * new BasicStroke(1, ...: Sets the stroke width to 1, which is the thickness of the line.
         * BasicStroke.CAP_BUTT: Specifies the end-cap style for the stroke to be flat (no rounded or extended ends).
         * BasicStroke.JOIN_BEVEL: Defines the join style for corners to be beveled.
         * new float[]{5}: Defines the dash pattern. This array specifies alternating lengths of dashes and gaps. 5 means a dash followed by a gap, both of length 5.
         * Last 0: Sets the phase (starting point) of the dash pattern to 0, so it starts with a dash.
         */
        g2d.setStroke(new BasicStroke(3.0f, BasicStroke.CAP_BUTT, BasicStroke.CAP_ROUND, 1, new float[]{10, 5}, 0)); // makes a dashed border
        g2d.drawRect(getX(),getY(), getWidth(), getHeight());

    }
}
