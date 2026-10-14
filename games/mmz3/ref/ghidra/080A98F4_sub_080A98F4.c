// sub_080A98F4 at 0x080A98F4 (thumb)

undefined4 sub_080A98F4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 4);
  sub_080048A0(param_1 + 0x34,0x80a9a65);
  *(int *)(param_1 + 0x3c) = param_1;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xf7 | 3;
  uVar1 = *(undefined4 *)(iVar2 + 0x58);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar2 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = uVar1;
  DAT_02002410 = DAT_02002410 | 0x4000;
  DAT_0200241d = 0x31;
  DAT_0200241e = DAT_0200241e | 0xe;
  DAT_03002ac0 = 0x7fff;
  *(undefined *)(param_1 + 0x13) = 0;
  *(undefined *)(param_1 + 0x12) = 0;
  sub_080A9590(param_1);
  return in_lr;
}

