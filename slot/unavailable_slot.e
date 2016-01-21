note
	description: "A slot on the board that is not available for occupation."
	author: "Camillo John (CJ) D'Alimonte & Dinesh Kalia"
	date: "July 10th 2015"
	revision: "$Revision$"

class
	UNAVAILABLE_SLOT

inherit
	SLOT_STATUS
		redefine
			out
		end

create {SLOT_STATUS_ACCESS}
	make

feature {SLOT_STATUS_ACCESS} -- Constructor
	make
		do
			-- Initialize an occupied slot object.
		end

feature -- Output
	out: STRING
			-- String representation of current slot.
		do
			create Result.make_empty
			 Result := "*"
			 
		ensure then
			correct_result:
				Result ~ "*"
		end
end
