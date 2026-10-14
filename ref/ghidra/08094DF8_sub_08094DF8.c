// sub_08094DF8 at 0x08094DF8 (thumb)

undefined4 sub_08094DF8(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 == 1) {
    iVar2 = 0xff;
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        return in_lr;
      }
      if (*(int *)(param_1 + 0x54) < 0x1e1) {
        return in_lr;
      }
      *(undefined *)(param_1 + 0xd) = 1;
      return in_lr;
    }
    if (bVar1 != 2) {
      if (bVar1 != 3) {
        return in_lr;
      }
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 8)
      ;
      sub_08094E7C(param_1);
      return in_lr;
    }
    iVar2 = *(byte *)(param_1 + 0x12) - 8;
    if (iVar2 < 0) {
      DAT_02004f8d = 0xff;
      DAT_02004f80 = DAT_02004f80 & 0xbfff;
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      return in_lr;
    }
  }
  *(char *)(param_1 + 0x12) = (char)iVar2;
  return in_lr;
}

