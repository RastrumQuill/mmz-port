// sub_081067AC at 0x081067AC (thumb)

undefined4 sub_081067AC(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    uVar1 = sub_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar1;
    sub_0801CF00(param_1,0xa52b);
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 1:
    sub_0801CFF0(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) == 0) {
      return in_lr;
    }
    sub_0801CF00(param_1,0xa52c);
    break;
  case 2:
    sub_0801CFF0(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 2) == 0) {
      return in_lr;
    }
    sub_08002B10(0x118);
    sub_0801CF00(param_1,0xa502);
    *(undefined4 *)(param_1 + 0x60) = 0xfffffc00;
    break;
  case 3:
    sub_0801CFF0(param_1);
    iVar2 = *(int *)(param_1 + 0x60) + 0x40;
    *(int *)(param_1 + 0x60) = iVar2;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar2;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -0x1c0;
    iVar2 = sub_08007DB4();
    if (iVar2 == 0) {
      return in_lr;
    }
    uVar1 = sub_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar1;
    sub_0801CF00(param_1,0xa501);
    break;
  case 4:
    sub_0801CFF0(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    sub_0801CF00(param_1,0xa500);
    break;
  case 5:
    sub_0801CFF0(param_1);
    uVar3 = *(byte *)(*(int *)(param_1 + 0x18) + 9) & 0x80;
    goto LAB_081068ce;
  case 6:
    iVar2 = sub_081051A0(param_1,0xa500,1);
    uVar3 = iVar2 << 0x10;
LAB_081068ce:
    if (uVar3 == 0) {
      return in_lr;
    }
    break;
  default:
    goto switchD_081067c0_caseD_7;
  }
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
switchD_081067c0_caseD_7:
  return in_lr;
}

