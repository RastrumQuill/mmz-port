// sub_080AD250 at 0x080AD250 (thumb)

undefined4 sub_080AD250(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x28);
  sub_0801749C();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_08017700(param_1,0x6a01);
  *(undefined *)(param_1 + 0x25) = 9;
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(iVar2 + 0x5c);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(iVar2 + 0x60);
  uVar1 = *(undefined4 *)(iVar2 + 0xb4);
  *(undefined4 *)(param_1 + 0x54) = uVar1;
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(iVar2 + 0xb8);
  *(undefined4 *)(param_1 + 0xb4) = uVar1;
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x58);
  *(undefined *)(param_1 + 0x13) = *(undefined *)(param_1 + 0x11);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 4);
  sub_080AD0E0(param_1);
  return in_lr;
}

