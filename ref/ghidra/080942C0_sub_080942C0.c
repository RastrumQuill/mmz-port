// sub_080942C0 at 0x080942C0 (thumb)

undefined4 sub_080942C0(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(iVar2 + 0x4c);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(iVar2 + 0x50);
  if (*(char *)(param_1 + 0x10) == '\0') {
    *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x04';
  }
  else {
    *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\b';
  }
  *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + 1;
  *(short *)(param_1 + 0x48) =
       (short)((short)(&DAT_080c8e24)[*(byte *)(param_1 + 0x13) + 0x40] + 0x100 >> 3) + 0x100;
  *(short *)(param_1 + 0x4a) =
       (short)((short)(&DAT_080c8e24)[*(byte *)(param_1 + 0x13) + 0x40] + 0x100 >> 3) + 0x100;
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(iVar2 + 0x34);
  *(undefined *)(param_1 + 0x46) = *(undefined *)(iVar2 + 0x46);
  bVar1 = *(byte *)(iVar2 + 10) >> 4;
  *(byte *)(param_1 + 0x44) = bVar1 & 1;
  if ((bVar1 & 1) == 0) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
  }
  if ((1 < *(byte *)(iVar2 + 0xc)) || (*(char *)(param_1 + 0x11) != '\0')) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 8);
    sub_08094398(param_1);
  }
  return in_lr;
}

