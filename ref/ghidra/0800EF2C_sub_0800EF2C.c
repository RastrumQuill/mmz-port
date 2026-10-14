// sub_0800EF2C at 0x0800EF2C (thumb)

undefined4 sub_0800EF2C(int *param_1)

{
  int iVar1;
  int iVar2;
  
  if (DAT_02022ab0 == 0) {
    iVar2 = *param_1;
    if (iVar2 < 0xd2000) {
      return 2;
    }
  }
  else {
    if (DAT_02022ab0 == 0x200) {
      iVar2 = *param_1;
      if (iVar2 < 0xa5000) {
        return 4;
      }
      if (iVar2 < 0x116000) {
        return 3;
      }
      if (iVar2 < 0x177000) {
        return 2;
      }
      iVar1 = 0x1b2fff;
      goto LAB_0800efce;
    }
    iVar2 = *param_1;
    if (iVar2 < 0x3c000) {
      return 0;
    }
    if (iVar2 < 0x4b000) {
      return 5;
    }
    if (iVar2 < 0xa5000) {
      return 4;
    }
    if (iVar2 < 0xe1000) {
      return 3;
    }
    if (iVar2 < 0x13b000) {
      return 2;
    }
  }
  iVar1 = 0x1a3fff;
LAB_0800efce:
  if (iVar1 < iVar2) {
    return 0;
  }
  return 1;
}

