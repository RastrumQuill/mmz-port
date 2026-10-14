// sub_080A5434 at 0x080A5434 (thumb)

undefined4 sub_080A5434(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x28);
  sub_080128D4();
  *(undefined *)(param_1 + 0x24) = *(undefined *)(iVar1 + 0x13);
  *(int *)(param_1 + 0x54) =
       *(int *)(iVar1 + 0x54) + (short)(&DAT_080ef450)[*(byte *)(iVar1 + 0x13) + 0x40 & 0xff] * 0xe;
  *(int *)(param_1 + 0x58) =
       *(int *)(iVar1 + 0x58) + (short)(&DAT_080ef450)[*(byte *)(iVar1 + 0x13)] * 0xe;
  if (1 < *(byte *)(iVar1 + 0xc)) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 8);
    sub_080A4EEC(param_1);
  }
  return in_lr;
}

