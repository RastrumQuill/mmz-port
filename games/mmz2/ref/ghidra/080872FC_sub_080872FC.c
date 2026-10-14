// sub_080872FC at 0x080872FC (thumb)

undefined4 sub_080872FC(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x28);
  sub_08012580();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    sub_080127E4(param_1,0x5605);
  }
  else {
    sub_080127E4(param_1,0x5606);
  }
  sub_080128D4(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar1 + 0x54);
  iVar1 = sub_080093C4(*(undefined4 *)(iVar1 + 0x54),*(undefined4 *)(iVar1 + 0x58));
  *(uint *)(param_1 + 0x58) = iVar1 + (uint)*(byte *)(param_1 + 0x10) * -0x4000;
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined *)(param_1 + 0x13) = 0;
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x11) << 6;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_080873AC(param_1);
  return in_lr;
}

