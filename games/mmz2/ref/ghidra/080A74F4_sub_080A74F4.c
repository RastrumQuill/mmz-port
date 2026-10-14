// sub_080A74F4 at 0x080A74F4 (thumb)

undefined4 sub_080A74F4(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  if (1 < *(byte *)(iVar3 + 0xc)) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | 4;
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    sub_080127E4(param_1,*(undefined2 *)(&DAT_0834527e + (uint)*(byte *)(param_1 + 0x12) * 2));
    *(undefined *)(param_1 + 0x13) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 2:
    sub_080128D4(param_1);
    if (1 < (byte)(*(char *)(param_1 + 0x73) - 3U)) {
      return in_lr;
    }
    bVar1 = *(char *)(param_1 + 0x13) + 1;
    *(byte *)(param_1 + 0x13) = bVar1;
    if (bVar1 < (byte)(&DAT_08345284)[*(byte *)(param_1 + 0x12)]) {
      return in_lr;
    }
    uVar2 = *(byte *)(param_1 + 0x12) + 1;
    *(char *)(param_1 + 0x12) = (char)uVar2;
    if ((uVar2 & 0xff) == 3) {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      return in_lr;
    }
    *(undefined *)(param_1 + 0xe) = 1;
    return in_lr;
  case 3:
    break;
  case 4:
    goto switchD_080a7546_caseD_4;
  default:
    return in_lr;
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  *(undefined *)(param_1 + 0x12) = 0;
  *(undefined *)(param_1 + 0x13) = 0;
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_080a7546_caseD_4:
  if (*(char *)(param_1 + 0x12) == '\0') {
    *(undefined *)(param_1 + 0x12) = 6;
    sub_080A6ACC(iVar3,param_1 + 0x54,*(undefined *)(param_1 + 0xb5));
    *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
    if ((*(uint *)(iVar3 + 0xb4) & 0x80) == 0) {
      if (*(byte *)(param_1 + 0x13) < 8) goto LAB_080a766e;
    }
    else if (*(byte *)(param_1 + 0x13) < 0x18) goto LAB_080a766e;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
LAB_080a766e:
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  return in_lr;
}

