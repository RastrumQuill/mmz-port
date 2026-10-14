// sub_080C3400 at 0x080C3400 (thumb)

undefined4 sub_080C3400(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_08012580(param_1);
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x54);
  uVar1 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0x58) = uVar1;
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -0xf000;
  iVar2 = sub_08015188(&DAT_0202ed18,param_1 + 0x54);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -0x1000 + iVar2;
  DAT_0202e5f0 = 0x340;
  DAT_0202e3f0 = 8;
  sub_08002638(&DAT_084330c0,0x10000);
  sub_08002AEC(&DAT_084330cc,(DAT_0202e3f0 - 8) * 0x20 + 0x200);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0834863c + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_080C22E8(param_1);
  return in_lr;
}

