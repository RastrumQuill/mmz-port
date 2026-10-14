// sub_080B430C at 0x080B430C (thumb)

undefined4 sub_080B430C(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = *(byte *)(param_1 + 0x12) - 1;
  *(char *)(param_1 + 0x12) = (char)uVar1;
  *(undefined2 *)(param_1 + 0x50) =
       *(undefined2 *)(&DAT_0836a3d4 + (uVar1 & 0xfe) + (*(byte *)(param_1 + 0x10) - 8) * 6);
  *(undefined2 *)(param_1 + 0x52) =
       *(undefined2 *)
        (&DAT_0836a3d4 +
        ((*(byte *)(param_1 + 0x10) - 8) * 3 + (uint)(*(byte *)(param_1 + 0x12) >> 1)) * 2);
  *(undefined *)(param_1 + 0x24) = (&DAT_0836a3d0)[*(byte *)(param_1 + 0x12) >> 1];
  if (*(char *)(param_1 + 0x12) == '\0') {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

