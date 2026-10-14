// sub_080E600C at 0x080E600C (thumb)

undefined4 sub_080E600C(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  sub_080177F4();
  if (*(char *)(param_1 + 0x78) == '\0') {
    iVar1 = (uint)*(ushort *)(param_1 + 0x74) * 0x100;
    *(int *)(param_1 + 0x54) = iVar1;
    *(uint *)(param_1 + 0x58) = (uint)*(ushort *)(param_1 + 0x76) << 8;
    if ((*(char *)(param_1 + 0x10) == '\0') && (0x100 < (ushort)DAT_020023d0)) {
      *(int *)(param_1 + 0x54) = iVar1 + 0x20000;
    }
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836e764)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  return in_lr;
}

