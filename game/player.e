note
	description: "A peg solitaire game player."
	author: "Camillo John (CJ) D'Alimonte & Dinesh Kalia"
	date: "July 10th 2015"
	revision: "$Revision$"

deferred class
	PLAYER

feature -- Constructor for descendant classes
	make
		local
			access: BOARD_TEMPLATES_ACCESS
		do
			templates := access.templates
			create game.make_from_board (templates.default_board)
		ensure
			default_board_set:
				game.board ~ templates.default_board
		end

feature -- Attributes
	game: GAME
	templates: BOARD_TEMPLATES
end
