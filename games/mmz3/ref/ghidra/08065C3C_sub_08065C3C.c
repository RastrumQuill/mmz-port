// sub_08065C3C at 0x08065C3C (thumb)

undefined4 sub_08065C3C(int param_1)

{
  char cVar1;
  undefined2 uVar2;
  byte bVar3;
  short *psVar4;
  char *pcVar5;
  int iVar6;
  byte *pbVar7;
  uint uVar8;
  int iVar9;
  undefined4 in_lr;
  int local_1c;
  undefined4 local_18;
  
  iVar9 = *(int *)(param_1 + 0xb4);
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_08007390(param_1 + 0x74,&DAT_083624a0);
    *(undefined *)(param_1 + 0xb9) = 0;
    pbVar7 = (byte *)(param_1 + 0xb8);
    if (*pbVar7 == 0) {
      uVar2 = sub_080FE390((uint)*pbVar7 << 2,10);
      sub_080177CC(param_1,0xa00b,uVar2,4);
    }
    else {
      uVar2 = sub_080FE390((uint)*pbVar7 << 2,10);
      sub_080177CC(param_1,0xa005,uVar2,4);
    }
    sub_080177F4(param_1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(ushort *)(param_1 + 0xba) = (ushort)*pbVar7 * 0x18;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    psVar4 = (short *)(param_1 + 0xba);
    if (*psVar4 != 0) {
      *psVar4 = *psVar4 + -1;
      return in_lr;
    }
    *(undefined *)(param_1 + 0x13) = 0;
    cVar1 = *(char *)(param_1 + 0xe) + '\x01';
    break;
  case 2:
    sub_08007390(param_1 + 0x74,&DAT_08362488);
    sub_080177F4(param_1);
    bVar3 = *(byte *)(param_1 + 10);
    *(byte *)(param_1 + 10) = bVar3 | 1;
    uVar8 = (uint)*(byte *)(iVar9 + 0xbe);
    if (uVar8 == 0) {
      bVar3 = bVar3 & 0xef | 1;
    }
    else {
      bVar3 = bVar3 | 0x11;
    }
    *(byte *)(param_1 + 10) = bVar3;
    uVar8 = uVar8 & 1;
    *(char *)(param_1 + 0x4c) = (char)uVar8;
    pbVar7 = (byte *)(param_1 + 0x4a);
    *pbVar7 = *pbVar7 & 0xef | (byte)(uVar8 << 4);
    uVar8 = *(byte *)(param_1 + 0x13) ^ 1;
    if (uVar8 == 0) {
      bVar3 = *(byte *)(param_1 + 10) & 0xdf;
    }
    else {
      bVar3 = *(byte *)(param_1 + 10) | 0x20;
    }
    *(byte *)(param_1 + 10) = bVar3;
    uVar8 = uVar8 & 1;
    *(char *)(param_1 + 0x4d) = (char)uVar8;
    *pbVar7 = *pbVar7 & 0xdf | (byte)(uVar8 << 5);
    iVar6 = *(int *)(iVar9 + 0xb4) + 0x3000;
    *(int *)(param_1 + 0x54) = iVar6;
    *(uint *)(param_1 + 0x54) =
         iVar6 + (uint)(*(byte *)(param_1 + 0x13) ^ *(byte *)(iVar9 + 0xbe)) * -0x6000;
    *(uint *)(param_1 + 0x58) = *(int *)(iVar9 + 0xb8) + (uint)*(byte *)(param_1 + 0x13) * -0xa000;
    *(uint *)(param_1 + 0x60) = (uint)*(byte *)(param_1 + 0x13) * 0x200 + -0x100;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    sub_080177F4(param_1);
    cVar1 = *(char *)(param_1 + 0x71);
    if ((((cVar1 == '\0') && ((*(byte *)(param_1 + 0xb8) & 1) != 0)) ||
        ((cVar1 == '\x05' && ((*(byte *)(param_1 + 0xb8) & 1) == 0)))) &&
       (*(char *)(param_1 + 0x72) == '\x03')) {
      pcVar5 = (char *)(param_1 + 0xb9);
      *pcVar5 = *pcVar5 + '\x01';
      if ((*pcVar5 + *(char *)(param_1 + 0xb8) & 3U) == 0) {
        cVar1 = FUN_080fe2f8((int)*(char *)(param_1 + 0x71),5);
        uVar8 = (int)cVar1 ^ (uint)*(byte *)(iVar9 + 0xbe);
        local_1c = uVar8 * 0x1800 + *(int *)(param_1 + 0x54) + -0xc00;
        local_18 = *(undefined4 *)(param_1 + 0x58);
        sub_0800471C(0x2c);
        sub_0809C41C(&local_1c,0x200,(uVar8 << 0x1f) >> 0x18);
      }
    }
    iVar6 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = iVar6;
    if (*(char *)(param_1 + 0x13) == '\0') {
      if (*(int *)(iVar9 + 0xb8) + -0xa000 <= iVar6) {
        return in_lr;
      }
      cVar1 = *(char *)(param_1 + 0xe) + '\x01';
    }
    else {
      if (iVar6 <= *(int *)(iVar9 + 0xb8)) {
        return in_lr;
      }
      cVar1 = *(char *)(param_1 + 0xe) + '\x01';
    }
    break;
  case 4:
    sub_08007390(param_1 + 0x74,&DAT_083624a0);
    if (*(char *)(param_1 + 0x13) == '\0') {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
      *(undefined *)(param_1 + 0x12) = 8;
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      goto switchD_08065c56_caseD_5;
    }
    cVar1 = '\0';
    *(undefined *)(param_1 + 0xd) = 0;
    break;
  case 5:
switchD_08065c56_caseD_5:
    if (*(char *)(param_1 + 0x12) != '\0') {
      *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
      return in_lr;
    }
    *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
    cVar1 = '\x02';
    break;
  default:
    goto switchD_08065c56_caseD_6;
  }
  *(char *)(param_1 + 0xe) = cVar1;
switchD_08065c56_caseD_6:
  return in_lr;
}

