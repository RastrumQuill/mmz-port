// sub_08033050 at 0x08033050 (thumb)

undefined4 sub_08033050(int param_1)

{
  undefined4 in_lr;
  
  if ((DAT_03003908 != 0) && (*(int *)(DAT_03003908 + 0x2c) != 0)) {
    if (*(int *)(param_1 + 0x54) < *(int *)(*(int *)(DAT_03003908 + 0x2c) + 0x54)) {
      *(undefined *)(param_1 + 0x4c) = 1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 0x10;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      *(undefined *)(param_1 + 0x4c) = 0;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    }
  }
  if (*(char *)(param_1 + 0xf) == '\0') {
    if (DAT_0202dbf8 == '\0') {
      sub_0801CF00(param_1,0x4c01);
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    }
  }
  else if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    *(undefined *)(param_1 + 0x174) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0;
  }
  return in_lr;
}

