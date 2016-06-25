#include "Menu.h"
#include "MenuItem.h"
#include "Waitress.h"

int main () {
    MenuComponent *pancake_menu = new Menu("PANCAKE HOUSE MENU",
            "Breakfast");
    MenuComponent *diner_menu = new Menu("DINER MENU", 
            "Lunch");
    MenuComponent *cafe_menu = new Menu("CAFE MENU", 
            "Dinner");
    MenuComponent *dessert_menu = new Menu("DESSERT MENU",
            "Dessert of course!");
    MenuComponent *coffee_menu = new Menu("COFFEE MENU",
            "Stuff to go with your afternoon coffee");
    MenuComponent *all_menus = new Menu("ALL MENUS", 
            "All menus combined");

    all_menus->Add(pancake_menu);
    all_menus->Add(diner_menu);
    all_menus->Add(cafe_menu);

    pancake_menu->Add(new MenuItem("K&B's Pancake Breakfast",
            "Pancakes with scrambled eggs, and toast", 2.99));
    pancake_menu->Add(new MenuItem("Regular Pancake Breakfast",
            "Pancakes with fried eggs, sausage", 2.99));
    pancake_menu->Add(new MenuItem("Blueberry Pancakes",
            "Pancakes made with fresh blueberries, and blueberry syrup", 3.49));
    pancake_menu->Add(new MenuItem("Waffles",
            "Waffles, with your choice of blueberries or strawberries", 3.59));
    diner_menu->Add(new MenuItem("Vegetarian BLT",
            "(Fakin') Bacon with lettuce & tomato on whole wheat", 2.99));
    diner_menu->Add(new MenuItem("BLT",
            "Bacon with lettuce & tomato on whole wheat", 2.99));
    diner_menu->Add(new MenuItem("Soup of the day",
            "A bowl of the soup of the day, with a side of potato salad", 3.29));
    diner_menu->Add(new MenuItem("Hotdog",
            "A hot dog, with saurkraut, relish, onions, topped with cheese", 3.05));
    diner_menu->Add(new MenuItem("Steamed Veggies and Brown Rice",
            "Steamed vegetables over brown rice", 3.99));
    diner_menu->Add(new MenuItem("Pasta", 
            "Spaghetti with Marinara Sauce, and a slice of sourdough bread", 3.89));
    diner_menu->Add(dessert_menu);
    
    dessert_menu->Add(new MenuItem("Apple Pie",
            "Apple pie with a flakey crust, topped with vanilla icecream", 1.59));
    dessert_menu->Add(new MenuItem("Cheesecake",
            "Creamy New York cheesecake, with a chocolate graham crust", 1.99));
    dessert_menu->Add(new MenuItem("Sorbet",
            "A scoop of raspberry and a scoop of lime", 1.89));
    cafe_menu->Add(new MenuItem("Veggie Burger and Air Fries",
            "Veggie burger on a whole wheat bun, lettuce, tomato, and fries", 3.99));
    cafe_menu->Add(new MenuItem("Soup of the day",
            "A cup of the soup of the day, with a side salad", 3.69));
    cafe_menu->Add(new MenuItem("Burrito",
            "A large burrito, with whole pinto beans, salsa, guacamole", 4.29));

    cafe_menu->Add(coffee_menu);

    coffee_menu->Add(new MenuItem("Coffee Cake",
            "Crumbly cake topped with cinnamon and walnuts", 1.59));
    coffee_menu->Add(new MenuItem("Bagel",
            "Flavors include sesame, poppyseed, cinnamon raisin, pumpkin", 0.69));
    coffee_menu->Add(new MenuItem("Biscotti",
            "Three almond or hazelnut biscotti cookies", 0.89));

    Waitress *waitress = new Waitress(all_menus);
    waitress->PrintMenu();
    return 0;
}
