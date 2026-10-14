// sub_0803CABC at 0x0803CABC (thumb)

undefined4 sub_0803CABC(int param_1)

{
  short sVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0xb4);
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar5 = (uint)(byte)(*(char *)(iVar3 + 0x14d) + 7);
    if (*(char *)(iVar3 + 0x14d) != '\0') {
      sVar1 = *(short *)(&DAT_088508fc + uVar5 * 2);
      pcVar4 = (char *)(param_1 + 0x71);
      if (sVar1 != CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70))) {
        if ((sVar1 == 0x6a02) && ('\x06' < *pcVar4)) {
          sub_0801CFC8(param_1,0x6a02,7,1);
        }
        else {
          sub_0801CFC8(param_1,sVar1,(short)*pcVar4,(short)*(char *)(param_1 + 0x72));
        }
      }
      if (((*(char *)(param_1 + 0x10) == '\b') && (*pcVar4 == '\x03')) &&
         (*(char *)(param_1 + 0x72) < '\x02')) {
        sub_080D185C(param_1 + 0x54,*(byte *)(param_1 + 10) >> 4 & 1);
      }
      sub_0801CFF0(param_1);
      sub_08005794(param_1 + 0x74,*(undefined4 *)(*pcVar4 * 4 + *(int *)(&DAT_08851ad4 + uVar5 * 4))
                   ,*(undefined *)(param_1 + 0xc1),*(undefined *)(param_1 + 0xc0),
                   *(undefined *)(param_1 + 0xc2),0xffffffff);
      if (*(char *)(param_1 + 0x73) != '\x03') {
        return in_lr;
      }
      if (sVar1 == 0x6a02) {
        *(undefined *)(param_1 + 0xe) = 1;
        *(undefined *)(param_1 + 0xf) = 0;
        *(undefined *)(param_1 + 0xc1) = 10;
        cVar2 = sub_0803A4F4(iVar3);
        *(char *)(param_1 + 0xc1) = cVar2 + *(char *)(param_1 + 0xc1);
        *(undefined *)(param_1 + 0xc0) = 0;
        return in_lr;
      }
    }
  }
  else {
    if (*(char *)(param_1 + 0xe) == '\x01') {
      if (*(char *)(param_1 + 0xf) == '\0') {
        sub_0801CFC8(param_1,0x6a00,4,2);
        *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
      }
      sub_0801CFF0(param_1);
      sub_08005794(param_1 + 0x74,*(undefined4 *)(&DAT_088518b8 + *(char *)(param_1 + 0x71) * 4),
                   *(undefined *)(param_1 + 0xc1),*(undefined *)(param_1 + 0xc0),
                   *(undefined *)(param_1 + 0xc2),0xffffffff);
      sVar1 = CONCAT11(*(undefined *)(iVar3 + 0x1e),*(undefined *)(iVar3 + 0x70));
      if (sVar1 == 0x1900) {
        return in_lr;
      }
      if (sVar1 == 0x1902) {
        return in_lr;
      }
      *(undefined *)(param_1 + 0xe) = 2;
      *(undefined *)(param_1 + 0xf) = 0;
      return in_lr;
    }
    if (*(char *)(param_1 + 0xf) == '\0') {
      sub_0801CF00(param_1,0x6a01);
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    }
    sub_0801CFF0(param_1);
    sub_08005784(param_1 + 0x74,&DAT_088517e8);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
  }
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 8);
  return in_lr;
}

