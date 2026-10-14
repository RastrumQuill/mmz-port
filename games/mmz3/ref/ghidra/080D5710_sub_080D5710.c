// sub_080D5710 at 0x080D5710 (thumb)

undefined4 sub_080D5710(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    break;
  case 1:
    goto switchD_080d5722_caseD_1;
  case 2:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    goto LAB_080d57a4;
  case 3:
    sub_08017700(param_1,0xbe00);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 0x800;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 4:
    sub_080177F4(param_1);
    return in_lr;
  default:
    return in_lr;
  }
  DAT_0202fd8c = 0x280;
  DAT_0202f78c = 5;
  sub_08017700(param_1,0xbe00);
  uVar1 = sub_0800A104(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0x58) = uVar1;
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
switchD_080d5722_caseD_1:
  sub_080177F4(param_1);
  if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) != 0) {
    sub_08017700(param_1,0xbe20);
LAB_080d57a4:
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  return in_lr;
}

