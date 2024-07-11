#include <iostream>
#include <vector>

using namespace std;

// Function to optimize inventory management
void optimizeInventory(const vector<int>& demand_forecast, int initial_inventory) {
    int current_inventory = initial_inventory;
    int total_cost = 0;

    // Iterating through each forecasted demand
    for (int demand : demand_forecast) {
        // Check if current inventory is sufficient
        if (current_inventory < demand) {
            // Calculate quantity to order to meet demand (simplified logic)
            int order_quantity = demand - current_inventory;
            // Assuming a fixed cost per order or setup cost
            int order_cost = order_quantity * 5;  // Example: $5 per unit ordered
            total_cost += order_cost;
            // Place the order and update inventory
            current_inventory += order_quantity;
        }
        // Decrease inventory after fulfilling demand
        current_inventory -= demand;
    }

    cout << "Total cost: $" << total_cost << endl;
}

int main() {
    // Example demand forecast for each period
    vector<int> demand_forecast = {10, 15, 20, 12, 8};
    int initial_inventory = 5; // Initial inventory level

    // Call the function to optimize inventory management
    optimizeInventory(demand_forecast, initial_inventory);

    return 0;
}
