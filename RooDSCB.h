/*****************************************************************************
 * Project: RooFit                                                           *
 *                                                                           *
 * This code was autogenerated by RooClassFactory                            *
 *****************************************************************************/

#ifndef RooDSCB_hpp
#define RooDSCB_hpp

#include "RooAbsPdf.h"
#include "RooRealProxy.h"
#include "RooCategoryProxy.h"
#include "RooAbsReal.h"
#include "RooAbsCategory.h"

#define _AN_INT_

class RooDSCB : public RooAbsPdf {
public:
  RooDSCB() {} ;
  RooDSCB(const char *name, const char *title,
               RooAbsReal& _x,
               RooAbsReal& _mu,
               RooAbsReal& _sig,
               RooAbsReal& _a1,
               RooAbsReal& _n1,
               RooAbsReal& _a2,
               RooAbsReal& _n2);
  RooDSCB(const RooDSCB& other, const char* name=0) ;
  virtual TObject* clone(const char* newname) const { return new RooDSCB(*this,newname); }
  inline virtual ~RooDSCB() { }
#ifdef _AN_INT_
  virtual Int_t getAnalyticalIntegral(RooArgSet& allVars, RooArgSet& analVars, const char* r=0) const;
  virtual Double_t analyticalIntegral(Int_t code,const char* rangeName=0) const;
#endif
protected:
  double IntGaus(double x) const;
  double IntPwLw(double x, double alpha, double n) const;
  
  RooRealProxy x ;
  RooRealProxy mu ;
  RooRealProxy sig ;
  RooRealProxy a1 ;
  RooRealProxy n1 ;
  RooRealProxy a2 ;
  RooRealProxy n2 ;
  
  Double_t evaluate() const ;
  
private:
  
  ClassDef(RooDSCB,1) // Your description goes here...
};

#endif /* RooDSCB_hpp */