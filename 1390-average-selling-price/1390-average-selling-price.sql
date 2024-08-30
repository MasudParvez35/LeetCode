/* Write your T-SQL query statement below */
SELECT p.product_id, COALESCE(ROUND(SUM(p.price*u.units)*1.00/SUM(u.units),2),0) as average_price
FROM Prices p
LEFT JOIN UnitsSold u
ON p.product_id = u.product_id AND u.purchase_date BETWEEN p.start_date AND p.end_date
GROUP BY p.product_id 