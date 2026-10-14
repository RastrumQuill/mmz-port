// sub_080B0454 at 0x080B0454 (thumb)

undefined4 sub_080B0454(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return in_lr;
      }
      goto LAB_080b04a2;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    uVar2 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
    *(undefined4 *)(param_1 + 0x50) = uVar2;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if ((*(ushort *)(param_1 + 0x90) & 0x2000) == 0) {
    return in_lr;
  }
  if (DAT_02022874 == '\0') {
    return in_lr;
  }
  sub_080BC808(0x11);
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
LAB_080b04a2:
  if (DAT_0202365a == 0) {
    DAT_02022874 = '\0';
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

