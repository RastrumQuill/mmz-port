// sub_080D2C64 at 0x080D2C64 (thumb)

undefined4 sub_080D2C64(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) != 0) &&
     (uVar1 = sub_0801A9A8(&DAT_02030288,param_1 + 0x54), uVar1 < 0x1000)) {
    iVar2 = *(int *)(param_1 + 0x5c) + 4;
    *(int *)(param_1 + 0x5c) = iVar2;
    if (0x700 < iVar2) {
      *(undefined4 *)(param_1 + 0x5c) = 0x700;
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) - *(int *)(param_1 + 0x5c);
  }
  return in_lr;
}

