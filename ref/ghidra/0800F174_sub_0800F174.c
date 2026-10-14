// sub_0800F174 at 0x0800F174 (thumb)

undefined4 sub_0800F174(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 < 0x1fe000) {
    return 0;
  }
  if (0x21bfff < iVar1) {
    if (iVar1 < 0x285000) {
      return 1;
    }
    if (0x29bfff < iVar1) {
      if (0x356fff < iVar1) {
        return 4;
      }
      return 2;
    }
  }
  return 3;
}

