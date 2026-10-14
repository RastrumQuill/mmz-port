// sub_080E287C at 0x080E287C (thumb)

undefined4 sub_080E287C(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  undefined4 local_18;
  int local_14;
  
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
  iVar1 = *(int *)(param_1 + 0x78) + -0x10;
  *(int *)(param_1 + 0x78) = iVar1;
  if (iVar1 < 0) {
    if (*(char *)(param_1 + 0x11) == '\0') {
      sub_080E24A0(param_1 + 0x54,0x102,*(byte *)(param_1 + 10) >> 4 & 1);
      sub_080E24A0(param_1 + 0x54,0x104,*(byte *)(param_1 + 10) >> 4 & 1);
    }
    else {
      sub_080E24A0(param_1 + 0x54,0x103,*(byte *)(param_1 + 10) >> 4 & 1);
    }
    local_18 = *(undefined4 *)(param_1 + 0x54);
    local_14 = *(int *)(param_1 + 0x58) + -0xe00;
    sub_080D0894(1,&local_18);
    sub_08002B10(0x166);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

