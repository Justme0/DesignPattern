package patterns.iterator;

import java.util.Iterator;

public class DinerMenuIterator implements Iterator<MenuItem> {
	private MenuItem[] list;
	private int position = 0;
	
	public DinerMenuIterator(MenuItem[] list) {
		this.list = list;
	}
	
	@Override
	public boolean hasNext() {
		System.out.println(list.length + " " + position);
		if(position >= list.length || list[position] == null) {
			return false;
		}
		else {
			return true;
		}
	}

	@Override
	public MenuItem next() {
		return list[position ++];
	}
}
