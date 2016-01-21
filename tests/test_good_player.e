note
	description: "Tests on good players."
	author: "Camillo John (CJ) D'Alimonte & Dinesh Kalia"
	date: "July 10th 2015"
	revision: "$Revision$"

class
	TEST_GOOD_PLAYER

inherit
	ES_TEST

create
	make

feature -- Constructor
	make
		do
			add_boolean_case (agent test_good_player_wins_easy_board)
			add_boolean_case (agent test_good_player_wins_cross_board)
			add_boolean_case (agent test_good_player_wins_plus_board)
		end

feature -- Tests
	test_good_player_wins_easy_board: BOOLEAN
		local
			player: GOOD_PLAYER
		do
			comment ("test: good player wins an easy board")
			create player.make

			player.game.make_easy
			player.wins_easy_board
			Result :=
					player.game.is_over
				and player.game.is_won
			check Result end
		end

		-----------------------------------------

		test_good_player_wins_cross_board: BOOLEAN
		local
			player: GOOD_PLAYER
		do
			comment ("test: good player wins a cross board")
			create player.make

			player.game.make_cross
			player.wins_cross_board
			Result :=
					player.game.is_over
				and player.game.is_won
			check Result end
		end

			test_good_player_wins_plus_board: BOOLEAN
		local
			player: GOOD_PLAYER
		do
			comment ("test: good player wins a plus board")
			create player.make

			player.game.make_plus
			player.wins_plus_board
			Result :=
					player.game.is_over
				and player.game.is_won
			check Result end
		end
		end
