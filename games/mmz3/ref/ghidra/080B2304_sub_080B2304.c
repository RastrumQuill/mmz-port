// sub_080B2304 at 0x080B2304 (thumb)

undefined4 sub_080B2304(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  sub_080177F4();
  iVar1 = *(int *)(param_1 + 0x58);
  if ((iVar1 < DAT_0202e48c) || (0x41000 < iVar1)) {
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 8);
  }
  else {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = iVar1 + *(int *)(param_1 + 0x60);
  }
  return in_lr;
}

