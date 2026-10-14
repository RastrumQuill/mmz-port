// sub_080F1814 at 0x080F1814 (thumb)

undefined4 sub_080F1814(int param_1)

{
  byte bVar1;
  short sVar2;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0x11);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return in_lr;
      }
      sVar2 = sub_080ED208(param_1,0xa310,1);
      if (sVar2 == 0) {
        return in_lr;
      }
      goto LAB_080f18a4;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    DAT_0202e386 = 0x3a7;
    DAT_0202dd86 = 8;
    sub_0801CF00(param_1,0xa310);
    *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | 4;
    *(undefined *)(param_1 + 0x25) = 0x1d;
    *(char *)(param_1 + 0x11) = *(char *)(param_1 + 0x11) + '\x01';
  }
  sub_0801CFF0(param_1);
  if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) == 0) {
    return in_lr;
  }
  *(undefined *)(param_1 + 0x12) = 0x1e;
LAB_080f18a4:
  *(char *)(param_1 + 0x11) = *(char *)(param_1 + 0x11) + '\x01';
  return in_lr;
}

