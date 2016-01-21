note
	description: "Shared access to the possible statuses of a board slot."
	author: "Camillo John (CJ) D'Alimonte & Dinesh Kalia"
	date: "July 10th 2015"
	revision: "$Revision$"

expanded class
	SLOT_STATUS_ACCESS

feature -- Accesses
	unavailable_slot: UNAVAILABLE_SLOT
			-- Return the unavailable status of a slot.
 			once create Result.make end

	occupied_slot: OCCUPIED_SLOT
			-- Return the occupied status of a slot.
			once create Result.make end

unoccupied_slot: UNOCCUPIED_SLOT
			-- Return the unoccupied status of a slot.
			once create Result.make end

invariant
	singleton_slot_statuses:
		unavailable_slot = unavailable_slot and
		occupied_slot = occupied_slot and
		unoccupied_slot = unoccupied_slot
end
