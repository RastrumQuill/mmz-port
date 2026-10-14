// sub_080BCD98 at 0x080BCD98 (thumb)

undefined4 sub_080BCD98(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x28);
  sub_08012580(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  uVar2 = DAT_0202e188 * 0x343fd + 0x269ec3;
  DAT_0202e188 = uVar2 & 0x7fffffff;
  iVar3 = sub_080EF330(uVar2 * 2 >> 0x11,3);
  sub_080127E4(param_1,*(undefined2 *)(&DAT_08348438 + iVar3 * 2));
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(undefined *)(param_1 + 0x25) = 0x11;
  iVar3 = *(int *)(iVar1 + 0x54) + -0x800;
  *(int *)(param_1 + 0x54) = iVar3;
  *(int *)(param_1 + 0x58) = *(int *)(iVar1 + 0x58) + -0xa00;
  uVar2 = DAT_0202e188 * 0x343fd + 0x269ec3;
  DAT_0202e188 = uVar2 & 0x7fffffff;
  *(uint *)(param_1 + 0x54) =
       iVar3 + (uint)*(byte *)(param_1 + 0x11) * 0x400 + (uVar2 * 2 >> 0x11 & 3) * 0x100;
  *(undefined *)(param_1 + 0x12) = 0x20;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 4);
  sub_080BCCE8(param_1);
  return in_lr;
}

