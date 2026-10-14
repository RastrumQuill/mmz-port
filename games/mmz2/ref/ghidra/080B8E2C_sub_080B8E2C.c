// sub_080B8E2C at 0x080B8E2C (thumb)

undefined4 sub_080B8E2C(int param_1)

{
  ushort uVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x28);
  sub_080128D4();
  uVar1 = *(ushort *)(param_1 + 0x50);
  if (uVar1 < 0x200) {
    *(ushort *)(param_1 + 0x50) = uVar1 + 4;
    *(short *)(param_1 + 0x52) = *(short *)(param_1 + 0x52) + 4;
  }
  if (*(char *)(iVar2 + 0xc) == '\x04') {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 8);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  }
  return in_lr;
}

