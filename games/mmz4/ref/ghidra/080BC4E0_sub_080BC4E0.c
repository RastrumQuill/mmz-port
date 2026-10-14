// sub_080BC4E0 at 0x080BC4E0 (thumb)

undefined4 sub_080BC4E0(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x28);
  *(int *)(iVar1 + 0xe00) = *(int *)(iVar1 + 0xe00) + -1;
  *(uint *)(iVar1 + 0xdf4) = *(uint *)(iVar1 + 0xdf4) & ~(1 << *(sbyte *)(param_1 + 0x11));
  if (*(int *)(iVar1 + 0xe08) == 1) {
    *(uint *)(iVar1 + 0xdd4) =
         *(int *)(iVar1 + 0xdd4) +
         (uint)(byte)(&UNK_088613af)
                     [(uint)*(byte *)(param_1 + 0x10) * 4 + (uint)*(byte *)(param_1 + 0x12)];
    sub_08002B10(0x1a3);
  }
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}

