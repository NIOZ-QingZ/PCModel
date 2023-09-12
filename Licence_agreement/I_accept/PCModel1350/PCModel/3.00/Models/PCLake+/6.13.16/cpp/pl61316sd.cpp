_dDepthW_ = _vTranDepthW_ + _vDeltaW_ + _vDredDepthW_;
_dNH4W_ = _wNTranNH4W_ + _wNAbioNH4W_ + _wNPrimNH4W_ + _wNBedNH4W_ + _wNWebNH4W_ + _cNBackLoad_ / _sDepthW_ - _aRelDeltaW_ * _sNH4W_ - _wNExchNH4_;
_dNO3W_ = _wNTranNO3W_ + _wNAbioNO3W_ + _wNPrimNO3W_ + _wNBedNO3W_ + _wNWebNO3W_ - _aRelDeltaW_ * _sNO3W_ - _wNExchNO3_;
_dPO4W_ = _wPTranPO4W_ + _wPAbioPO4W_ + _wPPrimPO4W_ + _wPBedPO4W_ + _wPWebPO4W_ + _cPBackLoad_ / _sDepthW_ - _aRelDeltaW_ * _sPO4W_ - _wPExchPO4_;
_dPAIMW_ = _wPTranAIMW_ + _wPAbioAIMW_ - _aRelDeltaW_ * _sPAIMW_ - _wPExchAIM_;
_dSiO2W_ = _wSiTranSiO2_ + _wSiAbioSiO2W_ + _wSiPrimSiO2W_ - _aRelDeltaW_ * _sSiO2W_ - _wSiExchSiO2_;
_dO2W_ = _wO2TranW_ + _wO2AbioW_ + _wO2PrimW_ + _tO2BedW_ / _sDepthW_ - _aRelDeltaW_ * _sO2W_ - _wO2Exch_;
_dDDetW_ = _wDTranDetW_ + _wDAbioDetW_ + _wDPrimDetW_ + _wDBedDetW_ + _wDWebDetW_ - _aRelDeltaW_ * _sDDetW_ - _wDExchDet_;
_dNDetW_ = _wNTranDetW_ + _wNAbioDetW_ + _wNPrimDetW_ + _wNBedDetW_ + _wNWebDetW_ - _aRelDeltaW_ * _sNDetW_ - _wNExchDet_;
_dPDetW_ = _wPTranDetW_ + _wPAbioDetW_ + _wPPrimDetW_ + _wPBedDetW_ + _wPWebDetW_ - _aRelDeltaW_ * _sPDetW_ - _wPExchDet_;
_dSiDetW_ = _wSiTranDetW_ + _wSiAbioDetW_ + _wSiPrimDetW_ + _wSiWebDetW_ - _aRelDeltaW_ * _sSiDetW_ - _wSiExchDet_;
_dDIMW_ = _wDTranIMW_ + _wDAbioIMW_ - _aRelDeltaW_ * _sDIMW_ - _wDExchIM_;
_dDDiatW_ = _wDTranDiat_ + _wDPrimDiatW_ + _wDWebDiatW_ - _aRelDeltaW_ * _sDDiatW_ - _wDExchDiat_;
_dNDiatW_ = _wNTranDiat_ + _wNPrimDiatW_ + _wNWebDiatW_ - _aRelDeltaW_ * _sNDiatW_ - _wNExchDiat_;
_dPDiatW_ = _wPTranDiat_ + _wPPrimDiatW_ + _wPWebDiatW_ - _aRelDeltaW_ * _sPDiatW_ - _wPExchDiat_;
_dDGrenW_ = _wDTranGren_ + _wDPrimGrenW_ + _wDWebGrenW_ - _aRelDeltaW_ * _sDGrenW_ - _wDExchGren_;
_dNGrenW_ = _wNTranGren_ + _wNPrimGrenW_ + _wNWebGrenW_ - _aRelDeltaW_ * _sNGrenW_ - _wNExchGren_;
_dPGrenW_ = _wPTranGren_ + _wPPrimGrenW_ + _wPWebGrenW_ - _aRelDeltaW_ * _sPGrenW_ - _wPExchGren_;
_dDBlueW_ = _wDTranBlue_ + _wDPrimBlueW_ + _wDWebBlueW_ - _aRelDeltaW_ * _sDBlueW_ - _wDExchBlue_;
_dNBlueW_ = _wNTranBlue_ + _wNPrimBlueW_ + _wNWebBlueW_ - _aRelDeltaW_ * _sNBlueW_ - _wNExchBlue_;
_dPBlueW_ = _wPTranBlue_ + _wPPrimBlueW_ + _wPWebBlueW_ - _aRelDeltaW_ * _sPBlueW_ - _wPExchBlue_;
_dDZoo_ = _wDTranZoo_ + _wDWebZoo_ - _aRelDeltaW_ * _sDZoo_ - _wDExchZoo_;
_dNZoo_ = _wNTranZoo_ + _wNWebZoo_ - _aRelDeltaW_ * _sNZoo_ - _wNExchZoo_;
_dPZoo_ = _wPTranZoo_ + _wPWebZoo_ - _aRelDeltaW_ * _sPZoo_ - _wPExchZoo_;
_dDFiAd_ = _tDWebFiAd_;
_dDFiJv_ = _tDWebFiJv_;
_dNFiAd_ = _tNWebFiAd_;
_dNFiJv_ = _tNWebFiJv_;
_dPFiAd_ = _tPWebFiAd_;
_dPFiJv_ = _tPWebFiJv_;
_dDPisc_ = _tDWebPisc_;
_dNH4S_ = _tNAbioNH4S_ - _tNBurNH4_ + _tNPrimNH4S_ + _tNBedNH4S_ + _tNWebNH4S_;
_dNO3S_ = _tNAbioNO3S_ - _tNBurNO3_ + _tNPrimNO3S_ + _tNBedNO3S_ + _tNWebNO3S_;
_dPO4S_ = _tPAbioPO4S_ - _tPBurPO4_ + _tPPrimPO4S_ + _tPBedPO4S_ + _tPWebPO4S_;
_dPAIMS_ = _tPAbioAIMS_ - _tPBurAIM_ - _tPDredAIMS_;
_dDDetS_ = _tDAbioDetS_ - _tDBurDet_ + _tDPrimDetS_ + _tDBedDetS_ + _tDWebDetS_ - _tDDredDetS_;
_dNDetS_ = _tNAbioDetS_ - _tNBurDet_ + _tNPrimDetS_ + _tNBedDetS_ + _tNWebDetS_ - _tNDredDetS_;
_dPDetS_ = _tPAbioDetS_ - _tPBurDet_ + _tPPrimDetS_ + _tPBedDetS_ + _tPWebDetS_ - _tPDredDetS_;
_dSiDetS_ = _tSiAbioDetS_ - _tSiBurDet_ + _tSiPrimDetS_ + _tSiWebDetS_ - _tSiDredDetS_;
_dDHumS_ = _tDAbioHumS_ - _tDBurHum_ - _tDDredNetHumS_;
_dNHumS_ = _tNAbioHumS_ - _tNBurHum_ - _tNDredNetHumS_;
_dPHumS_ = _tPAbioHumS_ - _tPBurHum_ - _tPDredNetHumS_;
_dDIMS_ = _tDAbioIMS_ - _tDBurIM_ - _tDDredNetIMS_;
_dDDiatS_ = _tDPrimDiatS_ + _tDWebDiatS_ - _tDDredDiatS_;
_dNDiatS_ = _tNPrimDiatS_ + _tNWebDiatS_ - _tNDredDiatS_;
_dPDiatS_ = _tPPrimDiatS_ + _tPWebDiatS_ - _tPDredDiatS_;
_dDGrenS_ = _tDPrimGrenS_ + _tDWebGrenS_ - _tDDredGrenS_;
_dNGrenS_ = _tNPrimGrenS_ + _tNWebGrenS_ - _tPDredGrenS_;
_dPGrenS_ = _tPPrimGrenS_ + _tPWebGrenS_ - _tPDredGrenS_;
_dDBlueS_ = _tDPrimBlueS_ + _tDWebBlueS_ - _tDDredBlueS_;
_dNBlueS_ = _tNPrimBlueS_ + _tNWebBlueS_ - _tNDredBlueS_;
_dPBlueS_ = _tPPrimBlueS_ + _tPWebBlueS_ - _tPDredBlueS_;
_dDVeg_ = _tDBedVeg_ - _tDDredVeg_;
_dNVeg_ = _tNBedVeg_ - _tNDredVeg_;
_dPVeg_ = _tPBedVeg_ - _tPDredVeg_;
_dDBent_ = _tDWebBent_ - _tDDredBent_;
_dNBent_ = _tNWebBent_ - _tNDredBent_;
_dPBent_ = _tPWebBent_ - _tPDredBent_;
_dDepthWM_ = _IF_ (_InclMarsh_ _EQ_ _TRUE_ _AND_ _fMarsh_ _GT_ _NearZero_) _THEN_ _vTranDepthW_ + _vDeltaWM_ _ELSE_ 0.0 _ENDIF_;
_dNH4WM_ = _IF_ (_InclMarsh_ _EQ_ _TRUE_ _AND_ _fMarsh_ _GT_ _NearZero_) _THEN_ _tNDifNH4M_/_sDepthWM_ - _wNNitrWM_ + _wNMinDetWM_ - _tNEvNH4WM_/_sDepthWM_ - _tNInfNH4WM_/_sDepthWM_ + _wNExchNH4M_ - _aRelDeltaWM_ * _sNH4WM_ _ELSE_ 0.0 _ENDIF_;
_dNO3WM_ = _IF_ (_InclMarsh_ _EQ_ _TRUE_ _AND_ _fMarsh_ _GT_ _NearZero_) _THEN_ _tNDifNO3M_/_sDepthWM_ + _wNNitrWM_ - _wNDenitWM_ - _tNEvNO3WM_/_sDepthWM_ - _tNInfNO3WM_/_sDepthWM_ + _wNExchNO3M_ - _aRelDeltaWM_ * _sNO3WM_ _ELSE_ 0.0 _ENDIF_;
_dPO4WM_ = _IF_ (_InclMarsh_ _EQ_ _TRUE_ _AND_ _fMarsh_ _GT_ _NearZero_) _THEN_ - _tPInfPO4WM_ / _sDepthWM_ + _tPDifPO4M_ / _sDepthWM_ + _wPMinDetWM_ - _tPEvPO4WM_ / _sDepthWM_ - _wPSorpIMWM_ + _wPExchPO4M_ - _aRelDeltaWM_ * _sPO4WM_ _ELSE_ 0.0 _ENDIF_;
_dPAIMWM_ = _IF_ (_InclMarsh_ _EQ_ _TRUE_ _AND_ _fMarsh_ _GT_ _NearZero_) _THEN_ - _tPSetAIMM_ / _sDepthWM_ + _wPSorpIMWM_ + _wPExchAIMM_ - _aRelDeltaWM_ * _sPAIMWM_ _ELSE_ 0.0 _ENDIF_;
_dSiO2WM_ = _IF_ (_InclMarsh_ _EQ_ _TRUE_ _AND_ _fMarsh_ _GT_ _NearZero_) _THEN_ _wSiMinDetWM_ + _tSiMinDetSM_ / _sDepthWM_ + _wSiExchSiO2M_ - _aRelDeltaWM_ * _sSiO2WM_ _ELSE_ 0.0 _ENDIF_;
_dO2WM_ = _IF_ (_InclMarsh_ _EQ_ _TRUE_ _AND_ _fMarsh_ _GT_ _NearZero_) _THEN_ _tO2AerM_ / _sDepthWM_ - _wO2MinDetWM_ - _wO2NitrWM_ -(_tO2MinDetSM_ + _tO2NitrSM_) / _sDepthWM_ + _wO2ExchM_ - _aRelDeltaWM_ * _sO2WM_ _ELSE_ 0.0 _ENDIF_;
_dDDetWM_ = _IF_ (_InclMarsh_ _EQ_ _TRUE_ _AND_ _fMarsh_ _GT_ _NearZero_) _THEN_ _tDMortShootPhra_/_sDepthWM_ - _tDSetDetM_/_sDepthWM_ - _wDMinDetWM_ + _wDExchDetM_ - _aRelDeltaWM_ * _sDDetWM_ _ELSE_ 0.0 _ENDIF_;
_dNDetWM_ = _IF_ (_InclMarsh_ _EQ_ _TRUE_ _AND_ _fMarsh_ _GT_ _NearZero_) _THEN_ _tNMortShootPhra_ / _sDepthWM_ - _tNSetDetM_ / _sDepthWM_ - _wNMinDetWM_ + _wNExchDetM_ - _aRelDeltaWM_ * _sNDetWM_ _ELSE_ 0.0 _ENDIF_;
_dPDetWM_ = _IF_ (_InclMarsh_ _EQ_ _TRUE_ _AND_ _fMarsh_ _GT_ _NearZero_) _THEN_ _tPMortShootPhra_ / _sDepthWM_ - _tPSetDetM_ / _sDepthWM_ - _wPMinDetWM_ + _wPExchDetM_ - _aRelDeltaWM_ * _sPDetWM_ _ELSE_ 0.0 _ENDIF_;
_dSiDetWM_ = _IF_ (_InclMarsh_ _EQ_ _TRUE_ _AND_ _fMarsh_ _GT_ _NearZero_) _THEN_ - _tSiSetDetM_ / _sDepthWM_ - _wSiMinDetWM_ + _wSiExchDetM_ - _aRelDeltaWM_ * _sSiDetWM_ _ELSE_ 0.0 _ENDIF_;
_dDIMWM_ = _IF_ (_InclMarsh_ _EQ_ _TRUE_ _AND_ _fMarsh_ _GT_ _NearZero_) _THEN_ - _tDSetIMM_/_sDepthWM_ + _wDExchIMM_ - _aRelDeltaWM_ * _sDIMWM_ _ELSE_ 0.0 _ENDIF_;
_dDDiatWM_ = _IF_ (_InclMarsh_ _EQ_ _TRUE_ _AND_ _fMarsh_ _GT_ _NearZero_) _THEN_ _wDExchDiatM_ - _tDSetDiatM_ / _sDepthWM_ - _aRelDeltaWM_ * _sDDiatWM_ _ELSE_ 0.0 _ENDIF_;
_dNDiatWM_ = _IF_ (_InclMarsh_ _EQ_ _TRUE_ _AND_ _fMarsh_ _GT_ _NearZero_) _THEN_ _wNExchDiatM_ - _tNSetDiatM_ / _sDepthWM_ - _aRelDeltaWM_ * _sNDiatWM_ _ELSE_ 0.0 _ENDIF_;
_dPDiatWM_ = _IF_ (_InclMarsh_ _EQ_ _TRUE_ _AND_ _fMarsh_ _GT_ _NearZero_) _THEN_ _wPExchDiatM_ - _tPSetDiatM_ / _sDepthWM_ - _aRelDeltaWM_ * _sPDiatWM_ _ELSE_ 0.0 _ENDIF_;
_dDGrenWM_ = _IF_ (_InclMarsh_ _EQ_ _TRUE_ _AND_ _fMarsh_ _GT_ _NearZero_) _THEN_ _wDExchGrenM_ - _tDSetGrenM_ / _sDepthWM_ - _aRelDeltaWM_ * _sDGrenWM_ _ELSE_ 0.0 _ENDIF_;
_dNGrenWM_ = _IF_ (_InclMarsh_ _EQ_ _TRUE_ _AND_ _fMarsh_ _GT_ _NearZero_) _THEN_ _wNExchGrenM_ - _tNSetGrenM_ / _sDepthWM_ - _aRelDeltaWM_ * _sNGrenWM_ _ELSE_ 0.0 _ENDIF_;
_dPGrenWM_ = _IF_ (_InclMarsh_ _EQ_ _TRUE_ _AND_ _fMarsh_ _GT_ _NearZero_) _THEN_ _wPExchGrenM_ - _tPSetGrenM_ / _sDepthWM_ - _aRelDeltaWM_ * _sPGrenWM_ _ELSE_ 0.0 _ENDIF_;
_dDBlueWM_ = _IF_ (_InclMarsh_ _EQ_ _TRUE_ _AND_ _fMarsh_ _GT_ _NearZero_) _THEN_ _wDExchBlueM_ - _tDSetBlueM_ / _sDepthWM_ - _aRelDeltaWM_ * _sDBlueWM_ _ELSE_ 0.0 _ENDIF_;
_dNBlueWM_ = _IF_ (_InclMarsh_ _EQ_ _TRUE_ _AND_ _fMarsh_ _GT_ _NearZero_) _THEN_ _wNExchBlueM_ - _tNSetBlueM_ / _sDepthWM_ - _aRelDeltaWM_ * _sNBlueWM_ _ELSE_ 0.0 _ENDIF_;
_dPBlueWM_ = _IF_ (_InclMarsh_ _EQ_ _TRUE_ _AND_ _fMarsh_ _GT_ _NearZero_) _THEN_ _wPExchBlueM_ - _tPSetBlueM_ / _sDepthWM_ - _aRelDeltaWM_ * _sPBlueWM_ _ELSE_ 0.0 _ENDIF_;
_dDZooM_ = _IF_ (_FALSE_ _EQ_ _InclMarsh_ _OR_ _fMarsh_ _LE_ _NearZero_) _THEN_ 0.0 _ELSEIF_ (_InclWeb_ _EQ_ _TRUE_) _THEN_ _wDExchZooM_ - _aRelDeltaWM_ * _sDZooM_ _ELSE_ 0.0 _ENDIF_;
_dNZooM_ = _IF_ (_FALSE_ _EQ_ _InclMarsh_ _OR_ _fMarsh_ _LE_ _NearZero_) _THEN_ 0.0 _ELSEIF_ (_InclWeb_ _EQ_ _TRUE_) _THEN_ _wNExchZooM_ - _aRelDeltaWM_ * _sNZooM_ _ELSE_ 0.0 _ENDIF_;
_dPZooM_ = _IF_ (_FALSE_ _EQ_ _InclMarsh_ _OR_ _fMarsh_ _LE_ _NearZero_) _THEN_ 0.0 _ELSEIF_ (_InclWeb_ _EQ_ _TRUE_) _THEN_ _wPExchZooM_ - _aRelDeltaWM_ * _sPZooM_ _ELSE_ 0.0 _ENDIF_;
_dNH4SM_ = _IF_ (_InclMarsh_ _EQ_ _TRUE_ _AND_ _fMarsh_ _GT_ _NearZero_) _THEN_ _tNInfNH4WM_ - _tNInfNH4SM_ +(1.0-_fRefrDetS_) * _tNMinDetSM_ + _tNMinHumSM_ - _tNDifNH4M_ - _tNDifGroundNH4M_ - _tNNitrSM_ - _tNBurNH4M_ - _tNUptNH4PhraS_ + _tNEvNH4WM_ _ELSE_ 0.0 _ENDIF_;
_dNO3SM_ = _IF_ (_InclMarsh_ _EQ_ _TRUE_ _AND_ _fMarsh_ _GT_ _NearZero_) _THEN_ _tNInfNO3WM_ - _tNInfNO3SM_ + _tNNitrSM_ - _tNDenitSM_ - _tNDifNO3M_ - _tNDifGroundNO3M_ - _tNBurNO3M_ - _tNUptNO3PhraS_ + _tNEvNO3WM_ _ELSE_ 0.0 _ENDIF_;
_dPO4SM_ = _IF_ (_InclMarsh_ _EQ_ _TRUE_ _AND_ _fMarsh_ _GT_ _NearZero_) _THEN_ _tPInfPO4WM_ - _tPInfPO4SM_ + _tPEvPO4WM_ +(1.0-_fRefrDetS_) * _tPMinDetSM_ + _tPMinHumSM_ - _tPSorpIMSM_ - _tPDifPO4M_ - _tPDifGroundPO4M_ - _tPChemPO4M_ - _tPUptPhraS_ - _tPBurPO4M_ _ELSE_ 0.0 _ENDIF_;
_dPAIMSM_ = _IF_ (_InclMarsh_ _EQ_ _TRUE_ _AND_ _fMarsh_ _GT_ _NearZero_) _THEN_ _tPSetAIMM_ - _tPBurAIMM_ + _tPSorpIMSM_ _ELSE_ 0.0 _ENDIF_;
_dDDetSM_ = _IF_ (_InclMarsh_ _EQ_ _TRUE_ _AND_ _fMarsh_ _GT_ _NearZero_) _THEN_ _tDMortRootPhra_ + _tDSetDetM_ - _tDMinDetSM_ + _tDSetPhytM_ - _tDBurDetM_ _ELSE_ 0.0 _ENDIF_;
_dNDetSM_ = _IF_ (_InclMarsh_ _EQ_ _TRUE_ _AND_ _fMarsh_ _GT_ _NearZero_) _THEN_ _tNMortRootPhra_ + _tNSetDetM_ - _tNMinDetSM_ + _tNSetPhytM_ - _tNBurDetM_ _ELSE_ 0.0 _ENDIF_;
_dPDetSM_ = _IF_ (_InclMarsh_ _EQ_ _TRUE_ _AND_ _fMarsh_ _GT_ _NearZero_) _THEN_ _tPMortRootPhra_ + _tPSetDetM_ - _tPMinDetSM_ + _tPSetPhytM_ - _tPBurDetM_ _ELSE_ 0.0 _ENDIF_;
_dSiDetSM_ = _IF_ (_InclMarsh_ _EQ_ _TRUE_ _AND_ _fMarsh_ _GT_ _NearZero_) _THEN_ _tSiSetDetM_ - _tSiMinDetSM_ + _cSiDDiat_ * _tDSetDiatM_ - _tSiBurDetM_ _ELSE_ 0.0 _ENDIF_;
_dDHumSM_ = _IF_ (_InclMarsh_ _EQ_ _TRUE_ _AND_ _fMarsh_ _GT_ _NearZero_) _THEN_ _fRefrDetS_ * _tDMinDetSM_ - _tDMinHumSM_ - _tDBurHumM_ _ELSE_ 0.0 _ENDIF_;
_dNHumSM_ = _IF_ (_InclMarsh_ _EQ_ _TRUE_ _AND_ _fMarsh_ _GT_ _NearZero_) _THEN_ _fRefrDetS_ * _tNMinDetSM_ - _tNMinHumSM_ - _tNBurHumM_ _ELSE_ 0.0 _ENDIF_;
_dPHumSM_ = _IF_ (_InclMarsh_ _EQ_ _TRUE_ _AND_ _fMarsh_ _GT_ _NearZero_) _THEN_ _fRefrDetS_ * _tPMinDetSM_ - _tPMinHumSM_ - _tPBurHumM_ _ELSE_ 0.0 _ENDIF_;
_dDIMSM_ = _IF_ (_InclMarsh_ _EQ_ _TRUE_ _AND_ _fMarsh_ _GT_ _NearZero_) _THEN_ _tDSetIMM_ - _tDBurIMM_ _ELSE_ 0.0 _ENDIF_;
_dDRootPhra_ = _IF_ (_InclMarsh_ _EQ_ _TRUE_ _AND_ _fMarsh_ _GT_ _NearZero_) _THEN_ _tDProdRootPhra_ - _tDRespRootPhra_ - _tDMortRootPhra_ - _tDAllPhra_ + _tDRealPhra_ _ELSE_ 0.0 _ENDIF_;
_dDShootPhra_ = _IF_ (_InclMarsh_ _EQ_ _TRUE_ _AND_ _fMarsh_ _GT_ _NearZero_) _THEN_ _tDProdShootPhra_ - _tDRespShootPhra_ - _tDMortShootPhra_ + _tDAllPhra_ - _tDRealPhra_ - _tDManShootPhra_ _ELSE_ 0.0 _ENDIF_;
_dNRootPhra_ = _IF_ (_InclMarsh_ _EQ_ _TRUE_ _AND_ _fMarsh_ _GT_ _NearZero_) _THEN_ _tNUptRootPhra_ - _tNMortRootPhra_ - _tNTransPhra_ + _tNRetrPhra_ _ELSE_ 0.0 _ENDIF_;
_dNShootPhra_ = _IF_ (_InclMarsh_ _EQ_ _TRUE_ _AND_ _fMarsh_ _GT_ _NearZero_) _THEN_ _tNUptShootPhra_ - _tNMortShootPhra_ + _tNTransPhra_ - _tNRetrPhra_ - _tNManShootPhra_ _ELSE_ 0.0 _ENDIF_;
_dPRootPhra_ = _IF_ (_InclMarsh_ _EQ_ _TRUE_ _AND_ _fMarsh_ _GT_ _NearZero_) _THEN_ _tPUptRootPhra_ - _tPMortRootPhra_ - _tPTransPhra_ + _tPRetrPhra_ _ELSE_ 0.0 _ENDIF_;
_dPShootPhra_ = _IF_ (_InclMarsh_ _EQ_ _TRUE_ _AND_ _fMarsh_ _GT_ _NearZero_) _THEN_ _tPUptShootPhra_ - _tPMortShootPhra_ + _tPTransPhra_ - _tPRetrPhra_ - _tPManShootPhra_ _ELSE_ 0.0 _ENDIF_;
_dDExtTotT_ = _uDLoad_ - _wDOutflTot_*_sDepthW_ + _wDTranZoo_ * _sDepthW_ - _tDBurTot_ + _tDAbioTotT_ + _tDPrimTotT_ + _tDBedTotT_ + _tDWebTotT_ + _tDMarsTotT_ - _tDDredNetTot_;
_dNExtTotT_ = _uNLoad_ - _wNOutflTot_ * _sDepthW_ + _wNTranZoo_ * _sDepthW_ + _cNBackLoad_ - _tNBurTot_ + _tNAbioTotT_ + _tNPrimTotT_ + _tNBedTotT_ + _tNWebTotT_ + _tNMarsTotT_ - _tNDredNetTot_;
_dPExtTotT_ = _uPLoad_ - _wPOutflTot_ * _sDepthW_ + _wPTranZoo_ * _sDepthW_ + _cPBackLoad_ - _tPBurTot_ + _tPAbioTotT_ + _tPPrimTotT_ + _tPBedTotT_ + _tPWebTotT_ + _tPMarsTotT_ - _tPDredNetTot_;
_dSiExtTotT_ = _uSiLoad_ - _wSiDilTot_*_sDepthW_ + _tSiAbioTotT_ - _tSiBurTot_ + _tSiPrimTotT_ + _tSiMarsTotT_ - _tSiDredTot_;