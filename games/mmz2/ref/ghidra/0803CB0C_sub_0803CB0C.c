// sub_0803CB0C at 0x0803CB0C (thumb)

undefined4 sub_0803CB0C(int param_1)

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
  iVar6 = sub_0803D0B0(param_1,iVar9);
  if (iVar6 == 0) {
    bVar1 = *(byte *)(param_1 + 0x10);
    cVar2 = *(char *)(param_1 + 0x11);
    cVar3 = *(char *)(param_1 + 0x71);
    uVar7 = sub_0803D0E8(param_1,iVar9);
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
    if (*(char *)(param_1 + 0x73) == '\x03') {
      *(undefined *)(param_1 + 0xd) = 1;
      *(undefined *)(param_1 + 0xe) = 0;
      sub_0803D1EC(param_1,1,0,0);
      iVar6 = -1;
      if ((bVar4 & 1) != 0) {
        iVar6 = 1;
      }
      if (uVar7 == 4) {
        iVar6 = -iVar6;
      }
      *(int *)(param_1 + 0x54) =
           *(int *)(param_1 + 0x54) + iVar6 * *(short *)(&DAT_08338948 + uVar7 * 4);
      *(int *)(param_1 + 0x58) =
           *(int *)(param_1 + 0x58) + (int)*(short *)(&DAT_0833894a + uVar7 * 4);
    }
    else if (((*(char *)(param_1 + 0x72) < '\x02') && (cVar3 != '\x01')) && (cVar3 == '\x02')) {
      sub_080032EC(0x1b);
    }
    sub_080128D4(param_1);
    if (((uVar7 != bVar1) || (*(char *)(param_1 + 0x11) != cVar2)) ||
       (*(char *)(param_1 + 0x71) != cVar3)) {
      sub_0803D234(param_1);
    }
  }
  else {
    sub_0803CEBC(param_1);
  }
  return in_lr;
}

