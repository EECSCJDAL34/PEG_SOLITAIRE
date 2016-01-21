note
	description : "peg_solitaire application root class"
	author: "Camillo John (CJ) D'Alimonte & Dinesh Kalia"
	date: "July 10th 2015"
	revision    : "$Revision$"

class
	APPLICATION

inherit
	ES_SUITE

create
	make

feature {NONE} -- Initialization

	make
			-- Run application.
		do
			add_test (create {TEST_PEG_SOLITAIRE}.make)
			add_test (create {TEST_GOOD_PLAYER}.make)
			add_test (create {TEST_BAD_PLAYER}.make)

			show_browser
			run_espec
		end

end
