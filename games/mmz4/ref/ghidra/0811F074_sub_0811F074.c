// sub_0811F074 at 0x0811F074 (thumb)

undefined4 sub_0811F074(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x63a8);
  if (*(char *)(param_1 + 3) == '\0') {
    bVar1 = sub_08128954(*(byte *)(iVar2 + 0xf6) + 1,3);
    *(byte *)(iVar2 + 0xf6) = bVar1;
    *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
  }
  sub_0810D214(&DAT_0886a17c +
               (ushort)(&DAT_08869ac0)
                       [(uint)*(byte *)(iVar2 + 0xf0) * 3 + *(byte *)(iVar2 + 0xf6) + 800],0x11,7);
  if ((DAT_02000764 & 3) != 0) {
    sub_08002B10(2);
    *(undefined *)(param_1 + 2) = 0;
    *(undefined *)(param_1 + 3) = 0;
  }
  return in_lr;
}

