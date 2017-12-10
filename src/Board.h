
#ifndef BOARD_H_
#define BOARD_H_

#include <vector>

#include "Point.h"
#include "PlayerTypes.h"

typedef std::vector<std::vector<PlayerTypes> > CellMatrix;

class Board {
public:
    /**
     * the constractor.
     * @param size the size.
     */
    explicit Board(const unsigned int size);

    virtual ~Board() {}

    /**
     * get num rows.
     * @return return the cells.
     */
    unsigned int get_num_rows() const;

    /**
     * get num columns.
     * @return rturn the cell.
     */
    unsigned int get_num_columns() const;

    /**
     * get the cell.
     * @return the cells.
     */
    const CellMatrix &get_cells() const { return m_cells; }

    /**
     * setting the cell
     * @param point the point.
     * @param player the playertype.
     * @return return the cell.
     */
    void set_cell(const Point &point , const PlayerTypes player);

    /**
     * check if the point is in the board.
     * @param the point the point.
     * @return return the answer.
     */
    bool is_in_board(const Point &point) const;

    /**
     * count player cells.
     * @param player_type.
     * @retuern count the count of the player cells.
     */
    unsigned int count_player_cells(const PlayerTypes player_type) const;

private:

    CellMatrix m_cells;
};

#endif /* BOARD_H_ */
