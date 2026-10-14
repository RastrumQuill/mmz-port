// sub_080D420C at 0x080D420C (thumb)

undefined4 sub_080D420C(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    uVar2 = sub_0800A104(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar2;
    sub_08017700(param_1,0);
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 1:
    sub_080177F4(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) == 0) {
      return in_lr;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_0800736C(param_1 + 0x74,&DAT_0836d430,param_1 + 0x54,1);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    sub_08017700(param_1,0x300);
    sub_080B322C(param_1 + 0x54,0,*(byte *)(param_1 + 10) >> 4 & 1);
    sub_0800471C(8);
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined *)(param_1 + 0x12) = 0x20;
    break;
  case 2:
    sub_080177F4(param_1);
    if (*(int *)(param_1 + 0x2c) == 0) {
      uVar2 = sub_080B3C5C(param_1);
      *(undefined4 *)(param_1 + 0x2c) = uVar2;
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 0x380;
    if ((*(uint *)(param_1 + 0x8c) & 1) == 0) {
      return in_lr;
    }
    if (*(int *)(param_1 + 0x2c) != 0) {
      *(undefined *)(*(int *)(param_1 + 0x2c) + 0x11) = 1;
    }
    sub_08017700(param_1,0x3200);
    sub_0800471C(10);
    *(undefined4 *)(param_1 + 0x5c) = 0x3c0;
    *(undefined4 *)(param_1 + 0x60) = 0xffffff40;
    break;
  case 3:
    sub_080177F4(param_1);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
    iVar3 = sub_08009B28();
    if (iVar3 == 0) {
      return in_lr;
    }
    uVar2 = sub_0800A104(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar2;
    *(undefined4 *)(param_1 + 0x60) = 0;
    break;
  case 4:
    sub_080177F4(param_1);
    iVar3 = *(int *)(param_1 + 0x5c) * 0xf >> 4;
    *(int *)(param_1 + 0x5c) = iVar3;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) - iVar3;
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    sub_08017700(param_1,0);
    *(undefined *)(param_1 + 0x12) = 2;
    break;
  case 5:
    sub_080177F4(param_1);
    iVar3 = *(int *)(param_1 + 0x5c) * 7 >> 3;
    *(int *)(param_1 + 0x5c) = iVar3;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) - iVar3;
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') {
      return in_lr;
    }
    sub_08017700(param_1,0x3500);
    break;
  case 6:
    sub_080177F4(param_1);
    iVar3 = *(int *)(param_1 + 0x5c) * 3 >> 2;
    *(int *)(param_1 + 0x5c) = iVar3;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) - iVar3;
    if (3 < iVar3) {
      return in_lr;
    }
    sub_08017700(param_1,0x3f05);
    *(undefined *)(param_1 + 0x25) = 0x1f;
    break;
  case 7:
    sub_080177F4(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 2) == 0) {
      return in_lr;
    }
    sub_08017700(param_1,0x3501);
    *(undefined *)(param_1 + 0x12) = 3;
    break;
  case 8:
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') {
      sub_080177F4(param_1);
      return in_lr;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    break;
  default:
    goto switchD_080d4224_caseD_9;
  }
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
switchD_080d4224_caseD_9:
  return in_lr;
}

