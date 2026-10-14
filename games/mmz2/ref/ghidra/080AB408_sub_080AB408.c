// sub_080AB408 at 0x080AB408 (thumb)

undefined4 sub_080AB408(int param_1)

{
  char cVar1;
  byte bVar2;
  short sVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  int iVar8;
  undefined4 in_lr;
  
  iVar8 = *(int *)(param_1 + 0x28);
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    sub_080128D4(param_1);
    cVar1 = *(char *)(param_1 + 0x13) + '\x14';
    *(char *)(param_1 + 0x13) = cVar1;
    *(char *)(param_1 + 0x24) = cVar1;
    iVar5 = *(int *)(param_1 + 0x60);
    if (iVar5 < 0) {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar5;
      *(int *)(param_1 + 0x60) = iVar5 + *(int *)(param_1 + 0x68);
    }
    if (*(char *)(iVar8 + 0xd) != '\x1d') {
      return in_lr;
    }
    break;
  case 1:
    sub_08012580(param_1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
    sub_080127E4(param_1,0x8b03);
    *(byte *)(param_1 + 0x4c) = (*(byte *)(param_1 + 10) >> 4 ^ 1) & 1;
    uVar6 = (*(byte *)(param_1 + 10) >> 4 ^ 1) & 1;
    pbVar7 = (byte *)(param_1 + 0x4a);
    *pbVar7 = *pbVar7 & 0xef | (byte)(uVar6 << 4);
    if (uVar6 == 0) {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar2;
    *(undefined *)(param_1 + 0x4d) = 1;
    *pbVar7 = *pbVar7 | 0x20;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x20;
    *(undefined4 *)(param_1 + 0x60) = 0x200;
    break;
  case 2:
    sub_080128D4(param_1);
    if (*(int *)(param_1 + 0x60) < 0x800) {
      *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x80;
    }
    iVar8 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = iVar8;
    sVar3 = sub_08008CFC(*(undefined4 *)(param_1 + 0x54),iVar8 + 0x1000);
    if (sVar3 == 0) {
      return in_lr;
    }
    sub_080032EC(0xf3);
    uVar4 = sub_080AB1A4(param_1,1,0);
    *(undefined4 *)(param_1 + 0x2c) = uVar4;
    *(undefined *)(param_1 + 0x12) = 0x10;
    break;
  case 3:
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != -1) {
      return in_lr;
    }
    *(undefined *)(param_1 + 0x13) = 0x80;
    break;
  case 4:
    bVar2 = *(char *)(param_1 + 0x13) + 2;
    *(byte *)(param_1 + 0x13) = bVar2;
    *(int *)(param_1 + 0x58) =
         *(int *)(param_1 + 0x58) + (int)(short)(&DAT_080ef450)[*(byte *)(param_1 + 0x13)];
    if (bVar2 < 0xc1) {
      return in_lr;
    }
    break;
  case 5:
    *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x02';
    *(int *)(param_1 + 0x58) =
         *(int *)(param_1 + 0x58) + (int)(short)(&DAT_080ef450)[*(byte *)(param_1 + 0x13)] / 2;
    if (*(byte *)(*(int *)(param_1 + 0x2c) + 0xc) < 2) {
      return in_lr;
    }
    break;
  case 6:
    sub_0801260C(param_1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
    sub_080127E4(param_1,0x8b03);
    bVar2 = *(byte *)(iVar8 + 10) >> 4;
    uVar6 = bVar2 & 1;
    if ((bVar2 & 1) == 0) {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar2;
    *(char *)(param_1 + 0x4c) = (char)uVar6;
    pbVar7 = (byte *)(param_1 + 0x4a);
    *pbVar7 = *pbVar7 & 0xef | (byte)(uVar6 << 4);
    *(undefined *)(param_1 + 0x4d) = 0;
    *pbVar7 = *pbVar7 & 0xdf;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xdf;
    if ((*(byte *)(iVar8 + 10) & 0x10) == 0) {
      iVar5 = *(int *)(param_1 + 0x54) + 0x800;
    }
    else {
      iVar5 = *(int *)(param_1 + 0x54) + -0x800;
    }
    iVar5 = *(int *)(iVar8 + 0x54) - iVar5;
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0x1f;
    }
    *(int *)(param_1 + 0x5c) = iVar5 >> 5;
    iVar8 = *(int *)(iVar8 + 0x58) - (*(int *)(param_1 + 0x58) + 0x1200);
    if (iVar8 < 0) {
      iVar8 = iVar8 + 0x1f;
    }
    *(int *)(param_1 + 0x60) = iVar8 >> 5;
    *(undefined *)(param_1 + 0x12) = 0x20;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 7:
    sub_080128D4(param_1);
    cVar1 = *(char *)(param_1 + 0x13) + '\x14';
    *(char *)(param_1 + 0x13) = cVar1;
    *(char *)(param_1 + 0x24) = cVar1;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == -1) {
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 8)
      ;
      sub_080AB258(param_1);
    }
  default:
    goto switchD_080ab41e_caseD_8;
  }
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
switchD_080ab41e_caseD_8:
  return in_lr;
}

