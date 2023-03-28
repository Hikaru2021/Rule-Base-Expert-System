# Rule-Base-Expert-System
An expert system for the following production rules which identify a treatment.

Rule 1    IF temperature <37 THEN no fever

Rule 2    IF temperature >37 AND temperature <38 THEN low fever

Rule 3    IF temperature > 38 THEN high fever

Rule 4    IF light nasal breathing THEN nasal discharge

Rule 5    IF heavy nasal breathing THEN sinus membranes swelling

Rule 6    IF low fever AND headache AND nasal discharge AND cough THEN cold

Rule 7    IF cold AND not soar throat THEN don’t treat

Rule 8    IF cold AND soar throat THEN treat

Rule 9    IF don’t treat THEN don’t give medication

Rule 10   IF treat THEN give medication

Rule 11  IF give medication AND antibiotics allergy THEN give Tylenol

Rule 12  IF give medication AND not antibiotics allergy THEN give antibiotics

