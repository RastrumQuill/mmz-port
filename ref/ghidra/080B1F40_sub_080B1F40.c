// sub_080B1F40 at 0x080B1F40 (thumb)

undefined4 sub_080B1F40(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfa;
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0x87;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  uVar1 = sub_08013D9C(&DAT_02022c44,param_1 + 0x4c);
  if (uVar1 < 0x4401) {
    sub_080014E8(&DAT_08510500,(DAT_020231f0 - 0x3c0) * 0x20 + 0x10000);
    sub_0800179C(&DAT_0851050c,(DAT_02023160 - 9) * 0x20 + 0x200);
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

