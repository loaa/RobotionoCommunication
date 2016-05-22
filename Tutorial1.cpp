/******************************************************************************/
/***   Includes                                                             ***/
/******************************************************************************/
#include "Tutorial1.h"
#include "Grid.h"
#include "Point.h"
/******************************************************************************/
/***  Implementation of class Counter                                       ***/
/******************************************************************************/
//Tutorial1::Tutorial1 (plugin::simulation::UnitDelegate& del)
//: plugin::simulation::Unit(del, plugin::simulation::Deterministic)
//{
//}

//void Tutorial1::step (void)
//{

//}
Grid grids[4][8];
void Tutorial1::GridDivision() {
	for (int m =0; m<3; m++) {   // the x axis
		for (int n = 0; n < 7; n++) {  //the y axis
			grids[m][n].setXLower(272 * (m));
			grids[m][n].setXUpper(272 * (m + 1));
			grids[m][n].setYLower(272 * (n));
			grids[m][n].setYUpper(272 * (n + 1));
			double xmid = ((grids[m][n].getXUpper() - grids[m][n].getXLower()) / 2) + (272* m);
			double ymid = ((grids[m][n].getYUpper() - grids[m][n].getYLower()) / 2) + (272* n);
			grids[m][n].midpoint.setX(xmid);
			grids[m][n].midpoint.setY(ymid);
			grids[m][n].setXCoord(m);
			grids[m][n].setYCoord(n);
			// cout << "!!!!!! grid : " << grids[m][n].midpoint.getX() << " and " << grids[m][n].midpoint.getY() << endl;
			//  cout << grids[m][n].getG_id()<< endl;

		}
	}
}

int main(){

}

