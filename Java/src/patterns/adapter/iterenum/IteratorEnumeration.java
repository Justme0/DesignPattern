package patterns.adapter.iterenum;

import java.util.Iterator;
import java.util.Enumeration;

public class IteratorEnumeration implements Enumeration {
	private Iterator iterator;
	
	public IteratorEnumeration(Iterator iterator) {
		this.iterator = iterator;
	}
	
	@Override
	public boolean hasMoreElements() {
		return iterator.hasNext();
	}

	@Override
	public Object nextElement() {
		return iterator.next();
	}
}
