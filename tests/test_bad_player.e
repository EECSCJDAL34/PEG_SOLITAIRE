note
	description: "Tests on bad players."
	author: "Camillo John (CJ) D'Alimonte & Dinesh Kalia"
	date: "July 10th 2015"
	revision: "$Revision$"

class
	TEST_BAD_PLAYER

inherit
	ES_TEST

create
	make

feature -- Constructor
	make
		do
			add_boolean_case (agent test_bad_player_loses_easy_board)
			add_boolean_case (agent test_bad_player_loses_pyramid_board)
			add_boolean_case (agent test_bad_player_loses_arrow_board)
			add_boolean_case (agent test_bad_player_loses_diamond_board)
			add_boolean_case (agent test_bad_player_loses_skull_board)
		end

feature -- Tests
	test_bad_player_loses_easy_board: BOOLEAN
		local
			player: BAD_PLAYER
		do
			comment ("test: bad player loses an easy board")
			create player.make

			player.game.make_easy
			player.loses_easy_board
			Result :=
					player.game.is_over
				and not player.game.is_won
			check Result end
		end

		---------------------------------------------------

test_bad_player_loses_pyramid_board: BOOLEAN
		local
			player: BAD_PLAYER
		do
			comment ("test: bad player loses a pyramid board")
			create player.make

			player.game.make_pyramid
			player.loses_pyramid_game
			Result :=
					player.game.is_over
				and not player.game.is_won
			check Result end
		end


test_bad_player_loses_arrow_board: BOOLEAN
		local
			player: BAD_PLAYER
		do
			comment ("test: bad player loses an arrow board")
			create player.make

			player.game.make_arrow
			player.loses_arrow_game
			Result :=
					player.game.is_over
				and not player.game.is_won
			check Result end
		end

test_bad_player_loses_diamond_board: BOOLEAN
		local
			player: BAD_PLAYER
		do
			comment ("test: bad player loses a diamond board")
			create player.make

			player.game.make_diamond
			player.loses_diamond_game
			Result :=
					player.game.is_over
				and not player.game.is_won
			check Result end
		end


test_bad_player_loses_skull_board: BOOLEAN
		local
			player: BAD_PLAYER
		do
			comment ("test: bad player loses a skull board")
			create player.make

			player.game.make_skull
			player.loses_skull_game
			Result :=
					player.game.is_over
				and not player.game.is_won
			check Result end
		end
end
