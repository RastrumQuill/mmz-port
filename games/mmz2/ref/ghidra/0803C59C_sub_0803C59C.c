// sub_0803C59C at 0x0803C59C (thumb)

undefined4 sub_0803C59C(int param_1)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 in_lr;
  
  iVar9 = *(int *)(param_1 + 0x28);
  iVar6 = sub_0803C938(param_1,iVar9);
  if (iVar6 == 0) {
    bVar1 = *(byte *)(param_1 + 0x10);
    cVar2 = *(char *)(param_1 + 0x11);
    cVar3 = *(char *)(param_1 + 0x71);
    uVar7 = sub_0803C970(param_1,iVar9);
    uVar8 = *(undefined4 *)(iVar9 + 0x58);
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar9 + 0x54);
    *(undefined4 *)(param_1 + 0x58) = uVar8;
    bVar4 = *(byte *)(iVar9 + 10) >> 4;
    if ((bVar4 & 1) == 0) {
      bVar5 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar5 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar5;
    *(char *)(param_1 + 0x4c) = (char)(bVar4 & 1);
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)((bVar4 & 1) << 4);
    if (uVar7 == 1) {
      iVar6 = -1;
      if ((bVar4 & 1) != 0) {
        iVar6 = 1;
      }
      iVar9 = *(char *)(iVar9 + 0x71) * 4;
      *(int *)(param_1 + 0x54) =
           *(int *)(param_1 + 0x54) + *(short *)(&DAT_0833870c + iVar9) * iVar6;
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + (int)*(short *)(&DAT_0833870e + iVar9);
    }
    sub_080EF118(param_1,*(undefined4 *)(&DAT_08338910 + (uint)*(byte *)(param_1 + 0xd) * 4));
    if (*(char *)(param_1 + 0xc) == '\x01') {
      if (*(char *)(param_1 + 0x13) != '\0') {
        *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + -1;
      }
      sub_080128D4(param_1);
      if (((uVar7 == bVar1) && (*(char *)(param_1 + 0x11) == cVar2)) &&
         (*(char *)(param_1 + 0x71) == cVar3)) {
        return in_lr;
      }
      sub_0803C9F4(param_1);
      return in_lr;
    }
  }
  sub_0803C734(param_1);
  return in_lr;
}

