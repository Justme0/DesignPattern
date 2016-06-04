package patterns.singleton;

public class SingletonMain {
	public static void main(String []args) {
        Singleton singleton = Singleton.getInstance();
        Singleton singleton2 = Singleton.getInstance();
        if(singleton == singleton2) {
            System.out.println("They are the same instance;");
        }
        // Invalid to use private function
        // Singleton singleton3 = new Singleton();
    }
}
