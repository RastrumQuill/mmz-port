// sub_080A861C at 0x080A861C (thumb)

undefined4 sub_080A861C(int param_1)

{
  short sVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  short *psVar5;
  short *psVar6;
  byte *pbVar7;
  int iVar8;
  undefined4 in_lr;
  
  iVar8 = *(int *)(param_1 + 0x20);
  if (*(char *)(param_1 + 0xe) != '\0') {
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    *(undefined *)(param_1 + 0x12) = 0x18;
  }
  sub_0809C980(param_1);
  switch(*(undefined *)(param_1 + 0xf)) {
  case 0:
    if ((*(byte *)(param_1 + 0x12) & 3) < 2) {
      *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf | 0xd0;
      *(undefined *)(param_1 + 0x1e) = 0xd;
    }
    else {
      cVar2 = (&DAT_02023120)[*(byte *)(param_1 + 9)];
      *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf | cVar2 << 4;
      *(char *)(param_1 + 0x1e) = cVar2;
    }
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != -1) {
      return in_lr;
    }
    sub_0809C834(param_1);
    sub_0809C930(param_1,8);
    sub_0809C980(param_1);
    *(undefined *)(param_1 + 0x44) = *(undefined *)(param_1 + 0x11);
    if (*(char *)(param_1 + 0x11) == '\0') {
      bVar3 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar3 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar3;
    *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf3 | 4;
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined2 *)(param_1 + 200) = 0x100;
    *(undefined2 *)(param_1 + 0xca) = 0x100;
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0x87;
    break;
  case 1:
    psVar5 = (short *)(param_1 + 200);
    *(short *)(param_1 + 0x48) = *psVar5;
    psVar6 = (short *)(param_1 + 0xca);
    *(short *)(param_1 + 0x4a) = *psVar6;
    *psVar5 = *psVar5 + -0x20;
    *psVar6 = *psVar6 + -0x10;
    if (*psVar5 < 0x10) {
      *psVar5 = 0x10;
    }
    if (0xf < *psVar6) {
      return in_lr;
    }
    *psVar6 = 0x10;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(undefined *)(param_1 + 0x12) = 0x10;
    break;
  case 2:
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != -1) {
      return in_lr;
    }
    sub_0809C930(param_1,9);
    sub_0809C980(param_1);
    bVar3 = *(byte *)(param_1 + 10);
    *(byte *)(param_1 + 10) = bVar3 | 1;
    if ((bVar3 & 0x10) == 0) {
      iVar4 = *(int *)(iVar8 + 0x4c) + -0x5800;
    }
    else {
      iVar4 = *(int *)(iVar8 + 0x4c) + 0x5800;
    }
    *(int *)(param_1 + 0x4c) = iVar4;
    iVar8 = *(int *)(iVar8 + 0xbc);
    *(int *)(param_1 + 0x50) = iVar8 + 0x6c00;
    if (*(short *)(param_1 + 0x8c) < 0x20) {
      *(undefined4 *)(param_1 + 0x58) = 0x480;
      *(int *)(param_1 + 0x50) = iVar8 + 0x5c00;
    }
    else if (*(short *)(param_1 + 0x8c) < 0x60) {
      *(undefined4 *)(param_1 + 0x58) = 0x440;
      *(int *)(param_1 + 0x50) = iVar8 + 0x6400;
    }
    else {
      *(undefined4 *)(param_1 + 0x58) = 0x400;
    }
    break;
  case 3:
    psVar6 = (short *)(param_1 + 200);
    *(short *)(param_1 + 0x48) = *psVar6;
    psVar5 = (short *)(param_1 + 0xca);
    *(short *)(param_1 + 0x4a) = *psVar5;
    *psVar6 = *psVar6 + 0x10;
    sVar1 = *psVar5;
    *psVar5 = sVar1 + 0x20;
    if (0x100 < (short)(sVar1 + 0x20)) {
      *psVar5 = 0x100;
    }
    if (*psVar6 < 0x101) {
      return in_lr;
    }
    *psVar6 = 0x100;
    sub_0809C6C4(param_1);
    sub_0809C930(param_1,7);
    sub_0809C980(param_1);
    *(undefined *)(param_1 + 0x44) = *(undefined *)(param_1 + 0x11);
    if (*(char *)(param_1 + 0x11) == '\0') {
      bVar3 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar3 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar3;
    cVar2 = (&DAT_02023120)[*(byte *)(param_1 + 9)];
    pbVar7 = (byte *)(param_1 + 0x41);
    *pbVar7 = *pbVar7 & 0xf | cVar2 << 4;
    *(char *)(param_1 + 0x1e) = cVar2;
    *pbVar7 = *pbVar7 & 0xf3 | 4;
    *(undefined *)(param_1 + 0x12) = 0x10;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 0x48;
    *(undefined **)(param_1 + 0x28) = &DAT_082b639c;
    return in_lr;
  case 4:
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 == -1) {
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      *(undefined *)(param_1 + 0xe) = 1;
    }
  default:
    goto switchD_080a8648_caseD_5;
  }
  *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
switchD_080a8648_caseD_5:
  return in_lr;
}

