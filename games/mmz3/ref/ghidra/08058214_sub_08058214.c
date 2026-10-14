// sub_08058214 at 0x08058214 (thumb)

undefined4 sub_08058214(int param_1)

{
  byte bVar1;
  undefined uVar2;
  char cVar3;
  undefined2 uVar4;
  short sVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        *(undefined *)(param_1 + 0x12) = 0xc;
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (bVar1 != 3) {
        return in_lr;
      }
      cVar3 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar3;
      if (cVar3 == '\0') {
        *(undefined *)(param_1 + 0xd) = 6;
        *(undefined *)(param_1 + 0xe) = 0;
      }
      sub_080177F4(param_1);
      sub_08007390(param_1 + 0x74,
                   &DAT_08360594 + (uint)(byte)(&DAT_08361284)[*(char *)(param_1 + 0x71)] * 0x18);
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    sub_08017700(param_1,0xb207);
    uVar2 = sub_080FE124(0x400);
    *(undefined *)(param_1 + 0x12) = uVar2;
    iVar6 = sub_080FE124(0x400);
    *(uint *)(param_1 + 0x60) = -((uint)(iVar6 << 0x10) >> 0xb);
    iVar6 = *(int *)(DAT_0202f5c0 + 0x54) - *(int *)(param_1 + 0x54);
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      if (iVar6 < -0x8000) {
        iVar6 = -0x8000;
      }
      if (-0x2000 < iVar6) {
        iVar6 = -0x2000;
      }
    }
    else {
      if (0x8000 < iVar6) {
        iVar6 = 0x8000;
      }
      if (iVar6 < 0x2000) {
        iVar6 = 0x2000;
      }
    }
    uVar4 = sub_080FE124(0x400);
    uVar7 = FUN_080fe2f8(iVar6,uVar4);
    *(undefined4 *)(param_1 + 0x5c) = uVar7;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  cVar3 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar3;
  if (cVar3 == '\0') {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  iVar6 = *(int *)(param_1 + 0x54) + -0x1a00;
  if (0 < *(int *)(param_1 + 0x5c)) {
    iVar6 = *(int *)(param_1 + 0x54) + 0x1a00;
  }
  sVar5 = sub_08009A3C(iVar6,*(int *)(param_1 + 0x58) + -0x1000);
  if (sVar5 == 0) {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  }
  iVar6 = *(int *)(param_1 + 0x60) + 0x20;
  *(int *)(param_1 + 0x60) = iVar6;
  if (0x700 < iVar6) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  sub_080177F4(param_1);
  sub_08007390(param_1 + 0x74,
               &DAT_08360594 + (uint)(byte)(&DAT_08361284)[*(char *)(param_1 + 0x71)] * 0x18);
  return in_lr;
}

