// sub_080792DC at 0x080792DC (thumb)

undefined4 sub_080792DC(int param_1)

{
  byte *pbVar1;
  undefined4 in_lr;
  int local_14;
  int local_10;
  
  if ((((*(uint *)(param_1 + 0x8c) & 0x200) == 0) && (*(short *)(param_1 + 0xa4) != 0)) ||
     ((DAT_0202e918 & 8) != 0)) {
    *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_1 + 0x58);
    if ((*(int *)(param_1 + 200) != 0) && (1 < *(byte *)(*(int *)(param_1 + 200) + 0xc))) {
      *(undefined4 *)(param_1 + 200) = 0;
    }
    if ((*(int *)(param_1 + 0xcc) != 0) && (1 < *(byte *)(*(int *)(param_1 + 0xcc) + 0xc))) {
      *(undefined4 *)(param_1 + 0xcc) = 0;
    }
    sub_08128884(param_1,*(undefined4 *)(&DAT_08859e2c + (uint)*(byte *)(param_1 + 0xd) * 4));
    if (*(char *)(param_1 + 0xd) != '\0') {
      pbVar1 = (byte *)(param_1 + 0xd5);
      if (*pbVar1 != 0) {
        *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xb8) + (short)(&DAT_08128c10)[*pbVar1] * 4;
      }
      *pbVar1 = *pbVar1 + 1;
      local_14 = *(int *)(param_1 + 0x54) + -0x1c00;
      local_10 = *(int *)(param_1 + 0x58) + 0xb900;
      sub_0801C550(&local_14);
      *(undefined *)(param_1 + 0xd7) = 0;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08854834 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_080793C8(param_1);
  }
  return in_lr;
}

