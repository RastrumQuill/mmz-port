// sub_080D4138 at 0x080D4138 (thumb)

undefined4 sub_080D4138(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 in_lr;
  
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  sub_08012580(param_1);
  sub_080127E4(param_1,0xe400);
  *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3;
  if (*(char *)(param_1 + 0x10) == '\0') {
    uVar2 = *(int *)(param_1 + 0x58) - 0x28000;
    uVar1 = 0x14000;
LAB_080d4172:
    if (uVar1 < uVar2) {
LAB_080d419e:
      *(undefined *)(param_1 + 0x25) = 0x1f;
      goto LAB_080d41b8;
    }
  }
  else {
    if (*(char *)(param_1 + 0x10) == '\x01') {
      uVar2 = *(int *)(param_1 + 0x58) - 0x14000;
      uVar1 = 0x1e000;
      goto LAB_080d4172;
    }
    uVar2 = *(int *)(param_1 + 0x58) - 0x3c000;
    if (0xa000 < uVar2) goto LAB_080d419e;
  }
  *(char *)(param_1 + 0x25) = '\x1f' - (char)((int)uVar2 >> 0xc);
LAB_080d41b8:
  *(byte *)(param_1 + 0x12) = (*(byte *)(param_1 + 0x11) & 3) + 5;
  return in_lr;
}

