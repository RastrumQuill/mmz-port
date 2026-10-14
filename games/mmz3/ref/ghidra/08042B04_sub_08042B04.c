// sub_08042B04 at 0x08042B04 (thumb)

undefined4 sub_08042B04(int param_1)

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
      bVar1 = DAT_020301b2 & 1;
      if ((DAT_020301b2 & 1) != 0) {
        return in_lr;
      }
      *(undefined *)(param_1 + 0xd) = 2;
      *(byte *)(param_1 + 0xe) = bVar1;
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    if (*(char *)(param_1 + 0x10) == '\x01') {
      *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) | 0xc;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) != 0) {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}

