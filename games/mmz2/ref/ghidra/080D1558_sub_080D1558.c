// sub_080D1558 at 0x080D1558 (thumb)

undefined4 sub_080D1558(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    sub_080128D4(param_1);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    iVar2 = *(int *)(param_1 + 0x60) - *(int *)(param_1 + 0x68);
    *(int *)(param_1 + 0x60) = iVar2;
    if (iVar2 != 0) {
      return in_lr;
    }
    goto LAB_080d15bc;
  case 1:
    sub_080127E4(param_1,0x8d01);
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 2:
    sub_080128D4(param_1);
    if (*(char *)(param_1 + 0x73) == '\x03') {
LAB_080d15bc:
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
    break;
  case 3:
    sub_080127E4(param_1,0x8d02);
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 4:
    if (*(char *)(param_1 + 0x73) == '\x03') {
      sub_080127E4(param_1,0x8d02);
    }
    uVar1 = DAT_0202e188 * 0x343fd + 0x269ec3;
    DAT_0202e188 = uVar1 & 0x7fffffff;
    if ((uVar1 * 2 >> 0x11 & 0x1f) == 0) {
      sub_080127E4(param_1,0x8d03);
    }
    sub_080128D4(param_1);
    break;
  default:
    break;
  }
  return in_lr;
}

