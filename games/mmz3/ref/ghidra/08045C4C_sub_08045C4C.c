// sub_08045C4C at 0x08045C4C (thumb)

undefined4 sub_08045C4C(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  if (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) == -0x5af9) {
    if (*(char *)(param_1 + 0x73) == '\x03') {
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        *(undefined *)(param_1 + 0x4c) = 1;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 0x10;
        bVar1 = *(byte *)(param_1 + 10) | 0x10;
      }
      else {
        *(undefined *)(param_1 + 0x4c) = 0;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
        bVar1 = *(byte *)(param_1 + 10) & 0xef;
      }
      *(byte *)(param_1 + 10) = bVar1;
      sub_08017700(param_1,0xa500);
    }
  }
  else if (*(int *)(param_1 + 0x54) < *(int *)(DAT_0202f5c0 + 0x54)) {
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      sub_08017700(param_1,0xa507);
    }
  }
  else if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    sub_08017700(param_1,0xa507);
  }
  return in_lr;
}

