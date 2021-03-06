#ifndef MAINWIN_H
#define MAINWIN_H

#include "container.h"
#include "scoop.h"
#include "topping.h"
#include "serving.h"
#include "order.h"
#include "server.h"
#include "customer.h"
#include <gtkmm.h>
#include <string>

class Mainwin : public Gtk::Window
{
    public:
        Mainwin();
        virtual ~Mainwin();
    protected:
        //void on_file_new_click();                    // Create a new Emporium
        void on_create_order_click();                  // Create a new order
        void on_create_item_click();                   // Create a new item
        void on_create_server_click();                 // Create a new server
        void on_create_customer_click();               // Create a new customer
        void on_all_click();                           // Select all roles
        void on_owner_click();                         // Select owner role
        void on_manager_click();                       // Select manager role
        void on_server_click();                        // Select server role
        void on_customer_click();                      // Select customer role
        void on_about_click();                         // Display About dialog
        void on_quit_click();                          // Exit the program
        void on_easteregg_click();                     // TODO: For test only
    private:
        Gtk::MenuItem *menuitem_new;
        Gtk::MenuItem *menuitem_easteregg;
        Gtk::MenuItem *menuitem_quit;
        Gtk::MenuItem *menuitem_order;
        Gtk::MenuItem *menuitem_customer;
        Gtk::MenuItem *menuitem_item;
        Gtk::MenuItem *menuitem_server;

        Gtk::ToolButton *new_emporium_button;
        Gtk::ToolButton *create_order_button;
        Gtk::ToolButton *create_item_button;
        
        void create_order();                           // Create a new order
        Mice::Serving create_serving();                // Create a new serving
        int select_container();                        // Select a container index
        int select_scoop();                            // Select a scoop index
        int select_topping();                          // Select a container index
        int select_customer();                         // Select a customer index
        int select_server();                           // Select a server index
        int select_from_vector
            (std::vector<std::string> names, 
             std::string title);                       // Select from a list of strings
        void on_create_person_click(std::string role); // Create a new person

        std::vector<Mice::Container> _containers;      // All defined containers
        std::vector<Mice::Scoop> _scoops;              // All defined scoops
        std::vector<Mice::Topping> _toppings;          // All defined toppings
        std::vector<Mice::Order> _orders;              // All defined orders
        std::vector<Mice::Server> _servers;            // All defined servers
        std::vector<Mice::Customer> _customers;        // All defined customers
};
#endif 

