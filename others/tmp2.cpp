// needs testing
select admissions.patient_id, admissions.diagnosis
from admissions
group by admissions.diagnosis
having count(admissions.patient_id) > 1;


/// ---------------------------

select patients.province_id, sum(patients.height)
from patients
group by patients.province_id
having sum(patients.height) >= 7000;