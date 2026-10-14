// sub_0804AF40 at 0x0804AF40 (thumb)

undefined4 sub_0804AF40(int param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  int local_18;
  int local_14;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    break;
  case 1:
    goto switchD_0804af56_caseD_1;
  case 2:
    uVar4 = sub_080C73F8(param_1,&DAT_0835f694);
    *(undefined4 *)(param_1 + 0x2c) = uVar4;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    if (1 < *(byte *)(*(int *)(param_1 + 0x2c) + 0xc)) {
      DAT_020301b2 = DAT_020301b2 | 2;
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
  default:
    goto switchD_0804af56_caseD_4;
  }
  bVar2 = false;
  if ((*(byte *)(param_1 + 0xc1) & 1) != 0) {
    bVar2 = true;
    local_18 = *(int *)(param_1 + 0x54) + -0x2a00;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      local_18 = *(int *)(param_1 + 0x54) + 0x2c00;
    }
    local_14 = *(int *)(param_1 + 0x58) + -0x1900;
    sub_080B2484(1,&local_18);
    sub_080BD610(local_18,local_14);
  }
  if ((*(byte *)(param_1 + 0xc1) & 2) != 0) {
    bVar2 = true;
    local_18 = *(int *)(param_1 + 0x54);
    local_14 = *(int *)(param_1 + 0x58) + -0x4c00;
    sub_080B2484(1,&local_18);
    sub_080BD610(local_18,local_14);
  }
  if (bVar2) {
    sub_0800471C(0x2a);
  }
  sub_0800471C(0x2f);
  bVar1 = *(byte *)(param_1 + 0xc2);
  iVar3 = sub_0800710C(DAT_020305e4);
  if (iVar3 != 0) {
    *(undefined *)(iVar3 + 0x25) = 0x18;
    *(undefined *)(iVar3 + 9) = 7;
    *(undefined4 *)(iVar3 + 0x14) = 0x8049061;
    *(undefined2 *)(iVar3 + 0x20) = 0;
    *(undefined *)(iVar3 + 0x22) = 0;
    *(byte *)(iVar3 + 0xb) = *(byte *)(iVar3 + 0xb) | 0x10;
    *(undefined *)(iVar3 + 0x1d) = *(undefined *)(iVar3 + 0x1c);
    *(undefined4 *)(iVar3 + 0x54) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(iVar3 + 0x58) = *(undefined4 *)(param_1 + 0x58);
    *(uint *)(iVar3 + 0x5c) = (uint)bVar1 * -0x200 + 0x100;
    *(int *)(iVar3 + 0x28) = param_1;
    *(undefined *)(iVar3 + 0x10) = 1;
    *(byte *)(iVar3 + 0x13) = *(byte *)(param_1 + 10) >> 4 & 1 ^ bVar1;
  }
  sub_08017700(param_1,0xa738);
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  if (((DAT_020301a8 & 1) != 0) && ((DAT_020301b2 & 1) == 0)) {
    DAT_020301a8 = DAT_020301a8 & 0xfffe | 0x10;
  }
  *(uint *)(param_1 + 0x5c) = (uint)bVar1 * -0x200 + 0x100;
  local_18 = *(int *)(param_1 + 0x54);
  local_14 = *(int *)(param_1 + 0x58) + -0x2000;
  *(undefined *)(param_1 + 0x12) = 0x32;
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_0804af56_caseD_1:
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    if (*(char *)(param_1 + 0xc2) != '\0') goto LAB_0804b0fc;
LAB_0804b100:
    iVar3 = 0xf6;
  }
  else {
    if (*(char *)(param_1 + 0xc2) == '\x01') goto LAB_0804b100;
LAB_0804b0fc:
    iVar3 = 0xfa;
  }
  iVar3 = *(int *)(param_1 + 0x5c) * iVar3;
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  *(int *)(param_1 + 0x5c) = iVar3 >> 8;
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 0x80) != 0) {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080177F4(param_1);
switchD_0804af56_caseD_4:
  return in_lr;
}

