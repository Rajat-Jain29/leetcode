# Write your MySQL query statement below
select u.name, SUM(t.amount) as 'balance' from Users u inner join Transactions t on (u.account = t.account) group by t.account having balance > 10000;