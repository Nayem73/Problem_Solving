Apologies for missing the points table in the previous visual representation. Let's include the user points table in the scenario to reflect the user earning points during the purchase:

**Step 1: User Selects Products**

```
   User
    |
    |   Selects Products
    |  +-----------------+
    |  |  Product1      |
    |  |  Product2      |
    |  |  Product3      |
    |  +-----------------+
    v
```

The user logs in to the e-commerce app, browses the product catalog, and selects the products they want to purchase. In this example, they select "Product1," "Product2," and "Product3."

**Step 2: Products Added to Shopping Cart**

```
   User
    |
    |   Selects Products
    |  +-----------------+
    |  |  Product1      |
    |  |  Product2      |
    |  |  Product3      |
    |  +-----------------+
    v
   Shopping Cart
    |
    |   Adds Products
    |  +-----------------+
    |  |  Product1 (2)  |
    |  |  Product2 (1)  |
    |  |  Product3 (3)  |
    |  +-----------------+
    v
```

The selected products are added to the user's shopping cart. The quantities are specified in parentheses.

**Step 3: Review Shopping Cart**

```
   User
    |
    |   Selects Products
    |  +-----------------+
    |  |  Product1      |
    |  |  Product2      |
    |  |  Product3      |
    |  +-----------------+
    v
   Shopping Cart
    |
    |   Adds Products
    |  +-----------------+
    |  |  Product1 (2)  |
    |  |  Product2 (1)  |
    |  |  Product3 (3)  |
    |  +-----------------+
    v
   User
    |
    |   Reviews Cart
    |  +-----------------+
    |  |  Product1 (2)  |
    |  |  Product2 (1)  |
    |  |  Product3 (3)  |
    |  +-----------------+
    v
```

The user reviews the contents of their shopping cart, including the product quantities.

**Step 4: Initiates Checkout**

```
   User
    |
    |   Selects Products
    |  +-----------------+
    |  |  Product1      |
    |  |  Product2      |
    |  |  Product3      |
    |  +-----------------+
    v
   Shopping Cart
    |
    |   Adds Products
    |  +-----------------+
    |  |  Product1 (2)  |
    |  |  Product2 (1)  |
    |  |  Product3 (3)  |
    |  +-----------------+
    v
   User
    |
    |   Reviews Cart
    |  +-----------------+
    |  |  Product1 (2)  |
    |  |  Product2 (1)  |
    |  |  Product3 (3)  |
    |  +-----------------+
    v
   User
    |
    |   Initiates Checkout
    |  +-----------------+
    |  |   Payment Page  |
    |  |   Points Earned:|  (based on purchase)
    |  +-----------------+
    v
```

The user proceeds to the checkout process, which includes entering payment details and earning points based on their purchase.

**Step 5: Payment and Order Confirmation**

```
   User
    |
    |   Selects Products
    |  +-----------------+
    |  |  Product1      |
    |  |  Product2      |
    |  |  Product3      |
    |  +-----------------+
    v
   Shopping Cart
    |
    |   Adds Products
    |  +-----------------+
    |  |  Product1 (2)  |
    |  |  Product2 (1)  |
    |  |  Product3 (3)  |
    |  +-----------------+
    v
   User
    |
    |   Reviews Cart
    |  +-----------------+
    |  |  Product1 (2)  |
    |  |  Product2 (1)  |
    |  |  Product3 (3)  |
    |  +-----------------+
    v
   User
    |
    |   Initiates Checkout
    |  +-----------------+
    |  |   Payment Page  |
    |  |   Points Earned:|  (based on purchase)
    |  |  Payment Success|
    |  +-----------------+
    v
   Shopping Order
    |
    |   Creates Order
    |  +-----------------+
    |  |  Order1         |
    |  +-----------------+
    v
   Order Items
    |
    |   Create Order Items
    |  +-----------------+
    |  |  Item1 (2)      |
    |  |  Item2 (1)      |
    |  |  Item3 (3)      |
    |  +-----------------+
    v
```

The user's payment is processed successfully, and a new shopping order is created. Order items are also created based on the products in the shopping cart.

**Step 6: Order Processing and Delivery**

```
   User
    |
    |   Selects Products
    |  +-----------------+
    |  |  Product1      |
    |  |  Product2      |
    |  |  Product3      |
    |  +-----------------+
    v
   Shopping Cart
    |
    |   Adds Products
    |  +-----------------+
    |  |  Product1 (2)  |
    |  |  Product2 (1)  |
    |  |  Product3 (3)  |
    |  +-----------------+
    v
   User
    |
    |   Reviews Cart
    |  +-----------------+
    |  |  Product1 (2)  |
    |  |  Product2 (1)  |
    |  |  Product3 (3)  |
    |  +-----------------+
    v
   User
    |
    |   Initiates Checkout
    |  +-----------------+
    |  |   Payment Page  |
    |  |   Points Earned:|  (based on purchase)
    |  |  Payment Success|
    |  +-----------------+
    v
   Shopping Order
    |
    |   Creates Order
    |  +-----------------+
    |  |  Order1         |
    |  +-----------------+
    v
   Order/preorder Items
    |
    |   Create Order Items
    |  +-----------------+
    |  |  Item1 (2)      |
    |  |  Item2 (1)      |
    |  |  Item3 (3)      |
    |  +-----------------+
    v
   User Points
    |
    |   Updates Points
    |  +-----------------+
    |  |  User1 (Earned:|  (updated points)
    |  |  20 Points)     |
    |  +-----------------+
    v
   Delivery Service
    |
    |   Delivers Products
    |  +-----------------+
    |  |  Product1 (2)  |
    |  |  Product2 (1)  |
    |  |  Product3 (3)  |
    |  +-----------------+
    v
    User
    |
    |   Reviews after oreder is delivered (orderStatus = "delivered")
    |  +-----------------+
    |  | ReviewText  |
    |  | Rating      | 
    |  | Requested Date:|  (current date)
    |  +-----------------+
    v

   User
    |
    |   Initiates Return
    |  +-----------------+
    |  | Return Request  |
    |  | Return Reason:  |  (e.g., Wrong Size)
    |  | Requested Date:|  (current date)
    |  +-----------------+
    v
   Shopping Order
    |
    |   Processes Return
    |  +-----------------+
    |  | Refund Issued   |
    |  | Deducted Points:|  (e.g., 30.00 points)
    |  +-----------------+
    v


```

The user's points are updated based on their purchase. The delivery service then delivers the purchased products to the user.

This updated visual representation includes the user points table, reflecting the points earned during the purchase process.



-------------------------------- TABLES ------------------------------------

To implement a product return functionality in your e-commerce application, you can add a new table called "ProductReturn" to keep track of return requests. Here are the tables necessary for this functionality:

1. **ProductReturn:**
   - id (Primary Key)
   - orderId (Foreign Key to ShoppingOrder)
   - userId (Foreign Key to User)
   - returnReason (Reason for the return)
   - returnDate (Date when the return request was made)
   - returnStatus (Status of the return, e.g., pending, approved, rejected)

Now, let's visualize the updated tables, including the "ProductReturn" table:

**User Table:**

```
User
| id (PK) | userName | password | email    |
|---------|----------|----------|----------|
| 1       | user1    | password1| user1@ex.|
| 2       | user2    | password2| user2@ex.|
```

**Agent Table:**

```
Agent
| id (PK) | userName | password | email    | commissionRate |
|---------|----------|----------|----------|----------------|
| 1       | agent1   | password1| agent1@ex.| 5%             |
| 2       | agent2   | password2| agent2@ex.| 6%             |
```

**Retailer Table:**

```
Retailer
| id (PK) | userName | password | email    | discountRate |
|---------|----------|----------|----------|--------------|
| 1       | retailer1| password1| rtlr1@ex.| 10%          |
| 2       | retailer2| password2| rtlr2@ex.| 12%          |
```

**ProductCategory Table:**

```
ProductCategory
| id (PK) | name         |
|---------|--------------|
| 1       | Electronics  |
| 2       | Clothing     |
| 3       | Home Decor   |
```

**Product Table:**

```
Product
| id (PK) | name          | price  | category_id (FK)  | is_Preorderable
|---------|---------------|--------|-------------------|-----------------
| 1       | Laptop        | 800.00 | 1                 | true
| 2       | T-Shirt       | 20.00  | 2                 | true
| 3       | Sofa          | 500.00 | 3                 | false
```

**Shopping Cart Table:**

```
shopping_cart
+----+---------+
| ID | User_ID |
+----+---------+
| 1  | 1       |
| 2  | 2       |
| 3  | 3       |
+----+---------+
```

**Cart Item Table:**

```
cart_item
+----+------------+-----------+---------+-------+
| ID | Cart_ID    | Product_ID| Quantity| Price |
+----+------------+-----------+---------+-------+
| 1  | 1          | 101       | 2       | 20.00 |
| 2  | 2          | 102       | 1       | 50.00 |
| 3  | 3          | 101       | 3       | 40.00 |
+----+------------+-----------+---------+-------+

```

**PaymentTransaction Table:**
```
PaymentTransaction (currency and isPreorder true or false missing in this table)
| id (PK) | orderId (FK) | userId (FK) | transactionId | paymentAmount | paymentStatus | paymentDate          | paymentGateway |
|---------|--------------|-------------|---------------|---------------|---------------|----------------------|----------------|
| 1       | 1            | 1           | ABC123        | 200.00        | Success       | 2023-09-28 10:15:00 | SSLCOMMERZ     |
| 2       | 2            | 2           | XYZ456        | 150.00        | Pending       | 2023-09-29 15:30:00 | SSLCOMMERZ     |
| 3       | 3            | 3           | DEF789        | 80.00         | Success       | 2023-09-30 12:45:00 | SSLCOMMERZ     |
and &&&
PaymentTransaction
| id (PK) | orderId (FK) | userId (FK) | gatewayTransactionId | amount   | currency | paymentStatus | isPreOrder |
|---------|--------------|-------------|-----------------------|----------|----------|---------------|------------|
| 1       | 1            | 1           | SSL123456789         | 860.00   | USD      | Success       | false      |
| 2       | 2            | 2           | SSL987654321         | 60.00    | USD      | Success       | true       |

```


**ShoppingOrder Table:**

```
ShoppingOrder
| id (PK) | userId (FK) | orderDate          | paymentStatus  |
|---------|-------------|--------------------|----------------|
| 1       | 1           | 2023-09-25 14:00:00| Paid           |
| 2       | 2           | 2023-09-25 14:30:00| Pending        |
```

**OrderItem Table:**

```
OrderItem
| id (PK) | orderId (FK) | productId (FK) | quantity | price |
|---------|--------------|-----------------|----------|-------|
| 1       | 1            | 1               | 2        | 800.00|
| 2       | 1            | 2               | 3        | 60.00 |
| 3       | 2            | 3               | 1        | 500.00|
```

**OrderStatus Table:**

```
OrderStatus
| id (PK) | status             |
|---------|--------------------|
| 1       | Pending            |
| 2       | Preordered         |
| 3       | Ordered            |
| 4       | Paid               |
| 5       | DeliveryInProgress |
| 6       | Delivered          |
```

**UserPoints Table:**

```
UserPoints
| id (PK) | userId (FK) | points |
|---------|-------------|--------|
| 1       | 1           | 20.00  |
| 2       | 2           | 10.00  |
```

**UserReview Table:**
```
ProductReview > if (orderStatus.getStatus() == "delivered")
| id (PK) | userId (FK) | productId (FK) | orderStatusId (FK) | reviewText | rating | reviewDate          |
|---------|-------------|-----------------|--------------|------------|--------|--------------------|
| 1       | 1           | 1               | processing   | Great laptop| 5      | 2023-09-26 09:30:00|
| 2       | 2           | 2               | delivered    | Nice shirt | 4      | 2023-09-28 11:00:00|
````

**ProductReturn Table (New):**

```
ProductReturn
| id (PK) | orderId (FK) | userId (FK) | returnReason | returnDate          | returnStatus | totalRefund | deductedPoints |
|---------|--------------|-------------|--------------|--------------------|--------------|--------      |     --------|
| 1       | 1            | 1           | Damaged      | 2023-09-26 09:00:00| Pending      | 0.00         |
| 2       | 2            | 2           | Wrong Size   | 2023-09-27 10:30:00| Approved     | 30.00        |
```

The "ProductReturn" table allows you to track return requests associated with specific orders and users. It includes information about the return reason, return date, and return status (e.g., pending, approved).

With this structure in place, you can manage product returns within your e-commerce application by updating the "ProductReturn" table and handling return processing accordingly.

** missing: lots.