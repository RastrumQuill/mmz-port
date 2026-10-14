// sub_0800A320 at 0x0800A320 (thumb)

undefined4 sub_0800A320(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined2 *)(param_1 + 0x10) = 0;
    *(undefined2 *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  if (*(short *)(param_1 + 0x12) == 0) {
    iVar1 = *(ushort *)(param_1 + 0x10) + 1;
    *(short *)(param_1 + 0x10) = (short)iVar1;
    if ((&DAT_08294880)[iVar1 * 2] == -1) {
      *(undefined2 *)(param_1 + 0x10) = 0;
    }
    *(undefined *)(param_1 + 0xf) = (&DAT_08294880)[(uint)*(ushort *)(param_1 + 0x10) * 2];
    *(ushort *)(param_1 + 0x12) =
         (ushort)(byte)(&DAT_08294881)[(uint)*(ushort *)(param_1 + 0x10) * 2];
  }
  *(short *)(param_1 + 0x12) = *(short *)(param_1 + 0x12) + -1;
  return in_lr;
}

