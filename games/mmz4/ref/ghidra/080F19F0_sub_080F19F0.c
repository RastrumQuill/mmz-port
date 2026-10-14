// sub_080F19F0 at 0x080F19F0 (thumb)

undefined4 sub_080F19F0(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0x11)) {
  case 0:
    DAT_0202e3da = 0x360;
    DAT_0202ddda = 8;
    sub_0801CF00(param_1,0xcd00);
    *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | 4;
    *(undefined *)(param_1 + 0x25) = 0;
    uVar2 = sub_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar2;
    *(char *)(param_1 + 0x11) = *(char *)(param_1 + 0x11) + '\x01';
  case 1:
    sVar1 = sub_080ED384(param_1,0xcd00,1);
    break;
  case 2:
    sub_0801CFF0(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) == 0) {
      return in_lr;
    }
    *(undefined *)(param_1 + 0x12) = 0x1e;
    goto LAB_080f1aa6;
  case 3:
    sVar1 = sub_080ED208(param_1,0xcd00,1);
    break;
  default:
    goto switchD_080f1a02_caseD_4;
  }
  if (sVar1 != 0) {
LAB_080f1aa6:
    *(char *)(param_1 + 0x11) = *(char *)(param_1 + 0x11) + '\x01';
  }
switchD_080f1a02_caseD_4:
  return in_lr;
}

