// sub_0803CF54 at 0x0803CF54 (thumb)

undefined4 sub_0803CF54(int param_1)

{
  short sVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  byte *pbVar5;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0xb4);
  if (*(char *)(param_1 + 0xe) == '\0') {
    pbVar5 = (byte *)(param_1 + 0x71);
    if ((CONCAT11(*(undefined *)(iVar3 + 0x1e),*(undefined *)(iVar3 + 0x70)) == 0x1a00) ||
       (*(byte *)(iVar3 + 0x71) == *pbVar5)) {
      sub_0801CFF0(param_1);
      sub_08005794(param_1 + 0x74,
                   *(undefined4 *)
                    ((char)*pbVar5 * 4 +
                    *(int *)(&DAT_08851ad4 + (uint)*(byte *)(param_1 + 0x10) * 4)),
                   *(undefined *)(param_1 + 0xc1),*(undefined *)(param_1 + 0xc0),
                   *(undefined *)(param_1 + 0xc2),((int)((uint)*pbVar5 << 0x18) >> 0x19) + 1);
      if (*(char *)(param_1 + 0x73) != '\x03') {
        return in_lr;
      }
      *(undefined *)(param_1 + 0xe) = 1;
      *(undefined *)(param_1 + 0xf) = 0;
      *(undefined *)(param_1 + 0xc1) = 10;
      cVar2 = sub_0803A4F4(iVar3);
      *(char *)(param_1 + 0xc1) = cVar2 + *(char *)(param_1 + 0xc1);
      *(undefined *)(param_1 + 0xc0) = 0;
      return in_lr;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    uVar4 = *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 0xc);
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
      if (sVar1 == 0x1a00) {
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
    *(undefined4 *)(param_1 + 0xc) = 2;
    uVar4 = *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 8);
  }
  *(undefined4 *)(param_1 + 0x14) = uVar4;
  return in_lr;
}

