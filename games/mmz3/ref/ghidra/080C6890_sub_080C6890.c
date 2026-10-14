// sub_080C6890 at 0x080C6890 (thumb)

undefined4 sub_080C6890(int param_1)

{
  short sVar1;
  undefined4 in_lr;
  
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
  sub_080177F4(param_1);
  sVar1 = sub_08009A3C(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  if (sVar1 != 0) {
    sub_080B2484(1,param_1 + 0x54);
    if (*(char *)(param_1 + 0x11) == '\x01') {
      sub_0800471C(0x2a);
    }
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

