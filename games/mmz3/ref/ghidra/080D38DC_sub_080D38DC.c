// sub_080D38DC at 0x080D38DC (thumb)

undefined4 sub_080D38DC(int param_1)

{
  byte bVar1;
  char cVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    *(undefined4 *)(param_1 + 0x54) = 0x400;
    *(undefined4 *)(param_1 + 0x58) = 0x9200;
    *(undefined *)(param_1 + 0x13) = 0;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    break;
  case 1:
    break;
  case 2:
    goto switchD_080d38f0_caseD_2;
  case 3:
    goto switchD_080d38f0_caseD_3;
  default:
    goto switchD_080d38f0_caseD_4;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -0x800;
  bVar1 = *(char *)(param_1 + 0x13) + 1;
  *(byte *)(param_1 + 0x13) = bVar1;
  if (0x3f < bVar1) {
    *(undefined *)(param_1 + 0x13) = 0;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
switchD_080d38f0_caseD_2:
    *(int *)(param_1 + 0x54) = (short)(&DAT_080fe64c)[*(byte *)(param_1 + 0x13)] * 0xb8;
    bVar1 = *(char *)(param_1 + 0x13) + 1;
    *(byte *)(param_1 + 0x13) = bVar1;
    if (0x3f < bVar1) {
      *(undefined *)(param_1 + 0x13) = 0x10;
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
switchD_080d38f0_caseD_3:
      cVar2 = *(char *)(param_1 + 0x13) + -1;
      *(char *)(param_1 + 0x13) = cVar2;
      if (cVar2 == '\0') {
        DAT_02002410 = DAT_02002410 & 0xbfff;
        *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      }
    }
  }
switchD_080d38f0_caseD_4:
  uVar4 = *(byte *)(param_1 + 0x12) + 1;
  *(char *)(param_1 + 0x12) = (char)uVar4;
  iVar6 = (*(int *)(param_1 + 0x54) >> 8) + (uVar4 & 1) * 8;
  iVar5 = (iVar6 + 0xc0) * 0x10000;
  if (iVar5 >> 0x10 < 0xf1) {
    uVar3 = (ushort)((uint)iVar5 >> 0x10) & 0xff;
  }
  else {
    uVar3 = 0xf0;
  }
  DAT_02002416 = uVar3 | (0xc0 - (short)iVar6) * 0x100;
  uVar4 = *(byte *)(param_1 + 0x12) & 1;
  DAT_0200241a = (short)uVar4 * 8 + 0x93U & 0xff;
  iVar5 = (int)(((*(int *)(param_1 + 0x58) >> 8) + uVar4 * -8) * 0x10000) >> 0x10;
  if (-1 < iVar5) {
    DAT_0200241a = DAT_0200241a | (ushort)(iVar5 << 8);
  }
  DAT_03002ac0 = 0x7fff;
  return in_lr;
}

