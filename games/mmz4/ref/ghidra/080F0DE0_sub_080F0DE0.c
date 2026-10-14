// sub_080F0DE0 at 0x080F0DE0 (thumb)

undefined4 sub_080F0DE0(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0x11)) {
  case 0:
    DAT_0202e3c4 = 0x200;
    DAT_0202ddc4 = 4;
    sub_0801CF00(param_1,0xc200);
    *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    *(undefined *)(param_1 + 0x4c) = 0;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
    uVar1 = sub_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar1;
    *(char *)(param_1 + 0x11) = *(char *)(param_1 + 0x11) + '\x01';
  case 1:
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) == 0) goto switchD_080f0df4_caseD_7;
    sub_0801CF00(param_1,0xc201);
    break;
  case 2:
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 2) == 0) goto switchD_080f0df4_caseD_7;
    sub_0801CF00(param_1,0xc20c);
    break;
  case 3:
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 4) == 0) goto switchD_080f0df4_caseD_7;
    sub_0801CF00(param_1,0xc20d);
    break;
  case 4:
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 8) == 0) goto switchD_080f0df4_caseD_7;
    sub_0801CF00(param_1,0xc218);
    break;
  case 5:
    if (*(char *)(param_1 + 0x73) != '\x03') goto switchD_080f0df4_caseD_7;
    sub_0801CF00(param_1,0xc200);
    break;
  case 6:
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 0x10) == 0) goto switchD_080f0df4_caseD_7;
    sub_08112080(&DAT_0202f610,0xd0400);
    break;
  default:
    goto switchD_080f0df4_caseD_7;
  }
  *(char *)(param_1 + 0x11) = *(char *)(param_1 + 0x11) + '\x01';
switchD_080f0df4_caseD_7:
  sub_0801CFF0(param_1);
  return in_lr;
}

