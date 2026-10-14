// sub_080205D4 at 0x080205D4 (thumb)

undefined4 sub_080205D4(int param_1)

{
  byte bVar1;
  undefined uVar2;
  int iVar3;
  ushort uVar4;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xf);
  if (((*(byte *)(param_1 + 0x17a) & 8) == 0) && (bVar1 != 0)) {
    iVar3 = -1;
    if (*(char *)(param_1 + 0x117) != '\0') {
      iVar3 = 1;
    }
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + iVar3 * 0x100;
    sub_0801A0A4(param_1 + 0x4c,param_1 + 0xc4,*(undefined4 *)(param_1 + 0x108),
                 *(byte *)(param_1 + 10) >> 4 & 1,1,1);
  }
  sub_080C8A98(param_1,*(undefined4 *)(&DAT_082a9a48 + (uint)bVar1 * 4));
  if (*(char *)(param_1 + 0x73) != '\x03') {
    return in_lr;
  }
  uVar4 = *(ushort *)(param_1 + 0x90) & 0x80;
  if ((*(ushort *)(param_1 + 0x90) & 0x80) == 0) {
    if (*(byte *)(param_1 + 0xf) < 2) {
      *(undefined *)(param_1 + 0xbc) = *(undefined *)(param_1 + 0xd);
      *(char *)(param_1 + 0xd) = (char)uVar4;
      goto LAB_08020686;
    }
    *(undefined *)(param_1 + 0xbc) = *(undefined *)(param_1 + 0xd);
    uVar2 = 1;
  }
  else {
    uVar4 = 0;
    *(undefined *)(param_1 + 0xbc) = *(undefined *)(param_1 + 0xd);
    uVar2 = 5;
  }
  *(undefined *)(param_1 + 0xd) = uVar2;
LAB_08020686:
  *(undefined *)(param_1 + 0xbd) = *(undefined *)(param_1 + 0xe);
  *(ushort *)(param_1 + 0xe) = uVar4;
  *(undefined *)(param_1 + 0xc1) = *(undefined *)(param_1 + 0xbe);
  *(undefined *)(param_1 + 0xbe) = 0;
  *(undefined *)(param_1 + 0xc2) = *(undefined *)(param_1 + 0xbf);
  *(undefined *)(param_1 + 0xbf) = 0;
  *(undefined *)(param_1 + 0xc3) = *(undefined *)(param_1 + 0xc0);
  *(undefined *)(param_1 + 0xc0) = 0;
  return in_lr;
}

