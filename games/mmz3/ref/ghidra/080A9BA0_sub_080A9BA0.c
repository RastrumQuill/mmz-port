// sub_080A9BA0 at 0x080A9BA0 (thumb)

undefined4 sub_080A9BA0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(iVar2 + 0x58);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar2 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = uVar1;
  *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
  if (*(char *)(iVar2 + 0xd) != '\x0f') {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 8);
    sub_080A95A8(param_1);
  }
  return in_lr;
}

