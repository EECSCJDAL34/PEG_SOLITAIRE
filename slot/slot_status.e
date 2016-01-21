note
	description: "Summary description for {SLOT_STATUS}."
	author: "Camillo John (CJ) D'Alimonte & Dinesh Kalia"
	date: "July 10th 2015"
	revision: "$Revision$"

deferred class
	SLOT_STATUS

inherit
	ANY
		redefine
			is_equal
		end

feature -- Equality
	is_equal(other: like Current): BOOLEAN
			-- Is the current slot status equal to 'other'?
		local
			ssa: SLOT_STATUS_ACCESS
		do
		Result:= current = ssa.occupied_slot and other = ssa.occupied_slot or
				current = ssa.unavailable_slot and other = ssa.unavailable_slot or
				current = ssa.unoccupied_slot and other = ssa.unoccupied_slot

		ensure then
			correct_result:
				Result implies current ~ other
		end
end
