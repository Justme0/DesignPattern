package patterns.adapter.iterenum;

import java.util.Iterator;
import java.util.Enumeration;
import java.util.Vector;

public class Test {
	public static void main(String argv[]) {
		Vector v = new Vector();
		v.addElement(1);
		v.addElement(2);
		v.addElement(3);
		v.addElement(4);
		
		System.out.println("using regular interator.");
		Iterator interator = v.iterator();
		while (interator.hasNext()) {
			System.out.println(interator.next());
		}
		
		System.out.println("using regular enumeration.");
		Enumeration enumeration = v.elements();
		while(enumeration.hasMoreElements()) {
			System.out.println(enumeration.nextElement());
		}
		
		System.out.println("using EnumerationIterator adapter.");
		EnumerationIterator iteratorAdapter = new EnumerationIterator(v.elements());
		while(iteratorAdapter.hasNext()) {
			System.out.println(iteratorAdapter.next());
		}
		
		System.out.println("using IteratorEnumeration adapter.");
		IteratorEnumeration enumerationAdapter = new IteratorEnumeration(v.iterator());
		while(enumerationAdapter.hasMoreElements()) {
			System.out.println(enumerationAdapter.nextElement());
		}
	}
}
