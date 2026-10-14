// sub_080E3844 at 0x080E3844 (thumb)

undefined4 sub_080E3844(int param_1)

{
  byte bVar1;
  short sVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0xb4);
  DAT_0202f5d0 = 0;
  switch(*(undefined *)(iVar4 + 0x121)) {
  case 5:
    *(short *)(iVar4 + 0xb8) = *(short *)(iVar4 + 0xb8) + 3;
    *(undefined *)(iVar4 + 0xbe) = 0;
    break;
  case 6:
    *(short *)(iVar4 + 0xb8) = *(short *)(iVar4 + 0xb8) + 3;
    *(undefined *)(iVar4 + 0xbf) = 0;
    break;
  case 7:
  case 8:
    *(short *)(iVar4 + 0xb8) = *(short *)(iVar4 + 0xb8) + 5;
    sub_0800471C(6);
    if (*DAT_02030160 < 9) {
      *DAT_02030160 = *DAT_02030160 + 1;
      if (*DAT_02030160 < 9) {
        *DAT_02030160 = *DAT_02030160 + 1;
        if (*DAT_02030160 < 9) {
          *DAT_02030160 = *DAT_02030160 + 1;
        }
      }
    }
    if ((*(char *)(param_1 + 0x11) != '\0') && (*DAT_02030160 < 9)) {
      *DAT_02030160 = *DAT_02030160 + 1;
      if (*DAT_02030160 < 9) {
        *DAT_02030160 = *DAT_02030160 + 1;
      }
    }
  default:
    goto switchD_080e3868_caseD_9;
  case 0x1b:
    sVar2 = *(short *)(iVar4 + 0xb8) + 5;
    goto LAB_080e39ce;
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x2b:
  case 0x2d:
    sVar2 = *(short *)(iVar4 + 0xb8) + 3;
LAB_080e39ce:
    *(short *)(iVar4 + 0xb8) = sVar2;
    goto switchD_080e3868_caseD_9;
  }
  sub_0800471C(6);
switchD_080e3868_caseD_9:
  bVar1 = DAT_02030160[0x4c];
  if (bVar1 < 99) {
    DAT_02030160[0x4c] = bVar1 + 1;
  }
  pbVar3 = (byte *)(DAT_0203063c + (uint)*(byte *)(iVar4 + 0x121));
  *pbVar3 = *pbVar3 | 2;
  *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | 8;
  sub_080BF7B4(param_1 + 0x54,0);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836e24c)[*(byte *)(param_1 + 9)] + 0x10);
  return in_lr;
}

