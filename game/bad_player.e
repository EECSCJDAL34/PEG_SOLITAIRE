note
	description: "A bad player who loses many solitaire games."
	author: "Camillo John (CJ) D'Alimonte & Dinesh Kalia"
	date: "July 10th 2015"
	revision: "$Revision$"

class
	BAD_PLAYER

inherit
	PLAYER

create
	make

feature -- Commands
	loses_easy_board
			-- Lose an easy board.
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

			game.move_up (3, 4)
			assertion := game.out ~ "[
			Game is over: Yes
			Game is won : No
			Board Status:
			***O***
			***.***
			***.***
			***.***
			***O***
			***.***
			*******
			]"
			check assertion end
		ensure
			finished_and_lost_game:
				game.is_over and not game.is_won
		end

	loses_pyramid_game
		require
			current_game_is_pyramid:
				current.game.board ~ templates.pyramid_board

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
			.OOOOO.
			OOOOOOO
			**...**
			**...**
		 	]"
			check assertion end

			game.move_down (4, 3)
			assertion := game.out ~ "[
			Game is over: No
			Game is won : No
			Board Status:
			**...**
			**.O.**
			..OOO..
			.O.OOO.
			OO.OOOO
			**O..**
			**...**
		 	]"
			check assertion end

			game.move_down (4, 4)
			assertion := game.out ~ "[
			Game is over: No
			Game is won : No
			Board Status:
			**...**
			**.O.**
			..OOO..
			.O..OO.
			OO..OOO
			**OO.**
			**...**
		 	]"
			check assertion end

			game.move_down (4, 5)
			assertion := game.out ~ "[
			Game is over: No
			Game is won : No
			Board Status:
			**...**
			**.O.**
			..OOO..
			.O...O.
			OO...OO
			**OOO**
			**...**
		 	]"
			check assertion end

			game.move_right (5, 1)
			assertion := game.out ~ "[
			Game is over: No
			Game is won : No
			Board Status:
			**...**
			**.O.**
			..OOO..
			.O...O.
			..O..OO
			**OOO**
			**...**
		 	]"
			check assertion end

			game.move_left (5, 7)
			assertion := game.out ~ "[
			Game is over: No
			Game is won : No
			Board Status:
			**...**
			**.O.**
			..OOO..
			.O...O.
			..O.O..
			**OOO**
			**...**
		 	]"
			check assertion end

			game.move_up (6, 3)
			assertion := game.out ~ "[
			Game is over: No
			Game is won : No
			Board Status:
			**...**
			**.O.**
			..OOO..
			.OO..O.
			....O..
			**.OO**
			**...**
		 	]"
			check assertion end

			game.move_up (6, 5)
			assertion := game.out ~ "[
			Game is over: No
			Game is won : No
			Board Status:
			**...**
			**.O.**
			..OOO..
			.OO.OO.
			.......
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
			..O.O..
			.OOOOO.
			.......
			**.O.**
			**...**
		 	]"
			check assertion end

			game.move_down (3, 3)
			assertion := game.out ~ "[
			Game is over: No
			Game is won : No
			Board Status:
			**...**
			**...**
			....O..
			.O.OOO.
			..O....
			**.O.**
			**...**
		 	]"
			check assertion end

			game.move_down (3, 5)
			assertion := game.out ~ "[
			Game is over: Yes
			Game is won : No
			Board Status:
			**...**
			**...**
			.......
			.O.O.O.
			..O.O..
			**.O.**
			**...**
		 	]"
			check assertion end

		ensure
			finished_and_lost_game:
				game.is_over and not game.is_won
		end

	loses_arrow_game
		require
			current_game_is_arrow:
				current.game.board ~ templates.arrow_board
		local
			assertion: BOOLEAN
		do
			assertion := game.out ~ "[
			Game is over: No
			Game is won : No
			Board Status:
			**.O.**
			**OOO**
			.OOOOO.
			...O...
			...O...
			**OOO**
			**OOO**
		 	]"
			check assertion end

			game.move_up (7, 3)
			assertion := game.out ~ "[
			Game is over: No
			Game is won : No
			Board Status:
			**.O.**
			**OOO**
			.OOOOO.
			...O...
			..OO...
			**.OO**
			**.OO**
			]"
			check assertion end

			game.move_up (7, 5)
			assertion := game.out ~ "[
			Game is over: No
			Game is won : No
			Board Status:
			**.O.**
			**OOO**
			.OOOOO.
			...O...
			..OOO..
			**.O.**
			**.O.**
			]"
			check assertion end

			game.move_right (5, 4)
			assertion := game.out ~ "[
			Game is over: No
			Game is won : No
			Board Status:
			**.O.**
			**OOO**
			.OOOOO.
			...O...
			..O..O.
			**.O.**
			**.O.**
			]"
			check assertion end

			game.move_up (7, 4)
			assertion := game.out ~ "[
			Game is over: No
			Game is won : No
			Board Status:
			**.O.**
			**OOO**
			.OOOOO.
			...O...
			..OO.O.
			**...**
			**...**
			]"
			check assertion end

			game.move_right (5, 3)
			assertion := game.out ~ "[
			Game is over: No
			Game is won : No
			Board Status:
			**.O.**
			**OOO**
			.OOOOO.
			...O...
			....OO.
			**...**
			**...**
			]"
			check assertion end

			game.move_left (5, 6)
			assertion := game.out ~ "[
			Game is over: No
			Game is won : No
			Board Status:
			**.O.**
			**OOO**
			.OOOOO.
			...O...
			...O...
			**...**
			**...**
			]"
			check assertion end

			game.move_down (2, 3)
			assertion := game.out ~ "[
			Game is over: No
			Game is won : No
			Board Status:
			**.O.**
			**.OO**
			.O.OOO.
			..OO...
			...O...
			**...**
			**...**
			]"
			check assertion end

			game.move_right (4, 3)
			assertion := game.out ~ "[
			Game is over: No
			Game is won : No
			Board Status:
			**.O.**
			**.OO**
			.O.OOO.
			....O..
			...O...
			**...**
			**...**
			]"
			check assertion end

			game.move_down (3, 5)
			assertion := game.out ~ "[
			Game is over: No
			Game is won : No
			Board Status:
			**.O.**
			**.OO**
			.O.O.O.
			.......
			...OO..
			**...**
			**...**
			]"
			check assertion end

			game.move_right (5, 4)
			assertion := game.out ~ "[
			Game is over: No
			Game is won : No
			Board Status:
			**.O.**
			**.OO**
			.O.O.O.
			.......
			.....O.
			**...**
			**...**
			]"
			check assertion end

			game.move_down (2, 4)
			assertion := game.out ~ "[
			Game is over: Yes
			Game is won : No
			Board Status:
			**.O.**
			**..O**
			.O...O.
			...O...
			.....O.
			**...**
			**...**
			]"
			check assertion end

		ensure
			finished_and_lost_game:
				game.is_over and not game.is_won
		end

	loses_diamond_game
		require
			current_game_is_diamond:
				current.game.board ~ templates.diamond_board
		local
			assertion: BOOLEAN
		do
			assertion := game.out ~ "[
			Game is over: No
			Game is won : No
			Board Status:
			**.O.**
			**OOO**
			.OOOOO.
			OOO.OOO
			.OOOOO.
			**OOO**
			**.O.**
		 	]"
			check assertion end

			game.move_up (6, 4)
			assertion := game.out ~ "[
			Game is over: No
			Game is won : No
			Board Status:
			**.O.**
			**OOO**
			.OOOOO.
			OOOOOOO
			.OO.OO.
			**O.O**
			**.O.**
			]"
			check assertion end

			game.move_left (5, 6)
			assertion := game.out ~ "[
			Game is over: No
			Game is won : No
			Board Status:
			**.O.**
			**OOO**
			.OOOOO.
			OOOOOOO
			.OOO...
			**O.O**
			**.O.**
			]"
			check assertion end

			game.move_down (5, 3)
			assertion := game.out ~ "[
			Game is over: No
			Game is won : No
			Board Status:
			**.O.**
			**OOO**
			.OOOOO.
			OOOOOOO
			.O.O...
			**..O**
			**OO.**
			]"
			check assertion end

			game.move_right (7, 3)
			assertion := game.out ~ "[
			Game is over: No
			Game is won : No
			Board Status:
			**.O.**
			**OOO**
			.OOOOO.
			OOOOOOO
			.O.O...
			**..O**
			**..O**
			]"
			check assertion end

			game.move_up (7, 5)
			assertion := game.out ~ "[
			Game is over: No
			Game is won : No
			Board Status:
			**.O.**
			**OOO**
			.OOOOO.
			OOOOOOO
			.O.OO..
			**...**
			**...**
			]"
			check assertion end

			game.move_left (5, 5)
			assertion := game.out ~ "[
			Game is over: No
			Game is won : No
			Board Status:
			**.O.**
			**OOO**
			.OOOOO.
			OOOOOOO
			.OO....
			**...**
			**...**
			]"
			check assertion end

			game.move_left (5, 3)
			assertion := game.out ~ "[
			Game is over: No
			Game is won : No
			Board Status:
			**.O.**
			**OOO**
			.OOOOO.
			OOOOOOO
			O......
			**...**
			**...**
			]"
			check assertion end

			game.move_up (5, 1)
			assertion := game.out ~ "[
			Game is over: No
			Game is won : No
			Board Status:
			**.O.**
			**OOO**
			OOOOOO.
			.OOOOOO
			.......
			**...**
			**...**
			]"
			check assertion end

			game.move_down (3, 2)
			assertion := game.out ~ "[
			Game is over: No
			Game is won : No
			Board Status:
			**.O.**
			**OOO**
			O.OOOO.
			..OOOOO
			.O.....
			**...**
			**...**
			]"
			check assertion end

			game.move_down (3, 3)
			assertion := game.out ~ "[
			Game is over: No
			Game is won : No
			Board Status:
			**.O.**
			**OOO**
			O..OOO.
			...OOOO
			.OO....
			**...**
			**...**
			]"
			check assertion end

			game.move_down (3, 4)
			assertion := game.out ~ "[
			Game is over: No
			Game is won : No
			Board Status:
			**.O.**
			**OOO**
			O...OO.
			....OOO
			.OOO...
			**...**
			**...**
			]"
			check assertion end

			game.move_left (5, 3)
			assertion := game.out ~ "[
			Game is over: No
			Game is won : No
			Board Status:
			**.O.**
			**OOO**
			O...OO.
			....OOO
			O..O...
			**...**
			**...**
			]"
			check assertion end

			game.move_down (3, 5)
			assertion := game.out ~ "[
			Game is over: No
			Game is won : No
			Board Status:
			**.O.**
			**OOO**
			O....O.
			.....OO
			O..OO..
			**...**
			**...**
			]"
			check assertion end

			game.move_down (3, 6)
			assertion := game.out ~ "[
			Game is over: No
			Game is won : No
			Board Status:
			**.O.**
			**OOO**
			O......
			......O
			O..OOO.
			**...**
			**...**
			]"
			check assertion end

			game.move_right (5, 5)
			assertion := game.out ~ "[
			Game is over: No
			Game is won : No
			Board Status:
			**.O.**
			**OOO**
			O......
			......O
			O..O..O
			**...**
			**...**
			]"
			check assertion end

			game.move_up (5, 7)
			assertion := game.out ~ "[
			Game is over: No
			Game is won : No
			Board Status:
			**.O.**
			**OOO**
			O.....O
			.......
			O..O...
			**...**
			**...**
			]"
			check assertion end

			game.move_down (1, 4)
			assertion := game.out ~ "[
			Game is over: Yes
			Game is won : No
			Board Status:
			**...**
			**O.O**
			O..O..O
			.......
			O..O...
			**...**
			**...**
			]"
			check assertion end

		ensure
			finished_and_lost_game:
				game.is_over and not game.is_won
		end

	loses_skull_game
		require
			current_game_is_skull:
				current.game.board ~ templates.skull_board
		local
			assertion: BOOLEAN
		do
			assertion := game.out ~ "[
			Game is over: No
			Game is won : No
			Board Status:
			**OOO**
			**OOO**
			.OOOOO.
			.O.O.O.
			.OOOOO.
			**OOO**
			**OOO**
		 	]"
			check assertion end

			game.move_left (3, 3)
			assertion := game.out ~ "[
			Game is over: No
			Game is won : No
			Board Status:
			**OOO**
			**OOO**
			O..OOO.
			.O.O.O.
			.OOOOO.
			**OOO**
			**OOO**
			]"
			check assertion end

			game.move_right (3, 5)
			assertion := game.out ~ "[
			Game is over: No
			Game is won : No
			Board Status:
			**OOO**
			**OOO**
			O..O..O
			.O.O.O.
			.OOOOO.
			**OOO**
			**OOO**
			]"
			check assertion end

			game.move_left (5, 3)
			assertion := game.out ~ "[
			Game is over: No
			Game is won : No
			Board Status:
			**OOO**
			**OOO**
			O..O..O
			.O.O.O.
			O..OOO.
			**OOO**
			**OOO**
			]"
			check assertion end

			game.move_right (5, 5)
			assertion := game.out ~ "[
			Game is over: No
			Game is won : No
			Board Status:
			**OOO**
			**OOO**
			O..O..O
			.O.O.O.
			O..O..O
			**OOO**
			**OOO**
			]"
			check assertion end

			game.move_up (7, 3)
			assertion := game.out ~ "[
			Game is over: No
			Game is won : No
			Board Status:
			**OOO**
			**OOO**
			O..O..O
			.O.O.O.
			O.OO..O
			**.OO**
			**.OO**
			]"
			check assertion end

			game.move_up (7, 5)
			assertion := game.out ~ "[
			Game is over: No
			Game is won : No
			Board Status:
			**OOO**
			**OOO**
			O..O..O
			.O.O.O.
			O.OOO.O
			**.O.**
			**.O.**
			]"
			check assertion end

			game.move_left (5, 4)
			assertion := game.out ~ "[
			Game is over: No
			Game is won : No
			Board Status:
			**OOO**
			**OOO**
			O..O..O
			.O.O.O.
			OO..O.O
			**.O.**
			**.O.**
			]"
			check assertion end

			game.move_up (7, 4)
			assertion := game.out ~ "[
			Game is over: No
			Game is won : No
			Board Status:
			**OOO**
			**OOO**
			O..O..O
			.O.O.O.
			OO.OO.O
			**...**
			**...**
			]"
			check assertion end

			game.move_up (5, 2)
			assertion := game.out ~ "[
			Game is over: No
			Game is won : No
			Board Status:
			**OOO**
			**OOO**
			OO.O..O
			...O.O.
			O..OO.O
			**...**
			**...**
			]"
			check assertion end

			game.move_right (5, 4)
			assertion := game.out ~ "[
			Game is over: No
			Game is won : No
			Board Status:
			**OOO**
			**OOO**
			OO.O..O
			...O.O.
			O....OO
			**...**
			**...**
			]"
			check assertion end

			game.move_left (5, 7)
			assertion := game.out ~ "[
			Game is over: No
			Game is won : No
			Board Status:
			**OOO**
			**OOO**
			OO.O..O
			...O.O.
			O...O..
			**...**
			**...**
			]"
			check assertion end

			game.move_right (3, 1)
			assertion := game.out ~ "[
			Game is over: No
			Game is won : No
			Board Status:
			**OOO**
			**OOO**
			..OO..O
			...O.O.
			O...O..
			**...**
			**...**
			]"
			check assertion end

			game.move_down (3, 4)
			assertion := game.out ~ "[
			Game is over: No
			Game is won : No
			Board Status:
			**OOO**
			**OOO**
			..O...O
			.....O.
			O..OO..
			**...**
			**...**
			]"
			check assertion end

			game.move_right (5, 4)
			assertion := game.out ~ "[
			Game is over: No
			Game is won : No
			Board Status:
			**OOO**
			**OOO**
			..O...O
			.....O.
			O....O.
			**...**
			**...**
			]"
			check assertion end

			game.move_up (5, 6)
			assertion := game.out ~ "[
			Game is over: No
			Game is won : No
			Board Status:
			**OOO**
			**OOO**
			..O..OO
			.......
			O......
			**...**
			**...**
			]"
			check assertion end

			game.move_left (3, 7)
			assertion := game.out ~ "[
			Game is over: No
			Game is won : No
			Board Status:
			**OOO**
			**OOO**
			..O.O..
			.......
			O......
			**...**
			**...**
			]"
			check assertion end

			game.move_down (2, 3)
			assertion := game.out ~ "[
			Game is over: No
			Game is won : No
			Board Status:
			**OOO**
			**.OO**
			....O..
			..O....
			O......
			**...**
			**...**
			]"
			check assertion end

			game.move_down (2, 5)
			assertion := game.out ~ "[
			Game is over: No
			Game is won : No
			Board Status:
			**OOO**
			**.O.**
			.......
			..O.O..
			O......
			**...**
			**...**
			]"
			check assertion end

			game.move_down (1, 4)
			assertion := game.out ~ "[
			Game is over: Yes
			Game is won : No
			Board Status:
			**O.O**
			**...**
			...O...
			..O.O..
			O......
			**...**
			**...**
			]"
			check assertion end
		ensure
			finished_and_lost_game:
				game.is_over and not game.is_won
		end
end
