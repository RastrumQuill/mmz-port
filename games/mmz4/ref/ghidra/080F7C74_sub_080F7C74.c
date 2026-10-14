// sub_080F7C74 at 0x080F7C74 (thumb)

undefined4 sub_080F7C74(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  sub_0801CC9C();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801CF00(param_1,0x7200);
  *(undefined *)(param_1 + 0xb5) = 0;
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
  *(undefined **)(param_1 + 0x30) = &DAT_08866e20;
  *(undefined2 *)(param_1 + 0x26) = 1;
  if (*(char *)(param_1 + 0x11) == '\0') {
    iVar1 = 0x2d040;
  }
  else {
    iVar1 = 0x2d041;
  }
  iVar1 = sub_08128A24((&DAT_02000ab0)[iVar1],3);
  iVar1 = ((uint)(iVar1 << 0x18) >> 0x15) + (uint)*(byte *)(param_1 + 0x11) * 0x28;
  uVar2 = *(undefined4 *)(&DAT_08866e2c + iVar1);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(&DAT_08866e28 + iVar1);
  *(undefined4 *)(param_1 + 0x58) = uVar2;
  return in_lr;
}

