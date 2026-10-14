// sub_080BC448 at 0x080BC448 (thumb)

undefined4 sub_080BC448(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  sub_08012580();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_080127E4(param_1,*(undefined2 *)(&DAT_0834738e + (uint)*(byte *)(param_1 + 0x11) * 2));
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  uVar1 = *(undefined4 *)(iVar3 + 0x58);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar3 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = uVar1;
  uVar2 = DAT_0202e188 * 0x343fd + 0x269ec3;
  *(uint *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + (8 - (uVar2 * 2 >> 0x11 & 0xf)) * 0x100;
  uVar2 = (uVar2 & 0x7fffffff) * 0x343fd + 0x269ec3;
  DAT_0202e188 = uVar2 & 0x7fffffff;
  *(uint *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + (8 - (uVar2 * 2 >> 0x11 & 0xf)) * 0x100;
  *(undefined *)(param_1 + 0x12) = 0x60;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 4);
  sub_080BC354(param_1);
  return in_lr;
}

