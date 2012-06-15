/* ----------------------------------------------------------------------
   LIGGGHTS - LAMMPS Improved for General Granular and Granular Heat
   Transfer Simulations

   LIGGGHTS is part of the CFDEMproject
   www.liggghts.com | www.cfdem.com

   Christoph Kloss, christoph.kloss@cfdem.com
   Copyright 2009-2012 JKU Linz
   Copyright 2012-     DCS Computing GmbH, Linz

   LIGGGHTS is based on LAMMPS
   LAMMPS - Large-scale Atomic/Molecular Massively Parallel Simulator
   http://lammps.sandia.gov, Sandia National Laboratories
   Steve Plimpton, sjplimp@sandia.gov

   This software is distributed under the GNU General Public License.

   See the README file in the top-level directory.
------------------------------------------------------------------------- */

#ifdef FIX_CLASS

FixStyle(insert/rate/region,FixInsertRateRegion)

#else

#ifndef LMP_FIX_INSERT_RATE_REGION_H
#define LMP_FIX_INSERT_RATE_REGION_H

#include "fix_insert_pack.h"

namespace LAMMPS_NS {

class FixInsertRateRegion : public FixInsertPack  {
 public:

  FixInsertRateRegion(class LAMMPS *, int, char **);
  ~FixInsertRateRegion();

 protected:

  virtual void calc_insertion_properties();
  virtual int calc_ninsert_this();
};

}

#endif
#endif