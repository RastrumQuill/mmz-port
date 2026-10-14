// sub_0807F414 at 0x0807F414 (thumb)

undefined4 sub_0807F414(int param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  undefined4 in_lr;
  int local_18;
  int local_14;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    uVar4 = *(byte *)(param_1 + 0x11) ^ 1;
    if (uVar4 == 0) {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar2;
    *(char *)(param_1 + 0x4c) = (char)uVar4;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)((uVar4 & 1) << 4);
    sub_080127E4(param_1,0x5f00);
    sub_080801DC(param_1,1);
    *(uint *)(param_1 + 100) =
         *(int *)(param_1 + 0x54) + ((uint)*(byte *)(param_1 + 0x11) * -2 + 1) * 0x4800;
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x58);
    *(char *)(param_1 + 0xb6) = *(char *)(param_1 + 0x11) * -0x80 + -0x40;
    *(undefined *)(param_1 + 0x12) = 8;
    *(undefined *)(param_1 + 0xe) = 1;
  case 1:
    sub_080128D4(param_1);
    if (1 < (byte)(*(char *)(param_1 + 0x73) - 3U)) goto switchD_0807f42a_caseD_5;
    break;
  case 2:
    if (*(char *)(param_1 + 0xf) == '\0') {
      sub_080127E4(param_1,0x5f00);
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    }
    sub_080128D4(param_1);
    if ((*(char *)(param_1 + 0xb6) != '0') && (*(char *)(param_1 + 0xb6) != -0x50))
    goto switchD_0807f42a_caseD_5;
    break;
  case 3:
    if (*(char *)(param_1 + 0xf) == '\0') {
      sub_080127E4(param_1,0x5f02);
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    }
    sub_080128D4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') goto switchD_0807f42a_caseD_5;
    if (*(int *)(param_1 + 0x28) == 0) {
      sub_08080050(param_1,&local_18);
      if ((((local_18 - *(int *)(param_1 + 0xb8)) + 0x1e000U < 0x3c001) &&
          ((*(int *)(DAT_0202e130 + 0x54) - *(int *)(param_1 + 0x54)) + 0x6000U < 0xc001)) &&
         (*(int *)(param_1 + 0x58) < local_14)) {
        *(undefined *)(param_1 + 0xd) = 5;
        *(undefined *)(param_1 + 0xe) = 0;
        return in_lr;
      }
    }
    else {
      cVar1 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar1;
      if (cVar1 == '\0') {
        *(undefined *)(param_1 + 0xd) = 3;
        *(undefined *)(param_1 + 0xe) = 0;
        return in_lr;
      }
    }
    break;
  case 4:
    if (*(char *)(param_1 + 0xf) == '\0') {
      bVar2 = *(byte *)(param_1 + 10);
      uVar4 = bVar2 >> 4 & 1 ^ 1;
      if (uVar4 == 0) {
        bVar2 = bVar2 & 0xef;
      }
      else {
        bVar2 = bVar2 | 0x10;
      }
      *(byte *)(param_1 + 10) = bVar2;
      *(char *)(param_1 + 0x4c) = (char)uVar4;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar4 << 4);
      sub_080127E4(param_1,0x5f03);
      *(undefined *)(param_1 + 0xb7) = 8;
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    }
    sub_080128D4(param_1);
    cVar1 = *(char *)(param_1 + 0xb7) + -1;
    *(char *)(param_1 + 0xb7) = cVar1;
    if (cVar1 == '\0') {
      sub_080127E4(param_1,0x5f01);
      *(undefined *)(param_1 + 0xe) = 1;
    }
  default:
    goto switchD_0807f42a_caseD_5;
  }
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  *(undefined *)(param_1 + 0xf) = 0;
switchD_0807f42a_caseD_5:
  pbVar5 = (byte *)(param_1 + 0xb6);
  *pbVar5 = *pbVar5 + 2;
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 100) + (short)(&DAT_080ef450)[*pbVar5] * 0x48;
  iVar3 = (short)(&DAT_080ef450)[*pbVar5 + 0x40 & 0xff] * 0x48;
  if (iVar3 < 0) {
    iVar3 = (short)(&DAT_080ef450)[*pbVar5 + 0x40 & 0xff] * -0x48;
  }
  if (iVar3 < 0) {
    iVar3 = iVar3 + 7;
  }
  *(int *)(param_1 + 0x58) =
       *(int *)(param_1 + 0x68) + (short)(&DAT_080ef450)[(*pbVar5 + 0x40) * 2 & 0xff] * 9 +
       (iVar3 >> 3);
  return in_lr;
}

