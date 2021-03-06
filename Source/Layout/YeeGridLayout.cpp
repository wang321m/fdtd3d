#include "YeeGridLayout.h"

GridCoordinate3D
YeeGridLayout::getExCircuitElement (GridCoordinate3D coord, LayoutDirection dir) const
{
  GridCoordinateFP3D coordFP = convertCoord (coord - minExCoord) + minExCoordFP;

  switch (dir)
  {
    case LayoutDirection::DOWN:
    {
      coordFP = coordFP - GridCoordinateFP3D (0, 0.5, 0);
      coordFP = coordFP - minHzCoordFP;
      break;
    }
    case LayoutDirection::UP:
    {
      coordFP = coordFP + GridCoordinateFP3D (0, 0.5, 0);
      coordFP = coordFP - minHzCoordFP;
      break;
    }
    case LayoutDirection::BACK:
    {
      coordFP = coordFP - GridCoordinateFP3D (0, 0, 0.5);
      coordFP = coordFP - minHyCoordFP;
      break;
    }
    case LayoutDirection::FRONT:
    {
      coordFP = coordFP + GridCoordinateFP3D (0, 0, 0.5);
      coordFP = coordFP - minHyCoordFP;
      break;
    }
    case LayoutDirection::LEFT:
    case LayoutDirection::RIGHT:
    default:
    {
      UNREACHABLE;
    }
  }

  return convertCoord (coordFP);
}

GridCoordinate3D
YeeGridLayout::getEyCircuitElement (GridCoordinate3D coord, LayoutDirection dir) const
{
  GridCoordinateFP3D coordFP = convertCoord (coord - minEyCoord) + minEyCoordFP;

  switch (dir)
  {
    case LayoutDirection::LEFT:
    {
      coordFP = coordFP - GridCoordinateFP3D (0.5, 0, 0);
      coordFP = coordFP - minHzCoordFP;
      break;
    }
    case LayoutDirection::RIGHT:
    {
      coordFP = coordFP + GridCoordinateFP3D (0.5, 0, 0);
      coordFP = coordFP - minHzCoordFP;
      break;
    }
    case LayoutDirection::BACK:
    {
      coordFP = coordFP - GridCoordinateFP3D (0, 0, 0.5);
      coordFP = coordFP - minHxCoordFP;
      break;
    }
    case LayoutDirection::FRONT:
    {
      coordFP = coordFP + GridCoordinateFP3D (0, 0, 0.5);
      coordFP = coordFP - minHxCoordFP;
      break;
    }
    case LayoutDirection::DOWN:
    case LayoutDirection::UP:
    default:
    {
      UNREACHABLE;
    }
  }

  return convertCoord (coordFP);
}

GridCoordinate3D
YeeGridLayout::getEzCircuitElement (GridCoordinate3D coord, LayoutDirection dir) const
{
  GridCoordinateFP3D coordFP = convertCoord (coord - minEzCoord) + minEzCoordFP;

  switch (dir)
  {
    case LayoutDirection::LEFT:
    {
      coordFP = coordFP - GridCoordinateFP3D (0.5, 0, 0);
      coordFP = coordFP - minHyCoordFP;
      break;
    }
    case LayoutDirection::RIGHT:
    {
      coordFP = coordFP + GridCoordinateFP3D (0.5, 0, 0);
      coordFP = coordFP - minHyCoordFP;
      break;
    }
    case LayoutDirection::DOWN:
    {
      coordFP = coordFP - GridCoordinateFP3D (0, 0.5, 0);
      coordFP = coordFP - minHxCoordFP;
      break;
    }
    case LayoutDirection::UP:
    {
      coordFP = coordFP + GridCoordinateFP3D (0, 0.5, 0);
      coordFP = coordFP - minHxCoordFP;
      break;
    }
    case LayoutDirection::BACK:
    case LayoutDirection::FRONT:
    default:
    {
      UNREACHABLE;
    }
  }

  return convertCoord (coordFP);
}

GridCoordinate3D
YeeGridLayout::getHxCircuitElement (GridCoordinate3D coord, LayoutDirection dir) const
{
  GridCoordinateFP3D coordFP = convertCoord (coord - minHxCoord) + minHxCoordFP;

  switch (dir)
  {
    case LayoutDirection::DOWN:
    {
      coordFP = coordFP - GridCoordinateFP3D (0, 0.5, 0);
      coordFP = coordFP - minEzCoordFP;
      break;
    }
    case LayoutDirection::UP:
    {
      coordFP = coordFP + GridCoordinateFP3D (0, 0.5, 0);
      coordFP = coordFP - minEzCoordFP;
      break;
    }
    case LayoutDirection::BACK:
    {
      coordFP = coordFP - GridCoordinateFP3D (0, 0, 0.5);
      coordFP = coordFP - minEyCoordFP;
      break;
    }
    case LayoutDirection::FRONT:
    {
      coordFP = coordFP + GridCoordinateFP3D (0, 0, 0.5);
      coordFP = coordFP - minEyCoordFP;
      break;
    }
    case LayoutDirection::LEFT:
    case LayoutDirection::RIGHT:
    default:
    {
      UNREACHABLE;
    }
  }

  return convertCoord (coordFP);
}

GridCoordinate3D
YeeGridLayout::getHyCircuitElement (GridCoordinate3D coord, LayoutDirection dir) const
{
  GridCoordinateFP3D coordFP = convertCoord (coord - minHyCoord) + minHyCoordFP;

  switch (dir)
  {
    case LayoutDirection::LEFT:
    {
      coordFP = coordFP - GridCoordinateFP3D (0.5, 0, 0);
      coordFP = coordFP - minEzCoordFP;
      break;
    }
    case LayoutDirection::RIGHT:
    {
      coordFP = coordFP + GridCoordinateFP3D (0.5, 0, 0);
      coordFP = coordFP - minEzCoordFP;
      break;
    }
    case LayoutDirection::BACK:
    {
      coordFP = coordFP - GridCoordinateFP3D (0, 0, 0.5);
      coordFP = coordFP - minExCoordFP;
      break;
    }
    case LayoutDirection::FRONT:
    {
      coordFP = coordFP + GridCoordinateFP3D (0, 0, 0.5);
      coordFP = coordFP - minExCoordFP;
      break;
    }
    case LayoutDirection::DOWN:
    case LayoutDirection::UP:
    default:
    {
      UNREACHABLE;
    }
  }

  return convertCoord (coordFP);
}

GridCoordinate3D
YeeGridLayout::getHzCircuitElement (GridCoordinate3D coord, LayoutDirection dir) const
{
  GridCoordinateFP3D coordFP = convertCoord (coord - minHzCoord) + minHzCoordFP;

  switch (dir)
  {
    case LayoutDirection::LEFT:
    {
      coordFP = coordFP - GridCoordinateFP3D (0.5, 0, 0);
      coordFP = coordFP - minEyCoordFP;
      break;
    }
    case LayoutDirection::RIGHT:
    {
      coordFP = coordFP + GridCoordinateFP3D (0.5, 0, 0);
      coordFP = coordFP - minEyCoordFP;
      break;
    }
    case LayoutDirection::DOWN:
    {
      coordFP = coordFP - GridCoordinateFP3D (0, 0.5, 0);
      coordFP = coordFP - minExCoordFP;
      break;
    }
    case LayoutDirection::UP:
    {
      coordFP = coordFP + GridCoordinateFP3D (0, 0.5, 0);
      coordFP = coordFP - minExCoordFP;
      break;
    }
    case LayoutDirection::BACK:
    case LayoutDirection::FRONT:
    default:
    {
      UNREACHABLE;
    }
  }

  return convertCoord (coordFP);
}

GridCoordinate3D
YeeGridLayout::getEpsSize () const
{
  return sizeEps;
}

GridCoordinate3D
YeeGridLayout::getMuSize () const
{
  return sizeEps;
}

GridCoordinate3D
YeeGridLayout::getExSize () const
{
  return sizeEx;
}

GridCoordinate3D
YeeGridLayout::getEySize () const
{
  return sizeEy;
}

GridCoordinate3D
YeeGridLayout::getEzSize () const
{
  return sizeEz;
}

GridCoordinate3D
YeeGridLayout::getHxSize () const
{
  return sizeHx;
}

GridCoordinate3D
YeeGridLayout::getHySize () const
{
  return sizeHy;
}

GridCoordinate3D
YeeGridLayout::getHzSize () const
{
  return sizeHz;
}

GridCoordinate3D
YeeGridLayout::getExStartDiff () const
{
  return minExCoord + GridCoordinate3D (0, 1, 1);
}

GridCoordinate3D
YeeGridLayout::getEyStartDiff () const
{
  return minEyCoord + GridCoordinate3D (1, 0, 1);
}

GridCoordinate3D
YeeGridLayout::getEzStartDiff () const
{
  return minEzCoord + GridCoordinate3D (1, 1, 0);
}

GridCoordinate3D
YeeGridLayout::getHxStartDiff () const
{
  return minHxCoord + GridCoordinate3D (1, 0, 0);
}

GridCoordinate3D
YeeGridLayout::getHyStartDiff () const
{
  return minHyCoord + GridCoordinate3D (0, 1, 0);
}

GridCoordinate3D
YeeGridLayout::getHzStartDiff () const
{
  return minHzCoord + GridCoordinate3D (0, 0, 1);
}


GridCoordinate3D
YeeGridLayout::getExEndDiff () const
{
  return - minExCoord + GridCoordinate3D (1, 0, 0);
}

GridCoordinate3D
YeeGridLayout::getEyEndDiff () const
{
  return - minEyCoord + GridCoordinate3D (0, 1, 0);
}

GridCoordinate3D
YeeGridLayout::getEzEndDiff () const
{
  return  - minEzCoord + GridCoordinate3D (0, 0, 1);
}

GridCoordinate3D
YeeGridLayout::getHxEndDiff () const
{
  return - minHxCoord + GridCoordinate3D (0, 1, 1);
}

GridCoordinate3D
YeeGridLayout::getHyEndDiff () const
{
  return - minHyCoord + GridCoordinate3D (1, 0, 1);
}

GridCoordinate3D
YeeGridLayout::getHzEndDiff () const
{
  return - minHzCoord + GridCoordinate3D (1, 1, 0);
}

GridCoordinate3D
YeeGridLayout::getZeroCoord () const
{
  return zeroCoord;
}

GridCoordinate3D
YeeGridLayout::getMinEpsCoord () const
{
  return minEpsCoord;
}

GridCoordinate3D
YeeGridLayout::getMinMuCoord () const
{
  return minMuCoord;
}

GridCoordinate3D
YeeGridLayout::getMinExCoord () const
{
  return minExCoord;
}

GridCoordinate3D
YeeGridLayout::getMinEyCoord () const
{
  return minEyCoord;
}

GridCoordinate3D
YeeGridLayout::getMinEzCoord () const
{
  return minEzCoord;
}

GridCoordinate3D
YeeGridLayout::getMinHxCoord () const
{
  return minHxCoord;
}

GridCoordinate3D
YeeGridLayout::getMinHyCoord () const
{
  return minHyCoord;
}

GridCoordinate3D
YeeGridLayout::getMinHzCoord () const
{
  return minHzCoord;
}

GridCoordinateFP3D
YeeGridLayout::getZeroCoordFP () const
{
  return zeroCoordFP;
}

GridCoordinateFP3D
YeeGridLayout::getMinEpsCoordFP () const
{
  return minEpsCoordFP;
}

GridCoordinateFP3D
YeeGridLayout::getMinMuCoordFP () const
{
  return minMuCoordFP;
}

GridCoordinateFP3D
YeeGridLayout::getMinExCoordFP () const
{
  return minExCoordFP;
}

GridCoordinateFP3D
YeeGridLayout::getMinEyCoordFP () const
{
  return minEyCoordFP;
}

GridCoordinateFP3D
YeeGridLayout::getMinEzCoordFP () const
{
  return minEzCoordFP;
}

GridCoordinateFP3D
YeeGridLayout::getMinHxCoordFP () const
{
  return minHxCoordFP;
}

GridCoordinateFP3D
YeeGridLayout::getMinHyCoordFP () const
{
  return minHyCoordFP;
}

GridCoordinateFP3D
YeeGridLayout::getMinHzCoordFP () const
{
  return minHzCoordFP;
}

GridCoordinateFP3D
YeeGridLayout::getEpsCoordFP (GridCoordinate3D coord) const
{
  return convertCoord (coord - minEpsCoord) + minEpsCoordFP;
}

GridCoordinateFP3D
YeeGridLayout::getMuCoordFP (GridCoordinate3D coord) const
{
  return convertCoord (coord - minMuCoord) + minMuCoordFP;
}

GridCoordinateFP3D
YeeGridLayout::getExCoordFP (GridCoordinate3D coord) const
{
  return convertCoord (coord - minExCoord) + minExCoordFP;
}

GridCoordinateFP3D
YeeGridLayout::getEyCoordFP (GridCoordinate3D coord) const
{
  return convertCoord (coord - minEyCoord) + minEyCoordFP;
}

GridCoordinateFP3D
YeeGridLayout::getEzCoordFP (GridCoordinate3D coord) const
{
  return convertCoord (coord - minEzCoord) + minEzCoordFP;
}

GridCoordinateFP3D
YeeGridLayout::getHxCoordFP (GridCoordinate3D coord) const
{
  return convertCoord (coord - minHxCoord) + minHxCoordFP;
}

GridCoordinateFP3D
YeeGridLayout::getHyCoordFP (GridCoordinate3D coord) const
{
  return convertCoord (coord - minHyCoord) + minHyCoordFP;
}

GridCoordinateFP3D
YeeGridLayout::getHzCoordFP (GridCoordinate3D coord) const
{
  return convertCoord (coord - minHzCoord) + minHzCoordFP;
}

GridCoordinate3D
YeeGridLayout::getEpsCoord (GridCoordinateFP3D coord) const
{
  return convertCoord (coord - minEpsCoordFP) + minEpsCoord;
}

GridCoordinate3D
YeeGridLayout::getMuCoord (GridCoordinateFP3D coord) const
{
  return convertCoord (coord - minMuCoordFP) + minMuCoord;
}

GridCoordinate3D
YeeGridLayout::getExCoord (GridCoordinateFP3D coord) const
{
  return convertCoord (coord - minExCoordFP) + minExCoord;
}

GridCoordinate3D
YeeGridLayout::getEyCoord (GridCoordinateFP3D coord) const
{
  return convertCoord (coord - minEyCoordFP) + minEyCoord;
}

GridCoordinate3D
YeeGridLayout::getEzCoord (GridCoordinateFP3D coord) const
{
  return convertCoord (coord - minEzCoordFP) + minEzCoord;
}

GridCoordinate3D
YeeGridLayout::getHxCoord (GridCoordinateFP3D coord) const
{
  return convertCoord (coord - minHxCoordFP) + minHxCoord;
}

GridCoordinate3D
YeeGridLayout::getHyCoord (GridCoordinateFP3D coord) const
{
  return convertCoord (coord - minHyCoordFP) + minHyCoord;
}

GridCoordinate3D
YeeGridLayout::getHzCoord (GridCoordinateFP3D coord) const
{
  return convertCoord (coord - minHzCoordFP) + minHzCoord;
}

GridCoordinate3D
YeeGridLayout::getLeftBorderPML () const
{
  return leftBorderPML;
}

GridCoordinate3D
YeeGridLayout::getRightBorderPML () const
{
  return rightBorderPML;
}

GridCoordinate3D
YeeGridLayout::getLeftBorderTFSF () const
{
  return leftBorderTotalField;
}

GridCoordinate3D
YeeGridLayout::getRightBorderTFSF () const
{
  return rightBorderTotalField;
}

GridCoordinateFP3D
YeeGridLayout::getZeroIncCoordFP () const
{
  return zeroIncCoordFP;
}

bool
YeeGridLayout::isInPML (GridCoordinateFP3D realCoordFP) const
{
  GridCoordinateFP3D coordLeftBorderPMLFP = convertCoord (leftBorderPML) + zeroCoordFP;
  GridCoordinateFP3D coordRightBorderPMLFP = convertCoord (rightBorderPML) + zeroCoordFP;

  /*
   * FIXME: remove floating point equality comparison
   */
  bool isInXPML = coordLeftBorderPMLFP.getX () != coordRightBorderPMLFP.getX ()
                  && (realCoordFP.getX () < coordLeftBorderPMLFP.getX ()
                      || realCoordFP.getX () >= coordRightBorderPMLFP.getX ());

  bool isInYPML = coordLeftBorderPMLFP.getY () != coordRightBorderPMLFP.getY ()
                  && (realCoordFP.getY () < coordLeftBorderPMLFP.getY ()
                      || realCoordFP.getY () >= coordRightBorderPMLFP.getY ());

  bool isInZPML = coordLeftBorderPMLFP.getZ () != coordRightBorderPMLFP.getZ ()
                  && (realCoordFP.getZ () < coordLeftBorderPMLFP.getZ ()
                      || realCoordFP.getZ () >= coordRightBorderPMLFP.getZ ());

  return isInXPML || isInYPML || isInZPML;
}

bool
YeeGridLayout::isExInPML (GridCoordinate3D coord) const
{
  GridCoordinateFP3D coordFP = getExCoordFP (coord);

  return isInPML (coordFP);
}

bool
YeeGridLayout::isEyInPML (GridCoordinate3D coord) const
{
  GridCoordinateFP3D coordFP = getEyCoordFP (coord);

  return isInPML (coordFP);
}

bool
YeeGridLayout::isEzInPML (GridCoordinate3D coord) const
{
  GridCoordinateFP3D coordFP = getEzCoordFP (coord);

  return isInPML (coordFP);
}

bool
YeeGridLayout::isHxInPML (GridCoordinate3D coord) const
{
  GridCoordinateFP3D coordFP = getHxCoordFP (coord);

  return isInPML (coordFP);
}

bool
YeeGridLayout::isHyInPML (GridCoordinate3D coord) const
{
  GridCoordinateFP3D coordFP = getHyCoordFP (coord);

  return isInPML (coordFP);
}

bool
YeeGridLayout::isHzInPML (GridCoordinate3D coord) const
{
  GridCoordinateFP3D coordFP = getHzCoordFP (coord);

  return isInPML (coordFP);
}

bool
YeeGridLayout::doNeedTFSFUpdateExBorder (GridCoordinate3D coord, LayoutDirection dir, bool is3Dim) const
{
  GridCoordinateFP3D coordFP = getExCoordFP (coord);

  GridCoordinateFP3D leftBorderFP = zeroCoordFP + convertCoord (leftBorderTotalField);
  GridCoordinateFP3D rightBorderFP = zeroCoordFP + convertCoord (rightBorderTotalField);

  switch (dir)
  {
    case LayoutDirection::LEFT:
    case LayoutDirection::RIGHT:
    {
      UNREACHABLE;

      break;
    }
    case LayoutDirection::DOWN:
    {
      if (coordFP.getX () > leftBorderFP.getX () - 0.5 && coordFP.getX () < rightBorderFP.getX () + 0.5
          && coordFP.getY () > leftBorderFP.getY () - 1 && coordFP.getY () < leftBorderFP.getY ())
      {
        if (!is3Dim
            || (is3Dim && (coordFP.getZ () > leftBorderFP.getZ () && coordFP.getZ () < rightBorderFP.getZ ())))
        {
          return true;
        }
      }

      break;
    }
    case LayoutDirection::UP:
    {
      if (coordFP.getX () > leftBorderFP.getX () - 0.5 && coordFP.getX () < rightBorderFP.getX () + 0.5
          && coordFP.getY () > rightBorderFP.getY () && coordFP.getY () < rightBorderFP.getY () + 1)
      {
        if (!is3Dim
            || (is3Dim && (coordFP.getZ () > leftBorderFP.getZ () && coordFP.getZ () < rightBorderFP.getZ ())))
        {
          return true;
        }
      }

      break;
    }
    case LayoutDirection::BACK:
    {
      ASSERT (is3Dim);

      if (coordFP.getX () > leftBorderFP.getX () - 0.5 && coordFP.getX () < rightBorderFP.getX () + 0.5
          && coordFP.getY () > leftBorderFP.getY () && coordFP.getY () < rightBorderFP.getY ()
          && coordFP.getZ () > leftBorderFP.getZ () - 1 && coordFP.getZ () < leftBorderFP.getZ ())
      {
        return true;
      }

      break;
    }
    case LayoutDirection::FRONT:
    {
      ASSERT (is3Dim);

      if (coordFP.getX () > leftBorderFP.getX () - 0.5 && coordFP.getX () < rightBorderFP.getX () + 0.5
          && coordFP.getY () > leftBorderFP.getY () && coordFP.getY () < rightBorderFP.getY ()
          && coordFP.getZ () > rightBorderFP.getZ () && coordFP.getZ () < rightBorderFP.getZ () + 1)
      {
        return true;
      }

      break;
    }
    default:
    {
      UNREACHABLE;
    }
  }

  return false;
}

bool
YeeGridLayout::doNeedTFSFUpdateEyBorder (GridCoordinate3D coord, LayoutDirection dir, bool is3Dim) const
{
  GridCoordinateFP3D coordFP = getEyCoordFP (coord);

  GridCoordinateFP3D leftBorderFP = zeroCoordFP + convertCoord (leftBorderTotalField);
  GridCoordinateFP3D rightBorderFP = zeroCoordFP + convertCoord (rightBorderTotalField);

  switch (dir)
  {
    case LayoutDirection::LEFT:
    {
      if (coordFP.getX () > leftBorderFP.getX () - 1 && coordFP.getX () < leftBorderFP.getX ()
          && coordFP.getY () > leftBorderFP.getY () - 0.5 && coordFP.getY () < rightBorderFP.getY () + 0.5)
      {
        if (!is3Dim
            || (is3Dim && (coordFP.getZ () > leftBorderFP.getZ () && coordFP.getZ () < rightBorderFP.getZ ())))
        {
          return true;
        }
      }

      break;
    }
    case LayoutDirection::RIGHT:
    {
      if (coordFP.getX () > rightBorderFP.getX () && coordFP.getX () < rightBorderFP.getX () + 1
          && coordFP.getY () > leftBorderFP.getY () - 0.5 && coordFP.getY () < rightBorderFP.getY () + 0.5)
      {
        if (!is3Dim
            || (is3Dim && (coordFP.getZ () > leftBorderFP.getZ () && coordFP.getZ () < rightBorderFP.getZ ())))
        {
          return true;
        }
      }

      break;
    }
    case LayoutDirection::DOWN:
    case LayoutDirection::UP:
    {
      UNREACHABLE;

      break;
    }
    case LayoutDirection::BACK:
    {
      ASSERT (is3Dim);

      if (coordFP.getX () > leftBorderFP.getX () && coordFP.getX () < rightBorderFP.getX ()
          && coordFP.getY () > leftBorderFP.getY () - 0.5 && coordFP.getY () < rightBorderFP.getY () + 0.5
          && coordFP.getZ () > leftBorderFP.getZ () - 1 && coordFP.getZ () < leftBorderFP.getZ ())
      {
        return true;
      }

      break;
    }
    case LayoutDirection::FRONT:
    {
      ASSERT (is3Dim);

      if (coordFP.getX () > leftBorderFP.getX () && coordFP.getX () < rightBorderFP.getX ()
          && coordFP.getY () > leftBorderFP.getY () - 0.5 && coordFP.getY () < rightBorderFP.getY () + 0.5
          && coordFP.getZ () > rightBorderFP.getZ () && coordFP.getZ () < rightBorderFP.getZ () + 1)
      {
        return true;
      }

      break;
    }
    default:
    {
      UNREACHABLE;
    }
  }

  return false;
}

bool
YeeGridLayout::doNeedTFSFUpdateEzBorder (GridCoordinate3D coord, LayoutDirection dir, bool is3Dim) const
{
  GridCoordinateFP3D coordFP = getEzCoordFP (coord);

  GridCoordinateFP3D leftBorderFP = zeroCoordFP + convertCoord (leftBorderTotalField);
  GridCoordinateFP3D rightBorderFP = zeroCoordFP + convertCoord (rightBorderTotalField);

  switch (dir)
  {
    case LayoutDirection::LEFT:
    {
      if (coordFP.getX () > leftBorderFP.getX () - 1 && coordFP.getX () < leftBorderFP.getX ()
          && coordFP.getY () > leftBorderFP.getY () && coordFP.getY () < rightBorderFP.getY ())
      {
        if (!is3Dim
            || (is3Dim && (coordFP.getZ () > leftBorderFP.getZ () - 0.5 && coordFP.getZ () < rightBorderFP.getZ () + 0.5)))
        {
          return true;
        }
      }

      break;
    }
    case LayoutDirection::RIGHT:
    {
      if (coordFP.getX () > rightBorderFP.getX () && coordFP.getX () < rightBorderFP.getX () + 1
          && coordFP.getY () > leftBorderFP.getY () && coordFP.getY () < rightBorderFP.getY ())
      {
        if (!is3Dim
            || (is3Dim && (coordFP.getZ () > leftBorderFP.getZ () - 0.5 && coordFP.getZ () < rightBorderFP.getZ () + 0.5)))
        {
          return true;
        }
      }

      break;
    }
    case LayoutDirection::DOWN:
    {
      if (coordFP.getX () > leftBorderFP.getX () && coordFP.getX () < rightBorderFP.getX ()
          && coordFP.getY () > leftBorderFP.getY () - 1 && coordFP.getY () < leftBorderFP.getY ())
      {
        if (!is3Dim
            || (is3Dim && (coordFP.getZ () > leftBorderFP.getZ () - 0.5 && coordFP.getZ () < rightBorderFP.getZ () + 0.5)))
        {
          return true;
        }
      }

      break;
    }
    case LayoutDirection::UP:
    {
      if (coordFP.getX () > leftBorderFP.getX () && coordFP.getX () < rightBorderFP.getX ()
          && coordFP.getY () > rightBorderFP.getY () && coordFP.getY () < rightBorderFP.getY () + 1)
      {
        if (!is3Dim
            || (is3Dim && (coordFP.getZ () > leftBorderFP.getZ () - 0.5 && coordFP.getZ () < rightBorderFP.getZ () + 0.5)))
        {
          return true;
        }
      }

      break;
    }
    case LayoutDirection::BACK:
    case LayoutDirection::FRONT:
    {
      UNREACHABLE;

      break;
    }
    default:
    {
      UNREACHABLE;
    }
  }

  return false;
}

bool
YeeGridLayout::doNeedTFSFUpdateHxBorder (GridCoordinate3D coord, LayoutDirection dir, bool is3Dim) const
{
  GridCoordinateFP3D coordFP = getHxCoordFP (coord);

  GridCoordinateFP3D leftBorderFP = zeroCoordFP + convertCoord (leftBorderTotalField);
  GridCoordinateFP3D rightBorderFP = zeroCoordFP + convertCoord (rightBorderTotalField);

  switch (dir)
  {
    case LayoutDirection::LEFT:
    case LayoutDirection::RIGHT:
    {
      UNREACHABLE;

      break;
    }
    case LayoutDirection::DOWN:
    {
      if (coordFP.getX () > leftBorderFP.getX () && coordFP.getX () < rightBorderFP.getX ()
          && coordFP.getY () > leftBorderFP.getY () - 0.5 && coordFP.getY () < leftBorderFP.getY () + 0.5)
      {
        if (!is3Dim
            || (is3Dim && (coordFP.getZ () > leftBorderFP.getZ () - 0.5 && coordFP.getZ () < rightBorderFP.getZ () + 0.5)))
        {
          return true;
        }
      }

      break;
    }
    case LayoutDirection::UP:
    {
      if (coordFP.getX () > leftBorderFP.getX () && coordFP.getX () < rightBorderFP.getX ()
          && coordFP.getY () > rightBorderFP.getY () - 0.5 && coordFP.getY () < rightBorderFP.getY () + 0.5)
      {
        if (!is3Dim
            || (is3Dim && (coordFP.getZ () > leftBorderFP.getZ () - 0.5 && coordFP.getZ () < rightBorderFP.getZ () + 0.5)))
        {
          return true;
        }
      }

      break;
    }
    case LayoutDirection::BACK:
    {
      ASSERT (is3Dim);

      if (coordFP.getX () > leftBorderFP.getX () && coordFP.getX () < rightBorderFP.getX ()
          && coordFP.getY () > leftBorderFP.getY () - 0.5 && coordFP.getY () < rightBorderFP.getY () + 0.5
          && coordFP.getZ () > leftBorderFP.getZ () - 0.5 && coordFP.getZ () < leftBorderFP.getZ () + 0.5)
      {
        return true;
      }

      break;
    }
    case LayoutDirection::FRONT:
    {
      ASSERT (is3Dim);

      if (coordFP.getX () > leftBorderFP.getX () && coordFP.getX () < rightBorderFP.getX ()
          && coordFP.getY () > leftBorderFP.getY () - 0.5 && coordFP.getY () < rightBorderFP.getY () + 0.5
          && coordFP.getZ () > rightBorderFP.getZ () - 0.5 && coordFP.getZ () < rightBorderFP.getZ () + 0.5)
      {
        return true;
      }

      break;
    }
    default:
    {
      UNREACHABLE;
    }
  }

  return false;
}

bool
YeeGridLayout::doNeedTFSFUpdateHyBorder (GridCoordinate3D coord, LayoutDirection dir, bool is3Dim) const
{
  GridCoordinateFP3D coordFP = getHyCoordFP (coord);

  GridCoordinateFP3D leftBorderFP = zeroCoordFP + convertCoord (leftBorderTotalField);
  GridCoordinateFP3D rightBorderFP = zeroCoordFP + convertCoord (rightBorderTotalField);

  switch (dir)
  {
    case LayoutDirection::LEFT:
    {
      if (coordFP.getX () > leftBorderFP.getX () - 0.5 && coordFP.getX () < leftBorderFP.getX () + 0.5
          && coordFP.getY () > leftBorderFP.getY () && coordFP.getY () < rightBorderFP.getY ())
      {
        if (!is3Dim
            || (is3Dim && (coordFP.getZ () > leftBorderFP.getZ () - 0.5 && coordFP.getZ () < rightBorderFP.getZ () + 0.5)))
        {
          return true;
        }
      }

      break;
    }
    case LayoutDirection::RIGHT:
    {
      if (coordFP.getX () > rightBorderFP.getX () - 0.5 && coordFP.getX () < rightBorderFP.getX () + 0.5
          && coordFP.getY () > leftBorderFP.getY () && coordFP.getY () < rightBorderFP.getY ())
      {
        if (!is3Dim
            || (is3Dim && (coordFP.getZ () > leftBorderFP.getZ () - 0.5 && coordFP.getZ () < rightBorderFP.getZ () + 0.5)))
        {
          return true;
        }
      }

      break;
    }
    case LayoutDirection::DOWN:
    case LayoutDirection::UP:
    {
      UNREACHABLE;

      break;
    }
    case LayoutDirection::BACK:
    {
      ASSERT (is3Dim);

      if (coordFP.getX () > leftBorderFP.getX () - 0.5 && coordFP.getX () < rightBorderFP.getX () + 0.5
          && coordFP.getY () > leftBorderFP.getY () && coordFP.getY () < rightBorderFP.getY ()
          && coordFP.getZ () > leftBorderFP.getZ () - 0.5 && coordFP.getZ () < leftBorderFP.getZ () + 0.5)
      {
        return true;
      }

      break;
    }
    case LayoutDirection::FRONT:
    {
      ASSERT (is3Dim);

      if (coordFP.getX () > leftBorderFP.getX () - 0.5 && coordFP.getX () < rightBorderFP.getX () + 0.5
          && coordFP.getY () > leftBorderFP.getY () && coordFP.getY () < rightBorderFP.getY ()
          && coordFP.getZ () > rightBorderFP.getZ () - 0.5 && coordFP.getZ () < rightBorderFP.getZ () + 0.5)
      {
        return true;
      }

      break;
    }
    default:
    {
      UNREACHABLE;
    }
  }

  return false;
}

bool
YeeGridLayout::doNeedTFSFUpdateHzBorder (GridCoordinate3D coord, LayoutDirection dir, bool is3Dim) const
{
  GridCoordinateFP3D coordFP = getHzCoordFP (coord);

  GridCoordinateFP3D leftBorderFP = zeroCoordFP + convertCoord (leftBorderTotalField);
  GridCoordinateFP3D rightBorderFP = zeroCoordFP + convertCoord (rightBorderTotalField);

  switch (dir)
  {
    case LayoutDirection::LEFT:
    {
      if (coordFP.getX () > leftBorderFP.getX () - 0.5 && coordFP.getX () < leftBorderFP.getX () + 0.5
          && coordFP.getY () > leftBorderFP.getY () - 0.5 && coordFP.getY () < rightBorderFP.getY () + 0.5)
      {
        if (!is3Dim
            || (is3Dim && (coordFP.getZ () > leftBorderFP.getZ () && coordFP.getZ () < rightBorderFP.getZ ())))
        {
          return true;
        }
      }

      break;
    }
    case LayoutDirection::RIGHT:
    {
      if (coordFP.getX () > rightBorderFP.getX () - 0.5 && coordFP.getX () < rightBorderFP.getX () + 0.5
          && coordFP.getY () > leftBorderFP.getY () - 0.5 && coordFP.getY () < rightBorderFP.getY () + 0.5)
      {
        if (!is3Dim
            || (is3Dim && (coordFP.getZ () > leftBorderFP.getZ () && coordFP.getZ () < rightBorderFP.getZ ())))
        {
          return true;
        }
      }

      break;
    }
    case LayoutDirection::DOWN:
    {
      if (coordFP.getX () > leftBorderFP.getX () - 0.5 && coordFP.getX () < rightBorderFP.getX () + 0.5
          && coordFP.getY () > leftBorderFP.getY () - 0.5 && coordFP.getY () < leftBorderFP.getY () + 0.5)
      {
        if (!is3Dim
            || (is3Dim && (coordFP.getZ () > leftBorderFP.getZ () && coordFP.getZ () < rightBorderFP.getZ ())))
        {
          return true;
        }
      }

      break;
    }
    case LayoutDirection::UP:
    {
      if (coordFP.getX () > leftBorderFP.getX () - 0.5 && coordFP.getX () < rightBorderFP.getX () + 0.5
          && coordFP.getY () > rightBorderFP.getY () - 0.5 && coordFP.getY () < rightBorderFP.getY () + 0.5)
      {
        if (!is3Dim
            || (is3Dim && (coordFP.getZ () > leftBorderFP.getZ () && coordFP.getZ () < rightBorderFP.getZ ())))
        {
          return true;
        }
      }

      break;
    }
    case LayoutDirection::BACK:
    case LayoutDirection::FRONT:
    {
      UNREACHABLE;

      break;
    }
    default:
    {
      UNREACHABLE;
    }
  }

  return false;
}

GridCoordinate3D
YeeGridLayout::getSizePML () const
{
  return leftBorderPML;
}

GridCoordinate3D
YeeGridLayout::getSizeTFSF () const
{
  return leftBorderTotalField;
}

FPValue
YeeGridLayout::getIncidentWaveAngle1 () const
{
  return incidentWaveAngle1;
}

FPValue
YeeGridLayout::getIncidentWaveAngle2 () const
{
  return incidentWaveAngle2;
}

FPValue
YeeGridLayout::getIncidentWaveAngle3 () const
{
  return incidentWaveAngle3;
}

FieldValue
YeeGridLayout::getExFromIncidentE (FieldValue valE) const
{
  return valE * (FPValue) (cos (incidentWaveAngle3) * sin (incidentWaveAngle2) - sin (incidentWaveAngle3) * cos (incidentWaveAngle1) * cos (incidentWaveAngle2));
}

FieldValue
YeeGridLayout::getEyFromIncidentE (FieldValue valE) const
{
  return valE * (FPValue) ( - cos (incidentWaveAngle3) * cos (incidentWaveAngle2) - sin (incidentWaveAngle3) * cos (incidentWaveAngle1) * sin (incidentWaveAngle2));
}

FieldValue
YeeGridLayout::getEzFromIncidentE (FieldValue valE) const
{
  return valE * (FPValue) (sin (incidentWaveAngle3) * sin (incidentWaveAngle1));
}

FieldValue
YeeGridLayout::getHxFromIncidentH (FieldValue valH) const
{
  return valH * (FPValue) (sin (incidentWaveAngle3) * sin (incidentWaveAngle2) + cos (incidentWaveAngle3) * cos (incidentWaveAngle1) * cos (incidentWaveAngle2));
}

FieldValue
YeeGridLayout::getHyFromIncidentH (FieldValue valH) const
{
  return valH * (FPValue) (- sin (incidentWaveAngle3) * cos (incidentWaveAngle2) + cos (incidentWaveAngle3) * cos (incidentWaveAngle1) * sin (incidentWaveAngle2));
}

FieldValue
YeeGridLayout::getHzFromIncidentH (FieldValue valH) const
{
  return - valH * (FPValue) (cos (incidentWaveAngle3) * sin (incidentWaveAngle1));
}
