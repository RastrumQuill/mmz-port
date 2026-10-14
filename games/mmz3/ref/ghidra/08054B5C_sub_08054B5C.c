// sub_08054B5C at 0x08054B5C (thumb)

undefined4 sub_08054B5C(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        *(undefined *)(param_1 + 0xe) = 3;
      }
      else if (bVar1 != 3) {
        return in_lr;
      }
      *(undefined *)(param_1 + 0xbd) = 1;
      bVar1 = DAT_020301b2 & 1;
      if ((DAT_020301b2 & 1) == 0) {
        *(byte *)(param_1 + 0xd) = bVar1;
        *(byte *)(param_1 + 0xe) = bVar1;
      }
      sub_080177F4(param_1);
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    sub_08017528(param_1);
    sub_08017700(param_1,0x5400);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) != 0) {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080177F4(param_1);
  return in_lr;
}

