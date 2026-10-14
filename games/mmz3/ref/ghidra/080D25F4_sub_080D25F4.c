// sub_080D25F4 at 0x080D25F4 (thumb)

undefined4 sub_080D25F4(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    DAT_0202fd8c = 0x3c0;
    DAT_0202f78c = 9;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 1:
    iVar3 = sub_080D0554(param_1,0xbe00,1);
    goto LAB_080d27ec;
  case 2:
    sub_080177F4(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) == 0) {
      return in_lr;
    }
    sub_08017700(param_1,0xbe01);
    *(undefined *)(param_1 + 0x12) = 8;
    break;
  case 3:
    sub_080177F4(param_1);
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == '\0') {
      sub_0800471C(0x101);
    }
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    sub_08017700(param_1,0xbe02);
    break;
  case 4:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    sub_08017700(param_1,0xbe03);
    *(undefined *)(param_1 + 0x12) = 0x40;
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x58);
    break;
  case 5:
    sub_080177F4(param_1);
    iVar3 = *(int *)(param_1 + 0x68) - (int)(short)(&DAT_080fe64c)[*(byte *)(param_1 + 0x12)];
    *(int *)(param_1 + 0x68) = iVar3;
    iVar3 = *(int *)(param_1 + 0x58) * 7 + iVar3 >> 3;
    *(int *)(param_1 + 0x58) = iVar3;
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') {
      return in_lr;
    }
    *(undefined *)(param_1 + 0x12) = 0;
    *(int *)(param_1 + 0x60) = iVar3;
    break;
  case 6:
    sub_080177F4(param_1);
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
    iVar3 = *(int *)(param_1 + 0x60) + (short)(&DAT_080fe64c)[*(byte *)(param_1 + 0x12)] * 4;
    *(int *)(param_1 + 0x68) = iVar3;
    iVar3 = *(int *)(param_1 + 0x58) * 7 + iVar3 >> 3;
    *(int *)(param_1 + 0x58) = iVar3;
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 2) == 0) {
      return in_lr;
    }
    *(undefined *)(param_1 + 0x12) = 0x40;
    *(int *)(param_1 + 0x68) = iVar3;
    break;
  case 7:
    sub_080177F4(param_1);
    iVar3 = *(int *)(param_1 + 0x68) + 0x100 +
            (int)(short)(&DAT_080fe64c)[*(byte *)(param_1 + 0x12)];
    *(int *)(param_1 + 0x68) = iVar3;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) * 7 + iVar3 >> 3;
    iVar3 = sub_08009BE4(*(undefined4 *)(param_1 + 0x54));
    if (iVar3 == 0) {
      return in_lr;
    }
    uVar2 = sub_0800A104(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar2;
    sub_08017700(param_1,0xbe0e);
    break;
  case 8:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    uVar4 = *(byte *)(*(int *)(param_1 + 0x18) + 9) & 4;
    goto LAB_080d27ee;
  case 9:
    iVar3 = sub_080D03E8(param_1,0xbe0e,1);
LAB_080d27ec:
    uVar4 = iVar3 << 0x10;
LAB_080d27ee:
    if (uVar4 == 0) {
      return in_lr;
    }
    break;
  default:
    goto switchD_080d2608_caseD_a;
  }
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
switchD_080d2608_caseD_a:
  return in_lr;
}

