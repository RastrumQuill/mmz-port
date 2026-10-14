// sub_0807BF54 at 0x0807BF54 (thumb)

undefined4 sub_0807BF54(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    break;
  case 1:
    goto switchD_0807bf68_caseD_1;
  case 2:
    if (*(int *)(param_1 + 0x54) < *(int *)(DAT_0202f5c0 + 0x54)) {
      bVar1 = *(byte *)(param_1 + 10);
      if ((bVar1 & 0x10) == 0) {
        uVar6 = ~(uint)(bVar1 >> 4) & 1;
        if (uVar6 == 0) {
          bVar1 = bVar1 & 0xef;
        }
        else {
          bVar1 = bVar1 | 0x10;
        }
        *(byte *)(param_1 + 10) = bVar1;
        *(char *)(param_1 + 0x4c) = (char)uVar6;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar6 << 4);
      }
      uVar3 = 0x180;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10);
      if ((bVar1 & 0x10) != 0) {
        uVar6 = ~(uint)(bVar1 >> 4) & 1;
        if (uVar6 == 0) {
          bVar1 = bVar1 & 0xef;
        }
        else {
          bVar1 = bVar1 | 0x10;
        }
        *(byte *)(param_1 + 10) = bVar1;
        *(char *)(param_1 + 0x4c) = (char)uVar6;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar6 << 4);
      }
      uVar3 = 0xfffffe80;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar3;
    *(undefined4 *)(param_1 + 100) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined *)(param_1 + 0x12) = 0x3c;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    sub_080177F4(param_1);
    if ((*(char *)(param_1 + 0x12) != '\0') &&
       (cVar2 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar2, cVar2 != '\0')) {
      return in_lr;
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    return in_lr;
  case 4:
    sub_08017700(param_1,0x3f01);
    sub_0800471C(0);
    sub_08007390(param_1 + 0x74,&DAT_08364250);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    iVar4 = *(int *)(param_1 + 100) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 100) = iVar4;
    if (iVar4 < 0) {
      iVar4 = -iVar4;
    }
    if (0x1e000 < iVar4) {
      iVar4 = *(int *)(param_1 + 0x60) + 0x80;
      *(int *)(param_1 + 0x60) = iVar4;
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) - iVar4;
    }
    sub_080177F4(param_1);
  default:
    goto switchD_0807bf68_caseD_6;
  }
  sub_08017700(param_1,0x3f00);
  sub_08007390(param_1 + 0x74,&DAT_08364220);
  *(bool *)(param_1 + 0x13) = *(int *)(DAT_0202f5c0 + 0x58) + -0x800 <= *(int *)(param_1 + 0x58);
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_0807bf68_caseD_1:
  if (*(char *)(param_1 + 0x13) == '\0') {
    iVar5 = *(int *)(param_1 + 0x58) + 0x180;
    *(int *)(param_1 + 0x58) = iVar5;
    iVar4 = *(int *)(DAT_0202f5c0 + 0x58) + -0x800;
    if (iVar4 < iVar5) {
LAB_0807c006:
      *(int *)(param_1 + 0x58) = iVar4;
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
  }
  else {
    iVar5 = *(int *)(param_1 + 0x58) + -0x180;
    *(int *)(param_1 + 0x58) = iVar5;
    iVar4 = *(int *)(DAT_0202f5c0 + 0x58) + -0x800;
    if (iVar5 < iVar4) goto LAB_0807c006;
  }
  if (*(int *)(param_1 + 0x54) < *(int *)(DAT_0202f5c0 + 0x54)) {
    bVar1 = *(byte *)(param_1 + 10);
    if ((bVar1 & 0x10) == 0) {
      uVar6 = ~(uint)(bVar1 >> 4) & 1;
      if (uVar6 == 0) {
LAB_0807c05a:
        bVar1 = bVar1 & 0xef;
      }
      else {
        bVar1 = bVar1 | 0x10;
      }
LAB_0807c05e:
      *(byte *)(param_1 + 10) = bVar1;
      *(char *)(param_1 + 0x4c) = (char)uVar6;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar6 << 4);
    }
  }
  else {
    bVar1 = *(byte *)(param_1 + 10);
    if ((bVar1 & 0x10) != 0) {
      uVar6 = ~(uint)(bVar1 >> 4) & 1;
      if (uVar6 == 0) goto LAB_0807c05a;
      bVar1 = bVar1 | 0x10;
      goto LAB_0807c05e;
    }
  }
  sub_080177F4(param_1);
switchD_0807bf68_caseD_6:
  return in_lr;
}

