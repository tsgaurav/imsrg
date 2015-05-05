
#ifndef Generator_hh
#define Generator_hh 1

#include "ModelSpace.hh"
#include "Operator.hh"


class Generator
{
 public:

  string generator_type;
  Operator * H;
  Operator * Eta;
  ModelSpace * modelspace;

  Generator();
  void SetType(string g){generator_type = g;};
  void Update(Operator* H, Operator* Eta);

 private:
  void ConstructGenerator_Wegner();
  void ConstructGenerator_White();
  void ConstructGenerator_Atan();
  void ConstructGenerator_ShellModel();
  void ConstructGenerator_ShellModel_Atan();
  void ConstructGenerator_HartreeFock();
  double Get1bDenominator(int i, int j);
  double Get2bDenominator(int ch, int ibra, int iket);

};

#endif
