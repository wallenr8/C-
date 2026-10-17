# Cash Drawer POS Simulation

A C++ command-line application that simulates a **retail cashier checkout system and cash drawer reconciliation**. The program processes multiple customer transactions by mapping unique product IDs to fixed pricing tables, handles variable state sales tax, and tracks the end-of-shift terminal balance.

## 🚀 Features

*   **Multi-Sale Terminal Loop:** Supports processing multiple distinct customer orders consecutively until an exit sequence is entered.
*   **Dynamic Inventory Switch Lookup:** References hardcoded product IDs (`101` through `110`) to dynamically fetch individual unit pricing and apply specific sales tax requirements (e.g., `7.5%` vs tax-exempt items).
*   **Reconciliation Reporting:** Tallies and builds formatted console outputs utilizing `<iomanip>` flags for item subtotaling, sales tax accrual, and grand totals.
*   **End-of-Day Financial Summary:** Auto-calculates total terminal value by compounding sales revenues alongside hardcoded overnight bank cash-drops (`\$200.00`).

## 📊 Product Database Blueprint

The system maps transactions using the following configuration matrix:

| Product ID | Unit Price | Tax Rate | Classification |
| :--- | :--- | :--- | :--- |
| **101** | \$66.00 | 7.5% | Taxable Goods |
| **102, 103** | \$12.50, \$24.50 | 0.0% | Tax-Exempt |
| **104, 105** | \$38.75, \$17.80 | 7.5% | Taxable Goods |
| **106** | \$16.50 | 0.0% | Tax-Exempt |
| **107, 108, 109** | \$42.86, \$32.99, \$28.75 | 7.5% | Taxable Goods |
| **110** | \$51.55 | 0.0% | Tax-Exempt |

## 💻 Getting Started

### Compile Instructions

Ensure you have a standard C++ toolchain environment initialized (like `g++`). Build the single executable file direct from the terminal line:

```bash
g++ -O2 -o cashdraw cashdraw.cpp
```

### Execution

* **Windows Environment:**
  ```cmd
  cashdraw.exe
  ```
* **Linux / macOS System:**
  ```bash
  ./cashdraw
  ```

## 🕹️ Console Operation Flow

```text
Sale#1:
Enter the first productID (-1 to exit): 101
Enter the quantity:  2
Enter the next product ID (-1 to exit): 102
Enter the quantity:  1
Enter the next product ID (-1 to exit): -1

Subtotal: \$144.50
Sales Tax: \$9.90
Total Sale: \$154.40

Would you like to process another sale? (-1 to exit):  (or Press '0'): -1

Money in the drawer = \$ 354.40
```
