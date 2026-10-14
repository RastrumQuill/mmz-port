// sub_0805A26C at 0x0805A26C (thumb)

undefined4 sub_0805A26C(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    break;
  case 1:
    goto switchD_0805a280_caseD_1;
  case 2:
    uVar3 = sub_080B878C(param_1,&DAT_0833cc18);
    *(undefined4 *)(param_1 + 0x2c) = uVar3;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    if (1 < *(byte *)(*(int *)(param_1 + 0x2c) + 0xc)) {
      DAT_0202ec42 = DAT_0202ec42 | 2;
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
  default:
    goto switchD_0805a280_caseD_4;
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  sub_080032EC(0x2f);
  bVar1 = *(byte *)(param_1 + 0xd4);
  iVar2 = sub_08006B84(DAT_0202f074);
  if (iVar2 != 0) {
    *(undefined *)(iVar2 + 0x25) = 0x18;
    *(undefined *)(iVar2 + 9) = 0xd;
    *(undefined4 *)(iVar2 + 0x14) = 0x8057cf5;
    *(undefined2 *)(iVar2 + 0x20) = 0;
    *(undefined *)(iVar2 + 0x22) = 0;
    *(byte *)(iVar2 + 0xb) = *(byte *)(iVar2 + 0xb) | 0x10;
    *(undefined *)(iVar2 + 0x1d) = *(undefined *)(iVar2 + 0x1c);
    *(undefined4 *)(iVar2 + 0x54) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(iVar2 + 0x58) = *(undefined4 *)(param_1 + 0x58);
    *(uint *)(iVar2 + 0x5c) = (uint)bVar1 * -0x200 + 0x100;
    *(int *)(iVar2 + 0x28) = param_1;
    *(undefined *)(iVar2 + 0x10) = 4;
    *(byte *)(iVar2 + 0x13) = *(byte *)(param_1 + 10) >> 4 & 1 ^ bVar1;
  }
  sub_080127E4(param_1,0xa725);
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  if (((DAT_0202ec38 & 1) != 0) && ((DAT_0202ec42 & 1) == 0)) {
    DAT_0202ec38 = DAT_0202ec38 & 0xfffe | 0x20;
  }
  *(uint *)(param_1 + 0x5c) = (uint)bVar1 * -0x200 + 0x100;
  *(undefined *)(param_1 + 0x12) = 0x32;
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_0805a280_caseD_1:
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    if (*(char *)(param_1 + 0xd4) != '\0') goto LAB_0805a39c;
LAB_0805a3a0:
    iVar2 = 0xf6;
  }
  else {
    if (*(char *)(param_1 + 0xd4) == '\x01') goto LAB_0805a3a0;
LAB_0805a39c:
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
  sub_080128D4(param_1);
switchD_0805a280_caseD_4:
  return in_lr;
}

