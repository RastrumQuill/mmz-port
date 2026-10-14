// sub_080A0A90 at 0x080A0A90 (thumb)

undefined4 sub_080A0A90(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined *)(param_1 + 0x12) = 0x10;
    *(undefined *)(param_1 + 0x13) = 0;
  }
  sub_0809C980(param_1);
  bVar1 = *(char *)(param_1 + 0x13) + 1;
  *(byte *)(param_1 + 0x13) = bVar1;
  if (*(char *)(param_1 + 0x11) == '\0') {
    if (*(byte *)(param_1 + 0x12) < bVar1) {
      *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) - 1;
      *(undefined *)(param_1 + 0x13) = 0;
      *(undefined *)(param_1 + 0x11) = 2;
    }
    if (*(char *)(param_1 + 0x11) == '\0') {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
      goto LAB_080a0aec;
    }
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  *(char *)(param_1 + 0x11) = *(char *)(param_1 + 0x11) + -1;
LAB_080a0aec:
  if (*(char *)(param_1 + 0x12) == '\0') {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
  }
  return in_lr;
}

