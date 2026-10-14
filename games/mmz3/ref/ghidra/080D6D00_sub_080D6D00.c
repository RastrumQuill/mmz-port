// sub_080D6D00 at 0x080D6D00 (thumb)

undefined4 sub_080D6D00(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    uVar2 = sub_0800A104(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar2;
    sub_0800393C(&DAT_085d83e8,(DAT_0202fb28 - 0x290) * 0x20 + 0x10000);
    sub_08003E14(&DAT_085d83f4,(DAT_0202f928 - 6) * 0x20 + 0x200);
    sub_08017700(param_1,0x8c06);
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x11) != '\0') {
      *(undefined *)(param_1 + 0xd) = 5;
      return in_lr;
    }
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 1:
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) == 0) {
      return in_lr;
    }
    sub_08017700(param_1,0x8c05);
    *(undefined *)(param_1 + 0x12) = 8;
    break;
  case 2:
    sub_080177F4(param_1);
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') {
      return in_lr;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    *(undefined *)(param_1 + 0x4c) = 0;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
    break;
  case 3:
    sub_080177F4(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 2) == 0) {
      return in_lr;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    *(undefined *)(param_1 + 0x4c) = 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
    *(undefined *)(param_1 + 0x12) = 8;
    break;
  case 4:
    sub_080177F4(param_1);
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') {
      return in_lr;
    }
    sub_08017700(param_1,0x8c06);
    sub_080177F4(param_1);
    break;
  case 5:
    uVar3 = sub_0801A9A8(&DAT_02030288,param_1 + 0x54);
    if (0xfff < uVar3) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_0836c2ec + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
    }
  default:
    goto switchD_080d6d14_caseD_6;
  }
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
switchD_080d6d14_caseD_6:
  return in_lr;
}

