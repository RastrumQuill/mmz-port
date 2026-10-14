// sub_0801687C at 0x0801687C (thumb)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 sub_0801687C(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    if (*(int *)(DAT_0202dbf0 + 0x54) < 0x1fd001) {
      return in_lr;
    }
    break;
  case 1:
    uVar2 = sub_080F7DEC(&DAT_08833610,0,0);
    *(undefined4 *)(param_1 + 0x68) = uVar2;
    sub_08002B10(0x74);
    *(undefined2 *)(param_1 + 0x10) = 4;
    break;
  case 2:
    sVar1 = *(short *)(param_1 + 0x10) + -1;
    *(short *)(param_1 + 0x10) = sVar1;
    if (sVar1 != 0) {
      return in_lr;
    }
    uVar2 = sub_080F7DEC(&DAT_08833618,0,0);
    *(undefined4 *)(param_1 + 0x6c) = uVar2;
    *(undefined2 *)(param_1 + 0x10) = 4;
    break;
  case 3:
    sVar1 = *(short *)(param_1 + 0x10) + -1;
    *(short *)(param_1 + 0x10) = sVar1;
    if (sVar1 != 0) {
      return in_lr;
    }
    uVar2 = sub_080F7DEC(&DAT_08833620,0,0);
    *(undefined4 *)(param_1 + 0x70) = uVar2;
    *(undefined2 *)(param_1 + 0x10) = 4;
    break;
  case 4:
    sVar1 = *(short *)(param_1 + 0x10) + -1;
    *(short *)(param_1 + 0x10) = sVar1;
    if (sVar1 != 0) {
      return in_lr;
    }
    uVar2 = sub_080F7DEC(&DAT_08833628,0,0);
    *(undefined4 *)(param_1 + 0x74) = uVar2;
    *(undefined2 *)(param_1 + 0x10) = 4;
    break;
  case 5:
    sVar1 = *(short *)(param_1 + 0x10) + -1;
    *(short *)(param_1 + 0x10) = sVar1;
    if (sVar1 != 0) {
      return in_lr;
    }
    uVar2 = sub_080F7DEC(&DAT_08833630,0,0);
    *(undefined4 *)(param_1 + 0x78) = uVar2;
    *(undefined2 *)(param_1 + 0x10) = 4;
    break;
  case 6:
    sVar1 = *(short *)(param_1 + 0x10) + -1;
    *(short *)(param_1 + 0x10) = sVar1;
    if (sVar1 != 0) {
      return in_lr;
    }
    uVar2 = sub_080F7DEC(&DAT_08833638,0,0);
    *(undefined4 *)(param_1 + 0x7c) = uVar2;
    *(undefined2 *)(param_1 + 0x10) = 4;
    break;
  case 7:
    sVar1 = *(short *)(param_1 + 0x10) + -1;
    *(short *)(param_1 + 0x10) = sVar1;
    if (sVar1 != 0) {
      return in_lr;
    }
    uVar2 = sub_080F7DEC(&DAT_08833640,0,0);
    *(undefined4 *)(param_1 + 0x80) = uVar2;
    *(undefined2 *)(param_1 + 0x10) = 4;
    break;
  case 8:
    sVar1 = *(short *)(param_1 + 0x10) + -1;
    *(short *)(param_1 + 0x10) = sVar1;
    if (sVar1 != 0) {
      return in_lr;
    }
    uVar2 = sub_080F7DEC(&DAT_08833648,0,0);
    *(undefined4 *)(param_1 + 0x84) = uVar2;
    *(undefined2 *)(param_1 + 0x10) = 4;
    break;
  case 9:
    sVar1 = *(short *)(param_1 + 0x10) + -1;
    *(short *)(param_1 + 0x10) = sVar1;
    if (sVar1 != 0) {
      return in_lr;
    }
    DAT_0202dae8 = sub_080F7DEC(&DAT_08833650,0,0);
    *(undefined2 *)(param_1 + 0x10) = 4;
    break;
  case 10:
    sVar1 = *(short *)(param_1 + 0x10) + -1;
    *(short *)(param_1 + 0x10) = sVar1;
    if (sVar1 != 0) {
      return in_lr;
    }
    _DAT_0202daec = sub_080F7DEC(&DAT_08833658,0,0);
    *(undefined2 *)(param_1 + 0x10) = 4;
    break;
  case 0xb:
    sVar1 = *(short *)(param_1 + 0x10) + -1;
    *(short *)(param_1 + 0x10) = sVar1;
    if (sVar1 != 0) {
      return in_lr;
    }
    DAT_0202daf0 = sub_080F7DEC(&DAT_08833660,0,0);
    break;
  default:
    goto switchD_08016890_caseD_c;
  }
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_08016890_caseD_c:
  return in_lr;
}

