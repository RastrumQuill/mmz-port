// sub_080D0998 at 0x080D0998 (thumb)

undefined4 sub_080D0998(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    uVar1 = sub_0800A104(*(int *)(param_1 + 0x54) + 0xf000,*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar1;
    sub_08017700(param_1,0xc20f);
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 1:
    sub_080177F4(param_1);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 0x50;
    if (((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) != 0) &&
       (*(char *)(param_1 + 0x73) == '\x04')) {
LAB_080d0a3a:
      uVar1 = 0xc211;
LAB_080d0a3c:
      sub_08017700(param_1,uVar1);
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
    break;
  case 2:
    sub_080177F4(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 2) == 0) {
      return in_lr;
    }
    uVar1 = 0xc213;
    goto LAB_080d0a3c;
  case 3:
    sub_080177F4(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 4) == 0) {
      return in_lr;
    }
    goto LAB_080d0a3a;
  case 4:
    sub_080177F4(param_1);
  }
  return in_lr;
}

