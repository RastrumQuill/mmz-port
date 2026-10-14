// sub_08060D28 at 0x08060D28 (thumb)

undefined4 sub_08060D28(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return in_lr;
      }
      if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 0x80) == 0) {
        return in_lr;
      }
      *(undefined *)(param_1 + 0xd) = 1;
      *(undefined *)(param_1 + 0xe) = 0;
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    if (((DAT_020301a8 & 1) != 0) && ((DAT_020301b2 & 1) == 0)) {
      DAT_020301a8 = DAT_020301a8 & 0xfffe | 0x10;
    }
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined *)(param_1 + 0x12) = 0x5a;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080041E4(0xa7);
  sub_080041E4(0xa8);
  sub_080041E4(0xa9);
  sub_080041E4(0xaa);
  if ((*(char *)(param_1 + 0x12) != '\0') &&
     (cVar2 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar2, cVar2 == '\0')) {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}

