package patterns.composite.iterator;

import java.util.Iterator;
import java.util.Stack;

public class MenuComponentIterator implements Iterator<MenuComponent> {
	private Stack<Iterator<MenuComponent> > stack = new Stack<Iterator<MenuComponent> >();
	
	public MenuComponentIterator(Iterator<MenuComponent> iterator) {
		stack.push(iterator);
	}
	
	@Override
	public boolean hasNext() {
		if(stack.empty()) return false;
		Iterator<MenuComponent> iterator = stack.peek();
		if(iterator.hasNext()) {
			return true;
		}
		else {
			stack.pop();
			return hasNext();
		}
	}

	@Override
	public MenuComponent next() {
		Iterator<MenuComponent> iterator = stack.peek();
		MenuComponent component = iterator.next();
		if(component instanceof Menu) {
			stack.push(component.createIterator());
		}
		return component;
	}

}
