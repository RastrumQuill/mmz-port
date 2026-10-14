// sub_080A6E40 at 0x080A6E40 (thumb)

undefined4 sub_080A6E40(int param_1)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  undefined4 in_lr;
  int local_20;
  int local_1c;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,0x8b00);
    *(undefined *)(param_1 + 0x12) = 0x10;
    *(undefined *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  bVar1 = *(byte *)(param_1 + 0xf);
  if (bVar1 == 1) {
    if ((*(char *)(param_1 + 0x11) == '\0') || (*(char *)(param_1 + 0xbf) == '\0')) {
      pcVar6 = (char *)(param_1 + 0xbd);
      *pcVar6 = *pcVar6 - (*(byte *)(param_1 + 0x12) >> 4);
      *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x10';
      if (0x3a < (byte)(*pcVar6 + 0x3fU)) goto LAB_080a7072;
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        local_20 = *(int *)(param_1 + 0x54);
        iVar5 = -0x1900;
      }
      else {
        local_20 = *(int *)(param_1 + 0x54);
        iVar5 = 0x1900;
      }
      local_20 = local_20 + iVar5;
      local_1c = *(int *)(param_1 + 0x58) + 0x300;
      sVar3 = sub_08007C7C(local_20);
      if (sVar3 != 0) {
        sub_0801FE64(2,param_1 + 0x54);
        uVar4 = DAT_0202dc38 * 0x343fd + 0x269ec3;
        DAT_0202dc38 = uVar4 & 0x7fffffff;
        uVar4 = uVar4 * 2 >> 0x11 & 1;
        if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
          uVar4 = uVar4 << 4;
        }
        else {
          uVar4 = uVar4 << 4 | 1;
        }
        sub_080D4898(&local_20,&DAT_0885f1a0,0,uVar4);
        uVar4 = DAT_0202dc38 * 0x343fd + 0x269ec3;
        DAT_0202dc38 = uVar4 & 0x7fffffff;
        uVar4 = uVar4 * 2 >> 0x11 & 1;
        if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
          uVar4 = uVar4 << 4;
        }
        else {
          uVar4 = uVar4 << 4 | 1;
        }
        sub_080D4898(&local_20,&DAT_0885f1a0,0,uVar4);
        uVar4 = DAT_0202dc38 * 0x343fd + 0x269ec3;
        DAT_0202dc38 = uVar4 & 0x7fffffff;
        uVar4 = uVar4 * 2 >> 0x11 & 1;
        if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
          uVar4 = uVar4 << 4;
        }
        else {
          uVar4 = uVar4 << 4 | 1;
        }
        sub_080D4898(&local_20,&DAT_0885f1bc,0,uVar4);
        uVar4 = DAT_0202dc38 * 0x343fd + 0x269ec3;
        DAT_0202dc38 = uVar4 & 0x7fffffff;
        uVar4 = uVar4 * 2 >> 0x11 & 1;
        if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
          uVar4 = uVar4 << 4;
        }
        else {
          uVar4 = uVar4 << 4 | 1;
        }
        sub_080D4898(&local_20,&DAT_0885f1bc,0,uVar4);
      }
      *pcVar6 = -4;
    }
    sub_08002B10(0x15d);
  }
  else {
    if (1 < bVar1) {
      if ((bVar1 == 2) &&
         (cVar2 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar2, cVar2 == -1)) {
        *(undefined *)(param_1 + 0xd) = 3;
        *(undefined *)(param_1 + 0xe) = 0;
      }
      goto LAB_080a7072;
    }
    if ((bVar1 != 0) ||
       (cVar2 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar2, cVar2 != -1))
    goto LAB_080a7072;
    sub_0801CF00(param_1,0x8b02);
  }
  *(undefined *)(param_1 + 0x12) = 0x20;
  *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
LAB_080a7072:
  sub_0801CFF0(param_1);
  return in_lr;
}

