import java.awt.Color;
import java.awt.Graphics;
import java.awt.Graphics2D;
import java.awt.AlphaComposite;

public class ColouredGlassDecorator extends Decorator {
    public ColouredGlassDecorator(Component cmp, int x, int y, int width, int height) {
        super(cmp, x, y, width, height);
    }

    @Override
    public void draw(Graphics g) {
        // Draw the wrapped component
        super.draw(g);

        // Draw the transparent green overlay
        Graphics2D g2d = (Graphics2D) g;
        Color oldColor = g2d.getColor(); // Save the current color
        g2d.setColor(new Color(0, 255, 0, 128)); // Set color to semi-transparent green (RGBA)

        // Set transparency level
        g2d.setComposite(AlphaComposite.getInstance(AlphaComposite.SRC_OVER, 0.5f)); // 50% transparency

        // Draw the rectangle
        g2d.fillRect(getX(), getY(), getWidth(), getHeight());

        // Restore the original color and composite
        g2d.setColor(oldColor);
        g2d.setComposite(AlphaComposite.getInstance(AlphaComposite.SRC_OVER, 1.0f)); // Reset to full opacity
    }
}
