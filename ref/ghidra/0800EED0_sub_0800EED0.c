// sub_0800EED0 at 0x0800EED0 (thumb)

undefined4 sub_0800EED0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  if (DAT_02022ab0 == 0x40) {
    iVar2 = *param_1;
    if (iVar2 < 0x4c8000) {
      return 0;
    }
    iVar1 = 0x4f7fff;
  }
  else {
    if (DAT_02022ab0 != 0x80) {
      if (0x4f7fff < *param_1) {
        return 1;
      }
      return 0;
    }
    iVar2 = *param_1;
    if (iVar2 < 0x4c9000) {
      return 0;
    }
    iVar1 = 0x512fff;
  }
  if (iVar2 <= iVar1) {
    return 1;
  }
  return 2;
}

