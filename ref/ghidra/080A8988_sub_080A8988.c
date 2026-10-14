// sub_080A8988 at 0x080A8988 (thumb)

undefined4 sub_080A8988(int param_1)

{
  short sVar1;
  char cVar2;
  byte bVar3;
  byte *pbVar4;
  undefined4 uVar5;
  short *psVar6;
  short *psVar7;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
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
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0x87;
  }
  sub_0809C980(param_1);
  bVar3 = *(byte *)(param_1 + 0xf);
  if (bVar3 == 1) {
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != -1) {
      return in_lr;
    }
    sub_0809C930(param_1,8);
    sub_0809C980(param_1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_1 + 0xbc);
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0xc0);
  }
  else if (bVar3 < 2) {
    if (bVar3 != 0) {
      return in_lr;
    }
    psVar6 = (short *)(param_1 + 200);
    *(short *)(param_1 + 0x48) = *psVar6;
    psVar7 = (short *)(param_1 + 0xca);
    *(short *)(param_1 + 0x4a) = *psVar7;
    *psVar6 = *psVar6 + -0x20;
    *psVar7 = *psVar7 + -0x10;
    if (*psVar6 < 0x10) {
      *psVar6 = 0x10;
    }
    if (0xf < *psVar7) {
      return in_lr;
    }
    *psVar7 = 0x10;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(undefined *)(param_1 + 0x12) = 0x10;
  }
  else {
    if (bVar3 != 2) {
      if (bVar3 != 3) {
        return in_lr;
      }
      cVar2 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar2;
      if (cVar2 != -1) {
        return in_lr;
      }
      *(undefined *)(param_1 + 0xd) = 3;
      *(undefined *)(param_1 + 0xe) = 1;
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        uVar5 = 0xffffff80;
      }
      else {
        uVar5 = 0x80;
      }
      *(undefined4 *)(param_1 + 0x58) = uVar5;
      return in_lr;
    }
    psVar7 = (short *)(param_1 + 200);
    *(short *)(param_1 + 0x48) = *psVar7;
    psVar6 = (short *)(param_1 + 0xca);
    *(short *)(param_1 + 0x4a) = *psVar6;
    *psVar7 = *psVar7 + 0x10;
    sVar1 = *psVar6;
    *psVar6 = sVar1 + 0x20;
    if (0x100 < (short)(sVar1 + 0x20)) {
      *psVar6 = 0x100;
    }
    if (*psVar7 < 0x101) {
      return in_lr;
    }
    *psVar7 = 0x100;
    *(undefined *)(param_1 + 0x44) = *(undefined *)(param_1 + 0x11);
    if (*(char *)(param_1 + 0x11) == '\0') {
      bVar3 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar3 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar3;
    sub_0809C6C4(param_1);
    sub_0809C930(param_1,5);
    sub_0809C980(param_1);
    pbVar4 = (byte *)(param_1 + 0x41);
    bVar3 = *pbVar4;
    *pbVar4 = bVar3 & 0xf3 | 4;
    cVar2 = (&DAT_02023120)[*(byte *)(param_1 + 9)];
    *pbVar4 = bVar3 & 3 | 4 | cVar2 << 4;
    *(char *)(param_1 + 0x1e) = cVar2;
    *(undefined *)(param_1 + 0x12) = 0x10;
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 0x48;
    *(undefined **)(param_1 + 0x28) = &DAT_082b6394;
  }
  *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  return in_lr;
}

