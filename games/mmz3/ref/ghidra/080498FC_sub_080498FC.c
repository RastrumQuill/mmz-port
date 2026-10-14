// sub_080498FC at 0x080498FC (thumb)

undefined4 sub_080498FC(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_08007390(param_1 + 0x74,&DAT_0835efbc);
    uVar2 = 0xa732;
    break;
  case 1:
  case 3:
    goto switchD_08049910_caseD_1;
  case 2:
    uVar2 = 0xa733;
    break;
  case 4:
    sub_0800471C(0x5e);
    sub_08007390(param_1 + 0x74,&DAT_0835f154);
    iVar3 = sub_080FE124(0x1c0);
    uVar1 = (uint)(iVar3 << 0x10) >> 10;
    *(uint *)(param_1 + 0x5c) = uVar1;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      *(uint *)(param_1 + 0x5c) = -uVar1;
    }
    sub_08017700(param_1,0xa734);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    iVar3 = *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar3;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      *(int *)(param_1 + 0x5c) = iVar3 + -0x40;
      if (-1 < iVar3 + -0x40) goto LAB_080499ec;
    }
    else {
      *(int *)(param_1 + 0x5c) = iVar3 + 0x40;
      if (iVar3 + 0x40 < 1) goto LAB_080499ec;
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
LAB_080499ec:
    sub_080177F4(param_1);
    return in_lr;
  case 6:
    sub_08007390(param_1 + 0x74,&DAT_0835efbc);
    sub_08017700(param_1,0xa735);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 7:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) == '\x03') {
      *(undefined *)(param_1 + 0xd) = 5;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  default:
    goto switchD_08049910_caseD_8;
  }
  sub_08017700(param_1,uVar2);
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_08049910_caseD_1:
  sub_080177F4(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
switchD_08049910_caseD_8:
  return in_lr;
}

