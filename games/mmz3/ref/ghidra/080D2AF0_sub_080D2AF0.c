// sub_080D2AF0 at 0x080D2AF0 (thumb)

undefined4 sub_080D2AF0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    uVar2 = sub_0800A104(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar2;
    DAT_0202fb14 = 0x24d;
    DAT_0202f914 = 8;
    if (*(char *)(param_1 + 0x11) == '\0') {
      sub_0800393C(&DAT_085d8320,0xed80);
      sub_08003E14(&DAT_085d832c,(DAT_0202f914 - 6) * 0x20 + 0x200);
    }
    sub_08017700(param_1,0x8200);
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 1:
    sub_080177F4(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) == 0) {
      return in_lr;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    *(undefined *)(param_1 + 0x4c) = 0;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
    *(undefined *)(param_1 + 0x12) = 8;
    break;
  case 2:
    sub_080177F4(param_1);
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') {
      return in_lr;
    }
    sub_08017700(param_1,0x8202);
    break;
  case 3:
    sub_080177F4(param_1);
    iVar3 = *(int *)(param_1 + 0x54) + -0x80;
    *(int *)(param_1 + 0x54) = iVar3;
    if (DAT_020302c0 + -0x8800 <= iVar3) {
      return in_lr;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    break;
  default:
    goto switchD_080d2b04_caseD_4;
  }
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
switchD_080d2b04_caseD_4:
  return in_lr;
}

