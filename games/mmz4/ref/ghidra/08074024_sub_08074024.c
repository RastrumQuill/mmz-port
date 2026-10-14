// sub_08074024 at 0x08074024 (thumb)

undefined4 sub_08074024(int param_1)

{
  byte bVar1;
  bool bVar2;
  char cVar3;
  short sVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  char *pcVar9;
  uint uVar10;
  undefined4 in_lr;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  undefined4 *local_34;
  undefined4 *local_30;
  undefined *local_2c;
  int local_28;
  int local_24;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,0x9301);
    local_28 = param_1 + 0xb4;
    bVar2 = (int)(0x40 - (*(ushort *)(param_1 + 0xc6) & 0x3f)) <
            (int)(0x40 - (*(ushort *)(param_1 + 0xc4) & 0x3f));
    uVar6 = 0;
    iVar7 = param_1 + 0xd4;
    local_24 = param_1 + 0xcc;
    local_34 = (undefined4 *)(param_1 + 0x8c);
    local_30 = (undefined4 *)(param_1 + 0x90);
    local_2c = (undefined *)(param_1 + 0x94);
    do {
      uVar10 = *(byte *)(param_1 + 0xc6) + 0x20;
      uVar8 = uVar10 & 0xff;
      cVar3 = (char)uVar6;
      if (uVar8 < 0x40) {
        bVar1 = bVar2 + cVar3 & 1;
        *(byte *)(iVar7 + uVar6 + 2) = bVar1;
        if ((*(ushort *)(param_1 + 0xc6) & 0x3f) < 0x20) {
          *(byte *)(iVar7 + uVar6 + 4) = bVar1 + 2;
          *(byte *)(iVar7 + uVar6) = bVar1 + 4;
        }
        else {
          *(byte *)(iVar7 + uVar6) = bVar1 + 2;
          *(byte *)(iVar7 + uVar6 + 4) = bVar1 + 4;
        }
        pcVar9 = (char *)(iVar7 + uVar6 + 6);
      }
      else if ((int)(uVar10 * 0x1000000) < 0) {
        if (uVar8 < 0xc0) {
          bVar1 = bVar2 + cVar3 & 1;
          *(byte *)(iVar7 + uVar6 + 6) = bVar1;
          if ((*(ushort *)(param_1 + 0xc6) & 0x3f) < 0x20) {
            *(byte *)(iVar7 + uVar6) = bVar1 + 2;
            *(byte *)(iVar7 + uVar6 + 4) = bVar1 + 4;
          }
          else {
            *(byte *)(iVar7 + uVar6 + 4) = bVar1 + 2;
            *(byte *)(iVar7 + uVar6) = bVar1 + 4;
          }
          pcVar9 = (char *)(iVar7 + uVar6 + 2);
        }
        else {
          bVar1 = bVar2 + cVar3 & 1;
          *(byte *)(iVar7 + uVar6 + 4) = bVar1;
          if ((*(ushort *)(param_1 + 0xc6) & 0x3f) < 0x20) {
            *(byte *)(iVar7 + uVar6 + 6) = bVar1 + 2;
            iVar5 = uVar6 + 2;
          }
          else {
            *(byte *)(iVar7 + uVar6 + 2) = bVar1 + 2;
            iVar5 = uVar6 + 6;
          }
          *(byte *)(iVar7 + iVar5) = bVar1 + 4;
          pcVar9 = (char *)(iVar7 + uVar6);
        }
      }
      else {
        bVar1 = bVar2 + cVar3 & 1;
        *(byte *)(iVar7 + uVar6) = bVar1;
        if ((*(ushort *)(param_1 + 0xc6) & 0x3f) < 0x20) {
          *(byte *)(iVar7 + uVar6 + 2) = bVar1 + 2;
          iVar5 = uVar6 + 6;
        }
        else {
          *(byte *)(iVar7 + uVar6 + 6) = bVar1 + 2;
          iVar5 = uVar6 + 2;
        }
        *(byte *)(iVar7 + iVar5) = bVar1 + 4;
        pcVar9 = (char *)(iVar7 + uVar6 + 4);
      }
      *pcVar9 = (bVar2 + cVar3 & 1U) + 6;
      uVar6 = uVar6 + 1 & 0xff;
    } while (uVar6 < 2);
    uVar6 = 0;
    do {
      if (*(char *)(local_24 + uVar6) != '\0') {
        uVar10 = 0;
        do {
          bVar1 = *(byte *)(iVar7 + uVar10);
          if (*(byte *)(iVar7 + uVar6) < bVar1) {
            *(byte *)(iVar7 + uVar10) = bVar1 - 1;
          }
          uVar10 = uVar10 + 1 & 0xff;
        } while (uVar10 < 8);
      }
      uVar6 = uVar6 + 1 & 0xff;
    } while (uVar6 < 8);
    *(undefined2 *)(param_1 + 0xdc) = 0xf0;
    *local_34 = 0;
    *local_30 = 0;
    *local_2c = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    if (((DAT_0202e918 & 1) != 0) && ((DAT_0202e922 & 1) == 0)) {
      DAT_0202e918 = DAT_0202e918 & 0xfffe | 0x10;
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_0801CFF0(param_1);
  if (*(char *)(param_1 + 0xd) == '\0') {
    local_28 = param_1 + 0xb4;
    if ((*(ushort *)(param_1 + 0xdc) & 0xf) == 0) {
      uVar6 = DAT_0202dc38 * 0x343fd + 0x269ec3;
      local_44 = *(int *)(param_1 + 0x54) + (8 - (uVar6 * 2 >> 0x11 & 0xf)) * 0x100;
      uVar6 = (uVar6 & 0x7fffffff) * 0x343fd + 0x269ec3;
      uVar10 = uVar6 & 0x7fffffff;
      DAT_0202dc38 = uVar10;
      iVar7 = sub_08128A9C(uVar6 * 2 >> 0x11,0x18);
      local_40 = *(int *)(param_1 + 0x58) + (0xc - iVar7) * 0x100;
      uVar6 = uVar10 * 0x343fd + 0x269ec3;
      DAT_0202dc38 = uVar6 & 0x7fffffff;
      sub_080E16B4(&local_44,uVar6 * 2 >> 0x11 & 0xff,0x1c0);
      sub_08002B10(0x35);
      if ((*(ushort *)(local_28 + 0x28) & 0xf) == 0) {
        uVar6 = DAT_0202dc38 * 0x343fd + 0x269ec3;
        local_3c = *(int *)(param_1 + 0x54) + (8 - (uVar6 * 2 >> 0x11 & 0xf)) * 0x100;
        uVar6 = (uVar6 & 0x7fffffff) * 0x343fd + 0x269ec3;
        DAT_0202dc38 = uVar6 & 0x7fffffff;
        iVar7 = sub_08128A9C(uVar6 * 2 >> 0x11,0x18);
        local_38 = *(int *)(param_1 + 0x58) + (0xc - iVar7) * 0x100;
        sub_080D0894(2);
      }
    }
    sVar4 = *(short *)(local_28 + 0x28) + -1;
    *(short *)(local_28 + 0x28) = sVar4;
    if (sVar4 == -1) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
      iVar7 = param_1 + 0x54;
      sub_080D0894(1,iVar7);
      uVar6 = DAT_0202dc38 * 0x343fd + 0x269ec3;
      DAT_0202dc38 = uVar6 & 0x7fffffff;
      sub_080D4898(iVar7,&DAT_088597d0,0,(uVar6 * 2 >> 0x11 & 1) << 4);
      uVar6 = DAT_0202dc38 * 0x343fd + 0x269ec3;
      DAT_0202dc38 = uVar6 & 0x7fffffff;
      sub_080D4898(iVar7,&DAT_088597ec,0,(uVar6 * 2 >> 0x11 & 1) << 4);
      uVar6 = DAT_0202dc38 * 0x343fd + 0x269ec3;
      DAT_0202dc38 = uVar6 & 0x7fffffff;
      sub_080D4898(iVar7,&DAT_08859808,0,(uVar6 * 2 >> 0x11 & 1) << 4);
      uVar6 = DAT_0202dc38 * 0x343fd + 0x269ec3;
      DAT_0202dc38 = uVar6 & 0x7fffffff;
      sub_080D4898(iVar7,&DAT_08859824,0,(uVar6 * 2 >> 0x11 & 1) << 4);
      uVar6 = DAT_0202dc38 * 0x343fd + 0x269ec3;
      DAT_0202dc38 = uVar6 & 0x7fffffff;
      sub_080D4898(iVar7,&DAT_08859840,0,(uVar6 * 2 >> 0x11 & 1) << 4);
      sub_08002B10(0x2a);
      DAT_0202e922 = DAT_0202e922 | 2;
      *(undefined2 *)(local_28 + 0x28) = 0x40;
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
  }
  return in_lr;
}

