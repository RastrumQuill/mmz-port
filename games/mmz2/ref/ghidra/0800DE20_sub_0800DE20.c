// sub_0800DE20 at 0x0800DE20 (thumb)

undefined4 sub_0800DE20(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  uVar2 = *(ushort *)(param_1 + 0x10) >> 1 & 7;
  iVar3 = uVar2 * 2;
  iVar1 = uVar2 * 8;
  uVar2 = (uint)(*(int *)(param_1 + 0x5c) << 0x10) >> 0x14;
  sub_08002824(&UNK_0836d108 + *(int *)(&DAT_0836d280 + iVar1) + (iVar3 + 0x60) * 4,
               ((ushort)(&DAT_02000f94)[uVar2] & 0x1f00) << 3);
  sub_08002824(&UNK_0836d108 + *(int *)(&DAT_0836d284 + iVar1) + (iVar3 + 0x61) * 4,
               ((ushort)(&DAT_02000f94)[uVar2] & 0x1f00) * 8 + 0x800,0x800);
  *(short *)(&DAT_02000f9c + uVar2) = (short)*(undefined4 *)(param_1 + 0x34) + -0xf0;
  *(short *)((int)&DAT_02000f9c + uVar2 * 4 + 2) = (short)*(undefined4 *)(param_1 + 0x38) + -0xe0;
  return in_lr;
}

