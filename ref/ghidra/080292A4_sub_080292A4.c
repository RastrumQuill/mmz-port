// sub_080292A4 at 0x080292A4 (thumb)

undefined4 sub_080292A4(int param_1)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 0xd) == '\x01') && (*(byte *)(param_1 + 0xe) < 2)) {
    iVar3 = *(int *)(param_1 + 0x4c);
    if (*(char *)(param_1 + 0x13) == '\0') {
      iVar1 = sub_08008120(iVar3,*(undefined4 *)(param_1 + 0x50));
    }
    else {
      iVar1 = sub_08007EE0(iVar3,*(undefined4 *)(param_1 + 0x50));
    }
    if (iVar1 != 0) {
      *(int *)(param_1 + 0x4c) = iVar3 + iVar1;
      goto LAB_080292dc;
    }
  }
  else {
    iVar1 = 0;
LAB_080292dc:
    if (iVar1 != 0) goto LAB_080292f0;
  }
  if ((*(ushort *)(param_1 + 0x90) & 0x220) == 0) {
    *(byte *)(param_1 + 0x62) = (byte)*(ushort *)(param_1 + 0x90) & 0x20;
    return in_lr;
  }
LAB_080292f0:
  pbVar2 = (byte *)(param_1 + 0x62);
  if (*pbVar2 == 0) {
    sub_08001EAC(4);
    *pbVar2 = *pbVar2 | 1;
  }
  return in_lr;
}

