// sub_0804CAC4 at 0x0804CAC4 (thumb)

undefined4 sub_0804CAC4(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  short sVar4;
  int iVar5;
  short sVar6;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08012580(param_1);
    sub_080127D0(param_1);
    sub_080127E4(param_1,0xa110);
    *(bool *)(param_1 + 0x4c) = 0 < *(int *)(param_1 + 0x5c);
    *(byte *)(param_1 + 0x4a) =
         *(byte *)(param_1 + 0x4a) & 0xef | (0 < *(int *)(param_1 + 0x5c)) << 4;
    if (*(int *)(param_1 + 0x5c) < 1) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    DAT_02000f90 = DAT_02000f90 & 0xdbff;
    DAT_02000fec._2_1_ = DAT_02000fec._2_1_ | 4;
    DAT_02000fe0 = DAT_02000fe0 & 0xbfff;
    *(undefined *)(param_1 + 0x12) = 0x11;
    *(undefined *)(param_1 + 0xf) = 0;
    sub_080032EC(0x68);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  sub_08006E08(param_1 + 0x74,
               &DAT_0833b298 + (uint)(byte)(&DAT_0833b5fc)[*(char *)(param_1 + 0x71)] * 0x18);
  if ((*(uint *)(param_1 + 0x8c) & 4) != 0) {
    iVar5 = *(int *)(param_1 + 0xd8);
    if (((iVar5 != 0) && ((*(uint *)(iVar5 + 0x8c) & 0x200) == 0)) &&
       (*(short *)(iVar5 + 0xa4) != 0)) {
      if (*(char *)(param_1 + 0x71) < '\x02') {
        sVar4 = -0x600;
        if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
          sVar4 = 0x600;
        }
        sVar6 = -0x280;
      }
      else {
        sVar6 = -0x600;
        sVar4 = 0;
      }
      sub_08022EA8(*(int *)(param_1 + 0xd8),0,(int)sVar4,(int)sVar6,0,0x40,0x18,0);
    }
  }
  bVar1 = *(byte *)(param_1 + 0xf);
  if (bVar1 == 1) {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -0x600;
  }
  else if (bVar1 < 2) {
    if (bVar1 != 0) {
      return in_lr;
    }
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != -1) {
      return in_lr;
    }
  }
  else {
    if (bVar1 != 2) {
      if (bVar1 != 3) {
        return in_lr;
      }
      iVar3 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
      *(int *)(param_1 + 0x58) = iVar3;
      iVar5 = *(int *)(param_1 + 0x60) + 0x40;
      *(int *)(param_1 + 0x60) = iVar5;
      if (iVar5 < 1) {
        return in_lr;
      }
      if (iVar3 < *(int *)(param_1 + 0xcc)) {
        return in_lr;
      }
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xcc);
      *(undefined *)(param_1 + 0xd) = 4;
      *(undefined *)(param_1 + 0xe) = 0;
      *(undefined *)(param_1 + 0x12) = 1;
      return in_lr;
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -0x1300;
    *(undefined4 *)(param_1 + 0x60) = 0xfffffb00;
  }
  *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  return in_lr;
}

