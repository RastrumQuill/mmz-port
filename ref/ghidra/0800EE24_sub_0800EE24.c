// sub_0800EE24 at 0x0800EE24 (thumb)

undefined4 sub_0800EE24(int *param_1)

{
  undefined4 uVar1;
  
  if ((DAT_02022ab0 == 4) || (0x293fff < *param_1)) {
    if (*param_1 < 0x31b000) {
      uVar1 = 0;
    }
    else if (*param_1 < 0x447000) {
      uVar1 = 1;
    }
    else {
      uVar1 = 2;
    }
  }
  else {
    uVar1 = 3;
  }
  return uVar1;
}

