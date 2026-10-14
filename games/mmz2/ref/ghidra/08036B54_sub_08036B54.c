// sub_08036B54 at 0x08036B54 (thumb)

undefined4 sub_08036B54(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  if ((*(ushort *)(param_1 + 0x218) & 0x100) == 0) {
    *(undefined *)(param_1 + 0x2b7) = 0x80;
  }
  else {
    iVar1 = sub_08039F4C(*(undefined4 *)(param_1 + 0x2c));
    if ((iVar1 != 0) && (*(char *)(iVar1 + 0x6a) == '\0')) {
      uVar2 = (uint)*(byte *)(param_1 + 0x2b7);
      if ((uVar2 == 0) || (iVar3 = uVar2 - 1, iVar3 == 0)) {
        *(char *)(iVar1 + 0x6a) = '\x01';
        iVar3 = 0x60;
      }
      *(byte *)(param_1 + 0x2b7) = (byte)iVar3;
    }
  }
  return in_lr;
}

