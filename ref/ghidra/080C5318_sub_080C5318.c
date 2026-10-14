// sub_080C5318 at 0x080C5318 (thumb)

undefined4 sub_080C5318(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  short sVar6;
  undefined4 in_lr;
  
  cVar5 = *(char *)(param_1 + 0x9e8);
  sVar6 = 0;
  if ((DAT_02004ca8 & 2) == 0) {
    uVar1 = (uint)*(byte *)(param_1 + 0x9e6);
    uVar3 = (uint)*(ushort *)(param_1 + 0x9ec);
    uVar4 = (uint)*(ushort *)(param_1 + 0x9ee);
    if ((DAT_02004ca8 & 0x31) == 0) {
      if ((DAT_02004ca4 & 0xc0) != 0) {
        if (((uVar3 != 0) && (uVar3 < uVar4)) && (sVar6 = 0x80, (DAT_02004ca4 & 0x40) != 0)) {
          sVar6 = 0x40;
        }
        if ((DAT_02004caa & 0xc0) != 0) {
          iVar2 = 1;
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            iVar2 = iVar2 * 10;
          }
          if (((uVar3 == uVar4) && ((DAT_02004ca8 & 0x40) != 0)) ||
             ((uVar3 == 0 && ((DAT_02004ca8 & 0x80) != 0)))) {
            if (uVar3 == 0) {
              sVar6 = 0x80;
            }
            else {
              sVar6 = 0x40;
              uVar4 = 0;
            }
          }
          else {
            if ((DAT_02004caa & 0x40) == 0) {
              iVar2 = -iVar2;
            }
            uVar3 = uVar3 + iVar2;
            if (((int)uVar3 <= (int)uVar4) && (uVar4 = uVar3, (int)uVar3 < 0)) {
              uVar4 = 0;
            }
          }
          if (*(ushort *)(param_1 + 0x9ec) != uVar4) {
            *(ushort *)(param_1 + 0x9ec) = (ushort)uVar4;
            sub_08001EAC(0x29);
          }
        }
      }
    }
    else if ((DAT_02004ca8 & 1) == 0) {
      if ((DAT_02004ca8 & 0x20) == 0) {
        iVar2 = uVar1 - 1;
      }
      else {
        iVar2 = uVar1 + 1;
      }
      uVar1 = sub_080C8CB0(iVar2 + (uint)*(byte *)(param_1 + 0x9e7));
      if (uVar1 != *(byte *)(param_1 + 0x9e6)) {
        *(byte *)(param_1 + 0x9e6) = (byte)uVar1;
        cVar5 = '\0';
        sub_08001EAC(0x29);
      }
    }
    else if (uVar3 == 0) {
      sub_08001EAC(0xc1);
    }
    else {
      *(undefined *)(param_1 + 3) = 2;
      *(undefined2 *)(param_1 + 4) = 0;
      sub_08001EAC(0x2a);
    }
  }
  else {
    *(undefined *)(param_1 + 2) = 1;
    *(undefined *)(param_1 + 3) = 1;
    *(undefined2 *)(param_1 + 4) = 0;
    sub_08001EAC(0x28);
  }
  *(short *)(param_1 + 0x9f2) = sVar6;
  if (sVar6 != 0) {
    cVar5 = '\0';
  }
  *(byte *)(param_1 + 0x9e8) = cVar5 + 0x1fU & 0x1f;
  sub_080C598C(param_1);
  return in_lr;
}

