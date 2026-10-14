// sub_0802EDDA at 0x0802EDDA (thumb)

void sub_0802EDDA(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  code *param_10;
  
  if ((((param_2 & 0xf) == 1) && ((param_2 & 0x8000) == 0)) && ((param_2 & 0x400) == 0)) {
    param_5._3_1_ = '\x01';
  }
  else {
    sVar1 = sub_0802E2B8(unaff_r7,unaff_r6,unaff_r5);
    if (sVar1 != 0) {
      param_5._3_1_ = '\x01';
    }
  }
  if ((((char)param_5 == '\0') && (param_5._1_1_ == '\0')) &&
     ((param_5._2_1_ == '\0' && (param_5._3_1_ == '\0')))) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x0802ee3e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_10)(uVar2);
  return;
}

