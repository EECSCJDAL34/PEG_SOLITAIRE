note
	description: "Tests on peg solitaire games."
	author: "Camillo John (CJ) D'Alimonte & Dinesh Kalia"
	date: "July 10th 2015"
	revision: "$Revision$"

class
	TEST_PEG_SOLITAIRE

inherit
	ES_TEST

create
	make

feature -- Constructor
	make
		do
			add_boolean_case (agent test_easy_game_creation)
			add_boolean_case (agent test_set_status_extreme_cases)
			add_violation_case (agent test_set_status_illegal_cases)
			add_boolean_case (agent test_set_statuses_extreme_cases)
			add_violation_case (agent test_set_statuses_illegal_cases)
			add_boolean_case (agent test_board_auxiliary_queries)
			add_violation_case (agent test_matches_slots_except)
			add_boolean_case (agent test_move_features_on_extreme_cases)
			add_violation_case (agent test_move_features_on_illegal_cases)
			add_violation_case (agent test_is_over_and_is_won_postcondition)
			add_boolean_case (agent test_board_construction_and_output)
		end

feature -- Templates
	bta: BOARD_TEMPLATES_ACCESS
	ssa : SLOT_STATUS_ACCESS

feature -- Tests of Creation
	test_easy_game_creation: BOOLEAN
		local
			g: GAME
		do
			comment ("test: game creation with easy board")
			create g.make_easy
			Result :=
					g.board ~ bta.templates.easy_board
				and not g.is_over
				and not g.is_won
			check Result end

			Result := g.out ~ "[
			Game is over: No
			Game is won : No
			Board Status:
			***.***
			***O***
			***O***
			***.***
			***O***
			***.***
			*******
			]"
			check Result end
		end

		test_set_status_extreme_cases: BOOLEAN
		local
			g: GAME
		do
			comment ("t1: test set_status on legal and extreme values and its postcondition correctness")
			create g.make_cross
			Result :=
					g.board ~ bta.templates.cross_board
				and not g.is_over
				and not g.is_won
			check Result end

			g.board.set_status (2, 4, ssa.unoccupied_slot)
			Result := g.out ~ "[
			Game is over: No
			Game is won : No
			Board Status:
			**...**
			**...**
			..OOO..
			...O...
			...O...
			**...**
			**...**
			]"
			check Result end

		check g.board.matches_slots_except (g.board, 2, 2, 4, 4) end
		check g.board.status_of (2, 4) ~ ssa.unoccupied_slot end

		g.board.set_status (6, 6, ssa.occupied_slot)
				Result := g.out ~ "[
				Game is over: No
				Game is won : No
				Board Status:
				**...**
				**...**
				..OOO..
				...O...
				...O...
				**...O*
				**...**
				]"
			check Result end
			check g.board.matches_slots_except (g.board, 6, 6, 6, 6) end
			check g.board.status_of (6, 6) ~ ssa.occupied_slot end

			g.board.set_status (1, 1, ssa.unoccupied_slot)
				Result := g.out ~ "[
				Game is over: No
				Game is won : No
				Board Status:
				.*...**
				**...**
				..OOO..
				...O...
				...O...
				**...O*
				**...**
				]"
			check Result end
			check g.board.matches_slots_except (g.board, 1, 1, 1, 1) end
			check g.board.status_of (1, 1) ~ ssa.unoccupied_slot end

			g.board.set_status (1, g.board.number_of_columns, ssa.occupied_slot)
			Result := g.out ~ "[
			Game is over: No
			Game is won : No
			Board Status:
			.*...*O
			**...**
			..OOO..
			...O...
			...O...
			**...O*
			**...**
				]"

			check Result end
			check g.board.matches_slots_except (g.board, 1, 1, g.board.number_of_columns,
			g.board.number_of_columns) end
		check g.board.status_of (1, g.board.number_of_columns) ~ ssa.occupied_slot end

			end

		test_set_status_illegal_cases

		local
			g: GAME
		do
			comment ("t2: test set_status on illegal values (precondition too weak)")
			create g.make_cross

			g.board.set_status (0, 0, ssa.occupied_slot)
			check g.board.status_of (0, 0) ~ ssa.occupied_slot end

			g.board.set_status (34, 56, ssa.unoccupied_slot)
			check g.board.status_of (34, 56) ~ ssa.occupied_slot end

		end

		test_set_statuses_extreme_cases: BOOLEAN
			local
				g: GAME

			do
				comment ("t3: test set_statuses on legal and extreme values and its postcondition correctness")
				create g.make_diamond
				Result :=
						g.board ~ bta.templates.diamond_board
					and not g.is_over
					and not g.is_won
				check Result end

				g.board.set_statuses (2, 4, 5, 6, ssa.unavailable_slot)
				Result := g.out ~ "[
				Game is over: No
				Game is won : No
				Board Status:
				**.O.**
				**OO***
				.OOO**.
				OOO.**O
				.OOOOO.
				**OOO**
				**.O.**
				]"

		check Result end
		check g.board.matches_slots_except (g.board, 2, 4, 5, 6) end
		Result:= across 2 |..| 4 as r
					all
					across 5 |..| 6 as c
					all
					g.board.status_of (r.item, c.item) ~ ssa.unavailable_slot
					end
					end
					check Result end


		g.board.set_statuses (1, g.board.number_of_rows, 1, 1, ssa.occupied_slot)
				Result := g.out ~ "[
				Game is over: No
				Game is won : No
				Board Status:
				O*.O.**
				O*OO***
				OOOO**.
				OOO.**O
				OOOOOO.
				O*OOO**
				O*.O.**
				]"

			check Result end
		check g.board.matches_slots_except (g.board, 1, g.board.number_of_rows, 1, 1) end
			Result:= across 1 |..| g.board.number_of_rows as r
					all
					across 1 |..| 1 as c
					all
					g.board.status_of (r.item, c.item) ~ ssa.occupied_slot
					end
					end
					check Result end

			g.board.set_statuses (3, 4, 1, g.board.number_of_columns, ssa.unavailable_slot)
				Result := g.out ~ "[
				Game is over: No
				Game is won : No
				Board Status:
				O*.O.**
				O*OO***
				*******
				*******
				OOOOOO.
				O*OOO**
				O*.O.**
				]"

			check Result end
		check g.board.matches_slots_except (g.board, 3, 4, 1, g.board.number_of_columns) end
			Result:= across 3 |..| 4 as r
				all
				across 1 |..| g.board.number_of_columns as c
				all
				g.board.status_of (r.item, c.item) ~ ssa.unavailable_slot
				end
				end
			check Result end

			g.board.set_statuses (1, g.board.number_of_rows, 1, g.board.number_of_columns, ssa.unoccupied_slot)
			Result := g.out ~ "[
				Game is over: Yes
				Game is won : No
				Board Status:
				.......
				.......
				.......
				.......
				.......
				.......
				.......
				]"

			check Result end
		-- check g.board.matches_slots_except (g.board, 1, g.board.number_of_rows, 1, g.board.number_of_columns) end
		-- Covers entire board!
		Result:= across 1 |..| g.board.number_of_rows as r
				all
				across 1 |..| g.board.number_of_columns as c
				all
				g.board.status_of (r.item, c.item) ~ ssa.unoccupied_slot
				end
				end
			check Result end



			end

	test_set_statuses_illegal_cases

		local
			g: GAME
		do
			comment ("t4: test set_statuses on illegal values (precondition too weak)")
			create g.make_diamond

			g.board.set_statuses (0, 2, 4, 5, ssa.occupied_slot)
			check g.board.status_of (1,4) ~ ssa.occupied_slot end


			g.board.set_statuses (3, 2, 4,7, ssa.occupied_slot)
			check g.board.status_of (3, 6) ~ ssa.occupied_slot end

			g.board.set_statuses (1, g.board.number_of_rows + 1, 3, g.board.number_of_columns, ssa.unoccupied_slot)
			check g.board.status_of (g.board.number_of_rows, 5) ~ ssa.unoccupied_slot end

		end

		test_board_auxiliary_queries: BOOLEAN
			local
				g: GAME
			do
				comment ("t5: test auxiliary queries in BOARD")
				create g.make_skull
				Result :=
						g.board ~ bta.templates.skull_board
					and not g.is_over
					and not g.is_won
				check Result end
				Result:= g.board.number_of_columns ~ 7 and g.board.number_of_rows ~ 7
				check Result end
				Result:= g.board.number_of_occupied_slots ~ 25
				check Result end
				g.board.set_status (2, 4, ssa.unoccupied_slot)
				Result:= g.board.number_of_occupied_slots ~ 24
				check Result end
				g.board.set_statuses (1, g.board.number_of_rows, 1, g.board.number_of_columns, ssa.unoccupied_slot)
				Result:= g.board.number_of_occupied_slots ~ 0
				check Result end
				g.board.set_statuses (1, g.board.number_of_rows, 1, g.board.number_of_columns, ssa.occupied_slot)
				Result:= g.board.number_of_occupied_slots ~ 49
				check Result end
				g.board.set_status (2, 3, ssa.unavailable_slot)
				Result:= g.board.status_of (2, 3) ~ ssa.unavailable_slot
				check Result end
				Result:= g.board.status_of (4, 6) /~ ssa.unoccupied_slot
				check Result end
				end

	test_matches_slots_except
				local
			g1, g2: GAME
		do
			comment ("t6: test matches_slots_except")
			create g1.make_easy
			create g2.make_easy
			g2.board.set_status (5, 4, ssa.unoccupied_slot)
			g2.board.set_status (3, 1, ssa.occupied_slot)
			check g1.board.matches_slots_except (g2.board, 5, 5, 4, 4) ~ false end

		 	g2.board.set_statuses (6,7, 5, 4, ssa.unoccupied_slot)
			g1.board.set_status (3, 1, ssa.occupied_slot)
			check g1.board.matches_slots_except (g2.board, 6, 7, 5, 4) ~ false end
		end

		test_move_features_on_extreme_cases: BOOLEAN

			local
				g,game: GAME
			do
				comment ("t7: test movement patterns on extreme cases and test postcondition correctness")
				create g.make_easy
				Result :=
						g.board ~ bta.templates.easy_board
					and not g.is_over
					and not g.is_won
				check Result end

				g.board.set_status (1, 1, ssa.occupied_slot)
				g.board.set_status (1, 2, ssa.occupied_slot)
				g.board.set_status (2, 1, ssa.occupied_slot)
				g.board.set_status (3, 1, ssa.unoccupied_slot)
				g.board.set_status (1, 3, ssa.unoccupied_slot)
				g.board.set_status (g.board.number_of_rows, g.board.number_of_columns, ssa.occupied_slot)
				g.board.set_status (g.board.number_of_rows, g.board.number_of_columns - 1, ssa.occupied_slot)
				g.board.set_status (g.board.number_of_rows - 1, g.board.number_of_columns, ssa.occupied_slot)
				g.board.set_status (g.board.number_of_rows, g.board.number_of_columns - 2, ssa.unoccupied_slot)
				g.board.set_status (g.board.number_of_rows - 2, g.board.number_of_columns, ssa.unoccupied_slot)

				Result := g.out ~ "[
				Game is over: No
				Game is won : No
				Board Status:
				OO..***
				O**O***
				.**O***
				***.***
				***O**.
				***.**O
				****.OO
				]"
			check Result end

			g.move_down (1, 1)
			check g.board.matches_slots_except (g.board, 1, 3, 1, 1) end
			check  g.board.status_of (1, 1) ~ g.board.unoccupied_slot and
				g.board.status_of (2, 1) ~ g.board.unoccupied_slot and
				g.board.status_of (3, 1) ~ g.board.occupied_slot end
			Result := g.out ~ "[
				Game is over: No
				Game is won : No
				Board Status:
				.O..***
				.**O***
				O**O***
				***.***
				***O**.
				***.**O
				****.OO
				]"
			check Result end

			g.move_up (g.board.number_of_rows, g.board.number_of_columns)
			check g.board.matches_slots_except (g.board, 7, 5, 7, 7) end
			check  g.board.status_of (7, 7) ~ g.board.unoccupied_slot and
				g.board.status_of (6, 7) ~ g.board.unoccupied_slot and
				g.board.status_of (5, 7) ~ g.board.occupied_slot end
			Result := g.out ~ "[
				Game is over: No
				Game is won : No
				Board Status:
				.O..***
				.**O***
				O**O***
				***.***
				***O**O
				***.**.
				****.O.
				]"
			check Result end


			create game.make_easy
				Result :=
						game.board ~ bta.templates.easy_board
					and not game.is_over
					and not game.is_won
				check Result end

				game.board.set_status (1, 1, ssa.occupied_slot)
				game.board.set_status (1, 2, ssa.occupied_slot)
				game.board.set_status (2, 1, ssa.occupied_slot)
				game.board.set_status (3, 1, ssa.unoccupied_slot)
				game.board.set_status (1, 3, ssa.unoccupied_slot)
				game.board.set_status (game.board.number_of_rows, game.board.number_of_columns, ssa.occupied_slot)
				game.board.set_status (game.board.number_of_rows, game.board.number_of_columns - 1, ssa.occupied_slot)
				game.board.set_status (game.board.number_of_rows - 1, game.board.number_of_columns, ssa.occupied_slot)
				game.board.set_status (game.board.number_of_rows, game.board.number_of_columns - 2, ssa.unoccupied_slot)
				game.board.set_status (game.board.number_of_rows - 2, game.board.number_of_columns, ssa.unoccupied_slot)

				Result := game.out ~ "[
				Game is over: No
				Game is won : No
				Board Status:
				OO..***
				O**O***
				.**O***
				***.***
				***O**.
				***.**O
				****.OO
				]"
			check Result end

			game.move_right (1, 1)
			check game.board.matches_slots_except (game.board, 1, 1, 1, 3) end
			check  game.board.status_of (1, 1) ~ game.board.unoccupied_slot and
				game.board.status_of (1, 2) ~ game.board.unoccupied_slot and
				game.board.status_of (1, 3) ~ game.board.occupied_slot end
			Result := game.out ~ "[
				Game is over: No
				Game is won : No
				Board Status:
				..O.***
				O**O***
				.**O***
				***.***
				***O**.
				***.**O
				****.OO
				]"
			check Result end

			game.move_left (7, 7)
			check game.board.matches_slots_except (game.board, 7, 7, 7, 5) end
			check  game.board.status_of (7, 7) ~ game.board.unoccupied_slot and
				 game.board.status_of (7, 6) ~ game.board.unoccupied_slot and
				 game.board.status_of (7, 5) ~ game.board.occupied_slot end
			Result := game.out ~ "[
				Game is over: No
				Game is won : No
				Board Status:
				..O.***
				O**O***
				.**O***
				***.***
				***O**.
				***.**O
				****O..
				]"
			check Result end

			end

			test_move_features_on_illegal_cases

			local

			g,game: GAME
		do
			comment ("t8: test movement patterns on illegal cases (precondition too weak)")
			create g.make_arrow

		g.move_left (4, 4)
		check g.board.status_of (4, 4) ~ g.board.occupied_slot and
		g.board.status_of (4, 3) ~ g.board.occupied_slot and
		g.board.status_of (4, 2) ~ g.board.unoccupied_slot end

		g.move_right(4, 4)
		check g.board.status_of (4, 4) ~ g.board.occupied_slot and
		g.board.status_of (4, 5) ~ g.board.occupied_slot and
		g.board.status_of (4, 6) ~ g.board.unoccupied_slot end

		g.move_up (4, 4)
		check g.board.status_of (4, 4) ~ g.board.occupied_slot and
		g.board.status_of (3, 4) ~ g.board.occupied_slot and
		g.board.status_of (2, 4) ~ g.board.unoccupied_slot end

		g.move_down (4, 4)
		check g.board.status_of (4, 4) ~ g.board.occupied_slot and
		g.board.status_of (5, 4) ~ g.board.occupied_slot and
		g.board.status_of (6, 4) ~ g.board.unoccupied_slot end

		create game.make_pyramid

		game.move_left (4, 2)
		check game.board.status_of (4, 2) ~ game.board.occupied_slot and
		game.board.status_of (4, 1) ~ game.board.occupied_slot and
		game.board.status_of (4, 0) ~ game.board.unoccupied_slot end

		game.move_right(4, 6)
		check g.board.status_of (4, 6) ~ game.board.occupied_slot and
		game.board.status_of (4, 7) ~ game.board.occupied_slot and
		game.board.status_of (4, 8) ~ game.board.unoccupied_slot end

		game.move_up (2, 4)
		check game.board.status_of (2, 4) ~ game.board.occupied_slot and
		game.board.status_of (1, 4) ~ game.board.occupied_slot and
		game.board.status_of (0, 4) ~ game.board.unoccupied_slot end


		game.move_down (6, 4)
		check game.board.status_of (6, 4) ~ game.board.occupied_slot and
		game.board.status_of (7, 4) ~ game.board.occupied_slot and
		game.board.status_of (8, 4) ~ game.board.unoccupied_slot end
end

	test_is_over_and_is_won_postcondition
		local
			g: GAME
		do
			comment ("t9: test postcondition of is_over & is_won")
			create g.make_easy
			g.board.set_statuses (1, 7, 1, 7, ssa.unoccupied_slot)
			g.board.set_status (5, 6,ssa.occupied_slot)
			check g.board.number_of_occupied_slots ~ 1 end
			check g.is_over and g.is_won end

			g.make_cross
			check not g.is_over and not g.is_won end

			g.make_diamond
			g.board.set_statuses (1, 7, 1, 7, ssa.unavailable_slot)
			check g.is_over and not g.is_won end

			g.board.set_statuses (5, 5, 5, 6, ssa.occupied_slot)
			check g.is_over and not g.is_won end

			g.board.set_status (5, 4, ssa.occupied_slot)
			g.board.set_status (5, 3, ssa.unoccupied_slot)
			g.move_left (5, 5)
			check g.board.number_of_occupied_slots ~ 2 end
			check g.is_over and not g.is_won end


			g.make_plus
			g.board.set_statuses (1, 7, 1, 7, ssa.unoccupied_slot)
			g.board.set_status (2, 2, ssa.occupied_slot)
			check g.board.number_of_occupied_slots ~ 1 end
			check not g.is_over and g.is_won end
			g.board.set_status (4,6, ssa.occupied_slot)
			g.board.set_status (1,2, ssa.occupied_slot)
			g.board.set_status (5,7, ssa.occupied_slot)
			g.board.set_status (1,6, ssa.occupied_slot)
			check g.is_over and not g.is_won end
			end

			test_board_construction_and_output: BOOLEAN
			local
				g1, g2, g3, g4, g5, g6 : GAME
			do
				comment ("t10: test board construction, is_equals, and correct output of the board")
				 create g1.make_arrow
				Result:= g1.board ~ bta.templates.arrow_board
				check Result end
				Result:= g1.board.is_equal (bta.templates.arrow_board)
				check Result end
				Result:= bta.templates.arrow_board_out ~ "[
						**.O.**
						**OOO**
						.OOOOO.
						...O...
						...O...
						**OOO**
						**OOO**
						]"
				check Result end
				 create g2.make_cross
				Result:= g2.board ~ bta.templates.cross_board
				check Result end
				Result:= g2.board.is_equal (bta.templates.cross_board)
				check Result end
				Result:= bta.templates.cross_board_out ~ "[
						**...**
						**.O.**
						..OOO..
						...O...
						...O...
						**...**
						**...**
						]"
				check Result end
				 create g3.make_plus
				Result:= g3.board ~ bta.templates.plus_board
				check Result end
				Result:= g3.board.is_equal (bta.templates.plus_board)
				check Result end
				Result:= bta.templates.plus_board_out ~ "[
						**...**
						**.O.**
						...O...
						.OOOOO.
						...O...
						**.O.**
						**...**
						]"
				check Result end
				 create g4.make_diamond
				Result:= g4.board ~ bta.templates.diamond_board
				check Result end
				Result:= g4.board.is_equal (bta.templates.diamond_board)
				check Result end
				Result:= bta.templates.diamond_board_out ~ "[
						**.O.**
						**OOO**
						.OOOOO.
						OOO.OOO
						.OOOOO.
						**OOO**
						**.O.**
						]"
				check Result end
				 create g5.make_skull
				Result:= g5.board ~ bta.templates.skull_board
				check Result end
				Result:= g5.board.is_equal (bta.templates.skull_board)
				check Result end
				Result:= bta.templates.skull_board_out ~ "[
						**OOO**
						**OOO**
						.OOOOO.
						.O.O.O.
						.OOOOO.
						**OOO**
						**OOO**
						]"
				check Result end
				create g6.make_pyramid
				Result:= g6.board ~ bta.templates.pyramid_board
				check Result end
				Result:= g6.board.is_equal (bta.templates.pyramid_board)
				check Result end
				Result:= bta.templates.pyramid_board_out ~ "[
						**...**
						**.O.**
						..OOO..
						.OOOOO.
						OOOOOOO
						**...**
						**...**
						]"
					check Result end
				end

end
