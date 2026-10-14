// sub_080C54A0 at 0x080C54A0 (thumb)

undefined4 sub_080C54A0(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    sub_080127E4(param_1,0xa201);
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 1:
    sub_080128D4(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) == 0) {
      return in_lr;
    }
    sub_080127E4(param_1,0xa206);
    break;
  case 2:
    sub_080128D4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    *(undefined4 *)(param_1 + 0x60) = 0xfffffc00;
    sub_080127E4(param_1,0xa207);
    break;
  case 3:
    sub_080128D4(param_1);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
    uVar1 = sub_08015188(&DAT_0202ed18,param_1 + 0x54);
    if (uVar1 < 0x2000) {
      return in_lr;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    break;
  default:
    goto switchD_080c54b2_caseD_4;
  }
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
switchD_080c54b2_caseD_4:
  return in_lr;
}

