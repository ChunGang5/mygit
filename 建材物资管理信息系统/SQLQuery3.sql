create view v2
as
select Wp.wpID,wp_Name,wp_type,number,price
from Wp,provide
where Wp.wpID=provide.proID
and
proID='p001'
