package patterns.singleton;

public class Singleton {
    private volatile static Singleton uniqueInstance;
    private Singleton() {
        System.out.println("This is a new Singleton().");
    }
    public static Singleton getInstance() {
        if(uniqueInstance == null) {
            synchronized(Singleton.class) {
                if(uniqueInstance == null) {
                    uniqueInstance = new Singleton();
                }
            }
        }
        return uniqueInstance;
    }
}
