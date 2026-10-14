// sub_08080F64 at 0x08080F64 (thumb)

undefined4 sub_08080F64(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x20);
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  *(undefined *)(param_1 + 0x1f) = *(undefined *)(iVar1 + 0x13);
  *(int *)(param_1 + 0x4c) =
       *(int *)(iVar1 + 0x4c) + (short)(&DAT_080c8e24)[*(byte *)(iVar1 + 0x13) + 0x40] * 0xe;
  *(int *)(param_1 + 0x50) =
       *(int *)(iVar1 + 0x50) + (short)(&DAT_080c8e24)[*(byte *)(iVar1 + 0x13)] * 0xe;
  if (1 < *(byte *)(iVar1 + 0xc)) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b17b0)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

