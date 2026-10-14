// sub_0802A3EC at 0x0802A3EC (thumb)

undefined4 sub_0802A3EC(int param_1)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  byte *pbVar4;
  undefined4 in_lr;
  
  if ((((*(char *)(param_1 + 0xe) == '\0') && (*(char *)(param_1 + 0xe8) == '\0')) &&
      (sVar2 = *(short *)(param_1 + 0xa4), uVar1 = sub_08025A04(param_1),
      sVar2 < (short)(uVar1 & 0xff))) && (*(char *)(param_1 + 0xc3) == '\x01')) {
    pbVar4 = (byte *)(param_1 + 0x11e);
    if (*(char *)(param_1 + 0xec) == '\x03') {
      *pbVar4 = 0;
    }
    if ((*(ushort *)(param_1 + 0x216) & 0x8000) == 0) {
      *pbVar4 = *pbVar4 + 1;
    }
    if (*(short *)(param_1 + 0xc4) == 0x502) {
      if (*pbVar4 < 0x61) goto LAB_0802a482;
    }
    else if (*pbVar4 < 0xc1) goto LAB_0802a482;
    DAT_0202f600 = DAT_0202f600 + 4;
    *pbVar4 = 0;
  }
  else {
    *(undefined *)(param_1 + 0x11e) = 0;
  }
LAB_0802a482:
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined *)(param_1 + 0x11a) = 0;
  *(undefined *)(param_1 + 0x18d) = 1;
  sub_080FE2C0(param_1,*(undefined4 *)(&DAT_0835ac48 + (uint)*(byte *)(param_1 + 0xe) * 4));
  if ((((DAT_02002650 & 0x7f) == 7) && (sVar2 = sub_08010340(), sVar2 != 0)) ||
     (*(char *)(param_1 + 0x234) != '\0')) {
    sub_08027118(param_1,&DAT_0835b034);
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  pbVar4 = (byte *)(param_1 + 0x147);
  sub_08025C04(param_1,&DAT_0835b034 + (uint)*pbVar4 * 8,0);
  sub_08025C04(param_1,&DAT_0835b034 + (uint)*pbVar4 * 8,1);
  sub_08025EC4(param_1,&DAT_0835b034 + (uint)*pbVar4 * 8,0);
  sVar2 = sub_08026664(param_1,&DAT_0835b034 + (uint)*pbVar4 * 8,0);
  if (sVar2 == 0) {
    if (*(char *)(param_1 + 0xe) == '\x01') {
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        sVar2 = sub_08032C9C(param_1);
        iVar3 = -(int)sVar2;
      }
      else {
        sVar2 = sub_08032C9C(param_1);
        iVar3 = (int)sVar2;
      }
      *(int *)(param_1 + 0x5c) = iVar3;
    }
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 2;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

