// sub_08068594 at 0x08068594 (thumb)

undefined4 sub_08068594(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return in_lr;
      }
      sub_080177F4(param_1);
      if ((uint)((*(int *)(DAT_0202f5c0 + 0x54) + 0x3800) - *(int *)(param_1 + 0x54)) < 0x7000) {
        return in_lr;
      }
      *(undefined *)(param_1 + 0xd) = 3;
      *(undefined *)(param_1 + 0xe) = 0;
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    sub_08017700(param_1,0x800);
    *(undefined *)(param_1 + 0xb9) = 0;
    sub_08007390(param_1 + 0x74,&DAT_08362864);
    iVar2 = *(int *)(param_1 + 0xbc);
    if (iVar2 != 0) {
      *(byte *)(iVar2 + 10) = *(byte *)(iVar2 + 10) & 0xfe;
      iVar2 = *(int *)(param_1 + 0xbc);
      *(byte *)(iVar2 + 10) = *(byte *)(iVar2 + 10) & 0xfc;
      *(undefined4 *)(iVar2 + 0xc) = 3;
      *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(iVar2 + 9)] + 0xc);
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080177F4(param_1);
  if ((uint)((*(int *)(DAT_0202f5c0 + 0x54) + 0x3800) - *(int *)(param_1 + 0x54)) < 0x7000) {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}

