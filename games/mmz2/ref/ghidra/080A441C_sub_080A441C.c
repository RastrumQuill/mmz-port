// sub_080A441C at 0x080A441C (thumb)

undefined4 sub_080A441C(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    sub_080128D4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    goto LAB_080a4482;
  case 1:
    sub_080127E4(param_1,0x4b01);
    uVar1 = sub_080A423C(param_1,1,*(undefined *)(param_1 + 0x11));
    *(undefined4 *)(param_1 + 0x28) = uVar1;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 2:
    sub_080128D4(param_1);
    if (1 < *(byte *)(*(int *)(param_1 + 0x28) + 0xc)) {
LAB_080a4482:
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
    break;
  case 3:
    sub_080127E4(param_1,0x4b03);
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 4:
    sub_080128D4(param_1);
    if (*(char *)(param_1 + 0x73) == '\x04') {
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 8)
      ;
      sub_080A42C0(param_1);
    }
    break;
  default:
    break;
  }
  return in_lr;
}

