// sub_0802253C at 0x0802253C (thumb)

undefined8 sub_0802253C(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  undefined4 in_lr;
  bool bVar2;
  
  uVar1 = (uint)*(ushort *)(param_1 + 0x16);
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    if (((param_2 & 0x80) != 0) && (bVar2 = param_3 == 0, param_3 = param_2, bVar2)) {
      uVar1 = 0;
    }
    if (param_3 != 0) {
      if (((param_3 & 0xffffff7f) == 0xf) || ((param_3 & 0xffffff7f) == 0xe)) {
        if ((param_3 & 0xffffff7f) == 0xf) {
          uVar1 = uVar1 | 4;
        }
        if ((param_3 & 0xffffff7f) == 0xe) {
          uVar1 = uVar1 | 8;
        }
      }
      else {
        uVar1 = uVar1 | 2;
      }
    }
  }
  return CONCAT44(in_lr,uVar1);
}

