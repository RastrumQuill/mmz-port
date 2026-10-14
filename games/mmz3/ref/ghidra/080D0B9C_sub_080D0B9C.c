// sub_080D0B9C at 0x080D0B9C (thumb)

undefined4 sub_080D0B9C(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    break;
  case 1:
    goto switchD_080d0bae_caseD_1;
  case 2:
    sub_080177F4(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 2) == 0) {
      return in_lr;
    }
    sub_08017700(param_1,0xc211);
    *(undefined *)(param_1 + 0x12) = 8;
    goto LAB_080d0c5c;
  case 3:
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    *(undefined *)(param_1 + 0x4c) = 0;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
    sub_080177F4(param_1);
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') {
      return in_lr;
    }
    uVar2 = 0xc212;
    goto LAB_080d0c56;
  case 4:
    sub_080177F4(param_1);
    return in_lr;
  default:
    return in_lr;
  }
  uVar2 = sub_0800A104(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0x58) = uVar2;
  sub_08017700(param_1,0xc210);
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
switchD_080d0bae_caseD_1:
  sub_080177F4(param_1);
  if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) != 0) {
    uVar2 = 0xc214;
LAB_080d0c56:
    sub_08017700(param_1,uVar2);
LAB_080d0c5c:
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  return in_lr;
}

