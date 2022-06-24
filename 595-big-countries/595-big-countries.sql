# Write your MySQL query statement below
select W.name , W.population , W.area
from World W
where W.area >= 3000000 or W.population >= 25000000