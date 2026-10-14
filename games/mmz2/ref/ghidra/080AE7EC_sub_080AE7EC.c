// sub_080AE7EC at 0x080AE7EC (thumb)

undefined4 sub_080AE7EC(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = *(byte *)(param_1 + 0x12) - 1;
  *(char *)(param_1 + 0x12) = (char)uVar1;
  *(undefined2 *)(param_1 + 0x50) =
       *(undefined2 *)(&DAT_08345c84 + (uVar1 & 0xfe) + (*(byte *)(param_1 + 0x10) - 8) * 6);
  *(undefined2 *)(param_1 + 0x52) =
       *(undefined2 *)
        (&DAT_08345c84 +
        ((*(byte *)(param_1 + 0x10) - 8) * 3 + (uint)(*(byte *)(param_1 + 0x12) >> 1)) * 2);
  *(undefined *)(param_1 + 0x24) = (&DAT_08345c80)[*(byte *)(param_1 + 0x12) >> 1];
  if (*(char *)(param_1 + 0x12) == '\0') {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

