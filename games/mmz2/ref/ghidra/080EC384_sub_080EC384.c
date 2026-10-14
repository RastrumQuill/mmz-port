// sub_080EC384 at 0x080EC384 (thumb)

undefined4 sub_080EC384(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  short sVar6;
  undefined4 in_lr;
  
  cVar5 = *(char *)(param_1 + 0xddc);
  sVar6 = 0;
  if ((DAT_02000d14 & 2) == 0) {
    uVar1 = (uint)*(byte *)(param_1 + 0xdda);
    uVar3 = (uint)*(ushort *)(param_1 + 0xde0);
    uVar4 = (uint)*(ushort *)(param_1 + 0xde2);
    if ((DAT_02000d14 & 0x31) == 0) {
      if ((DAT_02000d10 & 0xc0) != 0) {
        if (((uVar3 != 0) && (uVar3 < uVar4)) && (sVar6 = 0x80, (DAT_02000d10 & 0x40) != 0)) {
          sVar6 = 0x40;
        }
        if ((DAT_02000d16 & 0xc0) != 0) {
          iVar2 = 1;
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            iVar2 = iVar2 * 10;
          }
          if (((uVar3 == uVar4) && ((DAT_02000d14 & 0x40) != 0)) ||
             ((uVar3 == 0 && ((DAT_02000d14 & 0x80) != 0)))) {
            if (uVar3 == 0) {
              sVar6 = 0x80;
            }
            else {
              sVar6 = 0x40;
              uVar4 = 0;
            }
          }
          else {
            if ((DAT_02000d16 & 0x40) == 0) {
              iVar2 = -iVar2;
            }
            uVar3 = uVar3 + iVar2;
            if (((int)uVar3 <= (int)uVar4) && (uVar4 = uVar3, (int)uVar3 < 0)) {
              uVar4 = 0;
            }
          }
          if (*(ushort *)(param_1 + 0xde0) != uVar4) {
            *(ushort *)(param_1 + 0xde0) = (ushort)uVar4;
            sub_080032EC(1);
          }
        }
      }
    }
    else if ((DAT_02000d14 & 1) == 0) {
      if ((DAT_02000d14 & 0x20) == 0) {
        iVar2 = uVar1 - 1;
      }
      else {
        iVar2 = uVar1 + 1;
      }
      uVar1 = sub_080EF330(iVar2 + (uint)*(byte *)(param_1 + 0xddb));
      if (uVar1 != *(byte *)(param_1 + 0xdda)) {
        *(byte *)(param_1 + 0xdda) = (byte)uVar1;
        cVar5 = '\0';
        sub_080032EC(1);
      }
    }
    else if (uVar3 == 0) {
      sub_080032EC(4);
    }
    else {
      *(undefined *)(param_1 + 3) = 2;
      *(undefined2 *)(param_1 + 4) = 0;
      sub_080032EC(0x10f);
    }
  }
  else {
    *(undefined *)(param_1 + 2) = 1;
    *(undefined *)(param_1 + 3) = 1;
    *(undefined2 *)(param_1 + 4) = 0;
    sub_080032EC(3);
  }
  *(short *)(param_1 + 0xde6) = sVar6;
  if (sVar6 != 0) {
    cVar5 = '\0';
  }
  *(byte *)(param_1 + 0xddc) = cVar5 + 0x1fU & 0x1f;
  sub_080ECAD4(param_1);
  return in_lr;
}

