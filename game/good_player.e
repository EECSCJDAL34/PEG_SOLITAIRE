note
	description: "A good player who knows how to win certain solitaire games."
	author: "Camillo John (CJ) D'Alimonte & Dinesh Kalia"
	date: "July 10th 2015"
	revision: "$Revision$"

class
	GOOD_PLAYER

inherit
	PLAYER

create
	make

feature -- Commands
	wins_easy_board
			-- Win an easy board.
		require
			current_game_is_easy:
			current.game.board ~ templates.easy_board
		local
			assertion: BOOLEAN
		do
			assertion := game.out ~ "[
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
			check assertion end

			game.move_down (2, 4)
			assertion := game.out ~ "[
			Game is over: No
			Game is won : No
			Board Status:
			***.***
			***.***
			***.***
			***O***
			***O***
			***.***
			*******
			]"
			check assertion end

			game.move_down (4, 4)
			assertion := game.out ~ "[
			Game is over: Yes
			Game is won : Yes
			Board Status:
			***.***
			***.***
			***.***
			***.***
			***.***
			***O***
			*******
			]"
			check assertion end
		ensure
			finished_and_won_game:
				game.is_over and game.is_won
		end

	wins_cross_board
			-- Win a cross board.
		require
			current_game_is_cross:
				current.game.board ~ templates.cross_board

		local
			assertion: BOOLEAN
		do
			assertion := game.out ~ "[
			Game is over: No
			Game is won : No
			Board Status:
			**...**
			**.O.**
			..OOO..
			...O...
			...O...
			**...**
			**...**
			]"
			check assertion end

			game.move_right (3, 4)
			assertion := game.out ~ "[
			Game is over: No
			Game is won : No
			Board Status:
			**...**
			**.O.**
			..O..O.
			...O...
			...O...
			**...**
			**...**
			]"
			check assertion end

			game.move_up (5, 4)
			assertion := game.out ~ "[
			Game is over: No
			Game is won : No
			Board Status:
			**...**
			**.O.**
			..OO.O.
			.......
			.......
			**...**
			**...**
			]"
			check assertion end

			game.move_right (3, 3)
			assertion := game.out ~ "[
			Game is over: No
			Game is won : No
			Board Status:
			**...**
			**.O.**
			....OO.
			.......
			.......
			**...**
			**...**
			]"
			check assertion end

			game.move_left (3, 6)
			assertion := game.out ~ "[
			Game is over: No
			Game is won : No
			Board Status:
			**...**
			**.O.**
			...O...
			.......
			.......
			**...**
			**...**
			]"
			check assertion end

			game.move_down (2, 4)
			assertion := game.out ~ "[
			Game is over: Yes
			Game is won : Yes
			Board Status:
			**...**
			**...**
			.......
			...O...
			.......
			**...**
			**...**
			]"
			check assertion end

		ensure
			finished_and_won_game:
				game.is_over and game.is_won
		end

	wins_plus_board
			-- Win a plus board.
		require
			current_game_is_plus:
		current.game.board ~ templates.plus_board
		local
			assertion: BOOLEAN
		do
			assertion := game.out ~ "[
			Game is over: No
			Game is won : No
			Board Status:
			**...**
			**.O.**
			...O...
			.OOOOO.
			...O...
			**.O.**
			**...**
			]"
			check assertion end

			game.move_right (4, 5)
			assertion := game.out ~ "[
			Game is over: No
			Game is won : No
			Board Status:
			**...**
			**.O.**
			...O...
			.OOO..O
			...O...
			**.O.**
			**...**
			]"
			check assertion end

			game.move_right (4, 3)
			assertion := game.out ~ "[
			Game is over: No
			Game is won : No
			Board Status:
			**...**
			**.O.**
			...O...
			.O..O.O
			...O...
			**.O.**
			**...**
			]"
			check assertion end

			game.move_down (2, 4)
			assertion := game.out ~ "[
			Game is over: No
			Game is won : No
			Board Status:
			**...**
			**...**
			.......
			.O.OO.O
			...O...
			**.O.**
			**...**
			]"
			check assertion end

			game.move_right (4, 4)
			assertion := game.out ~ "[
			Game is over: No
			Game is won : No
			Board Status:
			**...**
			**...**
			.......
			.O...OO
			...O...
			**.O.**
			**...**
			]"
			check assertion end

			game.move_left (4, 7)
			assertion := game.out ~ "[
			Game is over: No
			Game is won : No
			Board Status:
			**...**
			**...**
			.......
			.O..O..
			...O...
			**.O.**
			**...**
			]"
			check assertion end

			game.move_up (6, 4)
			assertion := game.out ~ "[
			Game is over: No
			Game is won : No
			Board Status:
			**...**
			**...**
			.......
			.O.OO..
			.......
			**...**
			**...**
			]"
			check assertion end

			game.move_left (4, 5)
			assertion := game.out ~ "[
			Game is over: No
			Game is won : No
			Board Status:
			**...**
			**...**
			.......
			.OO....
			.......
			**...**
			**...**
			]"
			check assertion end

			game.move_right (4, 2)
			assertion := game.out ~ "[
			Game is over: Yes
			Game is won : Yes
			Board Status:
			**...**
			**...**
			.......
			...O...
			.......
			**...**
			**...**
			]"
			check assertion end

		ensure
			finished_and_won_game:
				game.is_over and game.is_won
		end
end
