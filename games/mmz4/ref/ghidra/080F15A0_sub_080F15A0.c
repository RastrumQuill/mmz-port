// sub_080F15A0 at 0x080F15A0 (thumb)

undefined4 sub_080F15A0(int param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0x11);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return in_lr;
      }
      sVar2 = sub_080ED208(param_1,0xaf1b,1);
      if (sVar2 == 0) {
        return in_lr;
      }
      goto LAB_080f1624;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    DAT_0202e39e = 0x3bd;
    DAT_0202dd9e = 9;
    sub_0801CF00(param_1,0xaf1b);
    iVar3 = sub_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(int *)(param_1 + 0x58) = iVar3 + 0x100;
    *(char *)(param_1 + 0x11) = *(char *)(param_1 + 0x11) + '\x01';
  }
  sub_0801CFF0(param_1);
  if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) == 0) {
    return in_lr;
  }
  *(undefined *)(param_1 + 0x12) = 0x1e;
LAB_080f1624:
  *(char *)(param_1 + 0x11) = *(char *)(param_1 + 0x11) + '\x01';
  return in_lr;
}

