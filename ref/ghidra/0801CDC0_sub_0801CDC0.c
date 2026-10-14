// sub_0801CDC0 at 0x0801CDC0 (thumb)

undefined8 sub_0801CDC0(byte *param_1,byte param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_lr;
  
  bVar1 = sub_0801CDA4();
  if (bVar1 < param_2) {
    iVar2 = -1;
  }
  else {
    uVar3 = 0xffffffff;
    do {
      uVar3 = uVar3 + 1;
      if ((1 << (uVar3 & 0xff) & (uint)*param_1) != 0) {
        param_2 = param_2 - 1;
      }
    } while (param_2 != 0);
    iVar2 = (int)(uVar3 * 0x1000000) >> 0x18;
  }
  return CONCAT44(in_lr,iVar2);
}

