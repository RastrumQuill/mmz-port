// sub_080AA0A0 at 0x080AA0A0 (thumb)

undefined4 sub_080AA0A0(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  int local_18;
  int local_14;
  
  *(undefined *)(param_1 + 0xb4) = 0;
  if (*(char *)(param_1 + 0xb5) == '\0') {
    if ((*(uint *)(param_1 + 0x8c) & 0x10000) == 0) {
      local_18 = *(int *)(param_1 + 0x54) + 0x800;
      local_14 = *(int *)(param_1 + 0x58) + -0xe00;
      sub_080D0894(1,&local_18);
      local_18 = *(int *)(param_1 + 0x54) + -0xe00;
      local_14 = *(int *)(param_1 + 0x58) + -0x1100;
      sub_080D0894(1,&local_18);
      sub_08002B10(0x166);
      iVar1 = param_1 + 0x54;
      sub_080E24A0(iVar1,0x102,*(byte *)(param_1 + 10) >> 4 & 1);
      sub_080E24A0(iVar1,0x103,*(byte *)(param_1 + 10) >> 4 & 1);
      sub_080E24A0(iVar1,0x104,*(byte *)(param_1 + 10) >> 4 & 1);
    }
    else {
      local_18 = *(int *)(param_1 + 0x54);
      local_14 = *(int *)(param_1 + 0x58) + -0xe00;
      sub_080E24A0(param_1 + 0x54,0,*(byte *)(param_1 + 10) >> 4 & 1);
      sub_080E24A0(param_1 + 0x54,1,*(byte *)(param_1 + 10) >> 4 & 1);
    }
  }
  else {
    sub_080E24A0(param_1 + 0x54,0x402,*(byte *)(param_1 + 10) >> 4 & 1);
  }
  iVar1 = param_1 + 0x54;
  if (*(int *)(param_1 + 0x2c) != 0) {
    sub_080E24A0(iVar1,0x105,*(byte *)(param_1 + 10) >> 4 & 1);
    sub_080E24A0(iVar1,0x106,*(byte *)(param_1 + 10) >> 4 & 1);
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  if (DAT_0202e8ec < 9999) {
    DAT_0202e8ec = DAT_0202e8ec + 1;
  }
  sub_0802ABC8(param_1,iVar1);
  sub_0802AB70(4,0x29,iVar1);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}

