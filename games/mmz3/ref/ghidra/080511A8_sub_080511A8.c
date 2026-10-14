// sub_080511A8 at 0x080511A8 (thumb)

undefined4 sub_080511A8(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    break;
  case 1:
    goto switchD_080511bc_caseD_1;
  case 2:
    uVar3 = sub_080C73F8(param_1,&DAT_0835fdac);
    *(undefined4 *)(param_1 + 0x2c) = uVar3;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    if (1 < *(byte *)(*(int *)(param_1 + 0x2c) + 0xc)) {
      DAT_020301b2 = DAT_020301b2 | 2;
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
  default:
    goto switchD_080511bc_caseD_4;
  }
  sub_0800471C(0x2f);
  bVar1 = *(byte *)(param_1 + 0xcc);
  iVar2 = sub_0800710C(DAT_020305e4);
  if (iVar2 != 0) {
    *(undefined *)(iVar2 + 0x25) = 0x18;
    *(undefined *)(iVar2 + 9) = 0xb;
    *(undefined4 *)(iVar2 + 0x14) = 0x805024d;
    *(undefined2 *)(iVar2 + 0x20) = 0;
    *(undefined *)(iVar2 + 0x22) = 0;
    *(byte *)(iVar2 + 0xb) = *(byte *)(iVar2 + 0xb) | 0x10;
    *(undefined *)(iVar2 + 0x1d) = *(undefined *)(iVar2 + 0x1c);
    *(undefined4 *)(iVar2 + 0x54) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(iVar2 + 0x58) = *(undefined4 *)(param_1 + 0x58);
    *(uint *)(iVar2 + 0x5c) = (uint)bVar1 * -0x200 + 0x100;
    *(int *)(iVar2 + 0x28) = param_1;
    *(undefined *)(iVar2 + 0x10) = 1;
    *(byte *)(iVar2 + 0x13) = *(byte *)(param_1 + 10) >> 4 & 1 ^ bVar1;
  }
  sub_08017700(param_1,0xaf06);
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  if (((DAT_020301a8 & 1) != 0) && ((DAT_020301b2 & 1) == 0)) {
    DAT_020301a8 = DAT_020301a8 & 0xfffe | 0x10;
  }
  *(uint *)(param_1 + 0x5c) = (uint)bVar1 * -0x200 + 0x100;
  *(undefined *)(param_1 + 0x12) = 0x32;
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_080511bc_caseD_1:
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    if (*(char *)(param_1 + 0xcc) != '\0') goto LAB_080512cc;
LAB_080512d0:
    iVar2 = 0xf6;
  }
  else {
    if (*(char *)(param_1 + 0xcc) == '\x01') goto LAB_080512d0;
LAB_080512cc:
    iVar2 = 0xfa;
  }
  iVar2 = *(int *)(param_1 + 0x5c) * iVar2;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  *(int *)(param_1 + 0x5c) = iVar2 >> 8;
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 0x80) != 0) {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080177F4(param_1);
switchD_080511bc_caseD_4:
  return in_lr;
}

