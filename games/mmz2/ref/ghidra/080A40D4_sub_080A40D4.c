// sub_080A40D4 at 0x080A40D4 (thumb)

undefined4 sub_080A40D4(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  uVar2 = *(undefined4 *)(iVar4 + 0x58);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar4 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = uVar2;
  bVar1 = *(byte *)(iVar4 + 10) >> 4;
  uVar3 = bVar1 & 1;
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(char *)(param_1 + 0x4c) = (char)uVar3;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar3 << 4);
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    sub_080128D4(param_1);
    if (*(char *)(iVar4 + 0xd) != '\f') goto switchD_080a4124_caseD_5;
    goto LAB_080a418e;
  case 1:
    sub_080127E4(param_1,0x4c01);
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
switchD_080a4124_caseD_2:
    sub_080128D4(param_1);
    if (*(char *)(iVar4 + 0xd) == '\r') {
LAB_080a418e:
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
switchD_080a4124_caseD_5:
    if (((1 < *(byte *)(iVar4 + 0xc)) || (*(char *)(iVar4 + 0xd) == '\x05')) ||
       (4 < *(byte *)(param_1 + 0xd))) {
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 8)
      ;
      sub_080A41CC(param_1);
    }
    return in_lr;
  case 2:
    goto switchD_080a4124_caseD_2;
  case 3:
    sub_080127E4(param_1,0x4c02);
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 4:
    sub_080128D4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') goto switchD_080a4124_caseD_5;
    goto LAB_080a418e;
  default:
    goto switchD_080a4124_caseD_5;
  }
}

