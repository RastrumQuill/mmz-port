// sub_08041D54 at 0x08041D54 (thumb)

undefined4 sub_08041D54(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_08007390(param_1 + 0x74,&DAT_0835e68c);
    *(undefined *)(param_1 + 0x12) = 0;
    iVar2 = *(int *)(DAT_0202f5c0 + 0x54) - *(int *)(param_1 + 0x54);
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      if (iVar2 < 0) goto LAB_08041dc0;
    }
    else if (-1 < iVar2) {
LAB_08041dc0:
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x02';
      return in_lr;
    }
    sub_08017700(param_1,0xa408);
    *(undefined4 *)(param_1 + 0x60) = 0xfffffe00;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_08041d68_caseD_1:
    iVar2 = *(int *)(param_1 + 0x60) + 0x40;
    *(int *)(param_1 + 0x60) = iVar2;
    if (0x700 < iVar2) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
    iVar3 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = iVar3;
    iVar2 = *(int *)(param_1 + 0xc0) - iVar3;
    if (iVar2 < 0) {
      *(int *)(param_1 + 0x58) = iVar3 + iVar2;
    }
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) == '\x03') {
      *(undefined *)(param_1 + 0x12) = 1;
LAB_08041e96:
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
switchD_08041d68_caseD_6:
    return in_lr;
  case 1:
    goto switchD_08041d68_caseD_1;
  case 2:
    sub_08017700(param_1,0xa413);
    if (*(char *)(param_1 + 0x12) != '\0') {
      *(byte *)(param_1 + 0x4c) = (*(byte *)(param_1 + 10) >> 4 ^ 1) & 1;
      uVar4 = (*(byte *)(param_1 + 10) >> 4 ^ 1) & 1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar4 << 4);
      if (uVar4 == 0) {
        bVar1 = *(byte *)(param_1 + 10) & 0xef;
      }
      else {
        bVar1 = *(byte *)(param_1 + 10) | 0x10;
      }
      *(byte *)(param_1 + 10) = bVar1;
    }
    sub_08017700(param_1,0xa403);
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    goto LAB_08041e96;
  case 4:
    sub_0800471C(0x6c);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) == '\x03') {
      *(undefined *)(param_1 + 0xd) = 0xe;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  default:
    goto switchD_08041d68_caseD_6;
  }
}

