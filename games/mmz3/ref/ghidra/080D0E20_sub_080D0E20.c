// sub_080D0E20 at 0x080D0E20 (thumb)

undefined4 sub_080D0E20(int param_1)

{
  char cVar1;
  short sVar2;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    sVar2 = sub_080D0554(param_1,0xbe00,1);
    if (sVar2 == 0) {
      return in_lr;
    }
    cVar1 = *(char *)(param_1 + 0xd) + '\x02';
    goto LAB_080d0efa;
  default:
    goto switchD_080d0e32_caseD_1;
  case 2:
    sub_080177F4(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) == 0) {
      return in_lr;
    }
    sub_08017700(param_1,0xbe1c);
    break;
  case 3:
    sub_080177F4(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 2) == 0) {
      return in_lr;
    }
    sub_08017700(param_1,0xbe1d);
    break;
  case 4:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    sub_08017700(param_1,0xbe00);
    break;
  case 5:
    sub_080177F4(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 4) == 0) {
      return in_lr;
    }
    *(undefined *)(param_1 + 0x12) = 0x1e;
    break;
  case 6:
    sVar2 = sub_080D03E8(param_1,0xbe00,1);
    if (sVar2 == 0) {
      return in_lr;
    }
  }
  cVar1 = *(char *)(param_1 + 0xd) + '\x01';
LAB_080d0efa:
  *(char *)(param_1 + 0xd) = cVar1;
switchD_080d0e32_caseD_1:
  return in_lr;
}

