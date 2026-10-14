// sub_08031670 at 0x08031670 (thumb)

undefined8 sub_08031670(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 in_lr;
  
  uVar1 = sub_08031650();
  if ((uVar1 & 0xff) < param_2) {
    iVar2 = -1;
  }
  else {
    uVar1 = 0xffffffff;
    do {
      uVar1 = uVar1 + 1;
      if ((1 << (uVar1 & 0xff) & (uint)*param_1) != 0) {
        param_2 = param_2 - 1;
      }
    } while (param_2 != 0);
    iVar2 = (int)(uVar1 * 0x1000000) >> 0x18;
  }
  return CONCAT44(in_lr,iVar2);
}

