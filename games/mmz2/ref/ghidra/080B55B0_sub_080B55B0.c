// sub_080B55B0 at 0x080B55B0 (thumb)

undefined4 sub_080B55B0(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x28);
  sub_080128D4();
  *(int *)(param_1 + 0x54) = *(int *)(iVar1 + 0x54) + *(int *)(param_1 + 100);
  *(int *)(param_1 + 0x58) = *(int *)(iVar1 + 0x58) + *(int *)(param_1 + 0x68);
  if (*(char *)(param_1 + 0x73) == '\x04') {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 8);
    sub_080B52C4(param_1);
  }
  return in_lr;
}

