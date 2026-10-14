// sub_08041B98 at 0x08041B98 (thumb)

undefined4 sub_08041B98(int param_1)

{
  char cVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_08007390(param_1 + 0x74,&DAT_0835e68c);
    *(undefined *)(param_1 + 0x12) = 0;
    iVar4 = *(int *)(DAT_0202f5c0 + 0x54) - *(int *)(param_1 + 0x54);
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      if (-1 < iVar4) goto LAB_08041c06;
    }
    else if (iVar4 < 0) {
LAB_08041c06:
      sub_08017700(param_1,0xa408);
      *(undefined4 *)(param_1 + 0x60) = 0xfffffe00;
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      goto switchD_08041bac_caseD_1;
    }
    cVar1 = *(char *)(param_1 + 0xe) + '\x02';
    break;
  case 1:
switchD_08041bac_caseD_1:
    iVar4 = *(int *)(param_1 + 0x60) + 0x40;
    *(int *)(param_1 + 0x60) = iVar4;
    if (0x700 < iVar4) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
    iVar5 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = iVar5;
    iVar4 = *(int *)(param_1 + 0xc0) - iVar5;
    if (iVar4 < 0) {
      *(int *)(param_1 + 0x58) = iVar5 + iVar4;
    }
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    *(undefined *)(param_1 + 0x12) = 1;
    cVar1 = *(char *)(param_1 + 0xe) + '\x01';
    break;
  case 2:
    sub_0800471C(0x69);
    if (*(char *)(param_1 + 0x12) != '\0') {
      *(byte *)(param_1 + 0x4c) = (*(byte *)(param_1 + 10) >> 4 ^ 1) & 1;
      uVar6 = (*(byte *)(param_1 + 10) >> 4 ^ 1) & 1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar6 << 4);
      if (uVar6 == 0) {
        bVar2 = *(byte *)(param_1 + 10) & 0xef;
      }
      else {
        bVar2 = *(byte *)(param_1 + 10) | 0x10;
      }
      *(byte *)(param_1 + 10) = bVar2;
    }
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    sub_08017700(param_1,*(undefined2 *)(&DAT_0835e836 + (uint)*(byte *)(param_1 + 0x12) * 2));
    if ((byte)(*(char *)(param_1 + 0x12) - 1U) < 4) {
      sub_0800471C(100);
      sub_0807356C(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + -0x1a00,
                   *(byte *)(param_1 + 10) >> 4 & 1);
    }
    *(undefined *)(param_1 + 0x13) = 0x18;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 4:
    sub_080177F4(param_1);
    cVar1 = *(char *)(param_1 + 0x12);
    if ((cVar1 == '\0') || (cVar1 == '\x05')) {
      if (*(char *)(param_1 + 0x73) != '\x03') {
        return in_lr;
      }
      *(char *)(param_1 + 0x12) = cVar1 + '\x01';
      if (cVar1 == '\x05') {
        *(undefined *)(param_1 + 0xd) = 0;
        *(undefined *)(param_1 + 0xe) = 0;
        return in_lr;
      }
      *(undefined *)(param_1 + 0xe) = 3;
      return in_lr;
    }
    cVar3 = *(char *)(param_1 + 0x13) + -1;
    *(char *)(param_1 + 0x13) = cVar3;
    if (cVar3 != '\0') {
      return in_lr;
    }
    *(char *)(param_1 + 0x12) = cVar1 + '\x01';
    cVar1 = '\x03';
    break;
  default:
    goto switchD_08041bac_caseD_5;
  }
  *(char *)(param_1 + 0xe) = cVar1;
switchD_08041bac_caseD_5:
  return in_lr;
}

