import java.awt.Graphics;

public abstract class Decorator implements Component{
    private Component cmp;
    private int x;
    private int y;
    private int width;
    private int height;

    public Decorator (Component cmp, int x, int y, int width, int height){
        this.cmp = cmp;
        this.x = x;
        this.y = y;
        this.width = width;
        this.height = height;

    }
    protected int getX() {
        return x;
    }

    protected int getY() {
        return y;
    }

    protected int getWidth() {
        return width;
    }

    protected int getHeight() {
        return height;
    }

    @Override
    public void draw(Graphics g) {
        cmp.draw(g);  // Delegate the drawing to the wrapped component
    }

}
