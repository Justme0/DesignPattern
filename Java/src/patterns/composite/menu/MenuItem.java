package patterns.composite.menu;

public class MenuItem extends MenuComponent {
	private String name;
	private String description;
	double price;
	
	public MenuItem(String name, String description , double price) {
		this.name = name;
		this.description = description;
		this.price = price;
	}
	
	public String getName() {
		return name;
	}
	
	public String getDescription() {
		return description;
	}
	
	public double getPrice() {
		return price;
	}
	
	public void print() {
		System.out.println("MenuItem: " + getName() + ", " + getDescription() + ", " + getPrice());
	}
}
