// sub_080D2990 at 0x080D2990 (thumb)

undefined4 sub_080D2990(int param_1)

{
  short sVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  ushort uVar5;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    *(undefined4 *)(param_1 + 0x54) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0x9300;
    *(undefined *)(param_1 + 0x13) = 0;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 1:
    *(int *)(param_1 + 0x54) =
         *(short *)((int)&DAT_080fe64c + (((uint)*(byte *)(param_1 + 0x13) << 0x19) >> 0x17)) * 0x30
    ;
    uVar4 = *(byte *)(param_1 + 0x13) + 1;
    *(char *)(param_1 + 0x13) = (char)uVar4;
    if (0x1f < (uVar4 & 0xff)) {
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      *(undefined *)(param_1 + 0x13) = 0x10;
    }
    goto switchD_080d29a4_caseD_6;
  case 2:
    cVar2 = *(char *)(param_1 + 0x13) + -1;
    *(char *)(param_1 + 0x13) = cVar2;
    if (cVar2 == '\0') goto switchD_080d29a4_caseD_6;
    *(undefined *)(param_1 + 0x13) = 4;
    break;
  case 3:
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 0x200;
    cVar2 = *(char *)(param_1 + 0x13) + -1;
    *(char *)(param_1 + 0x13) = cVar2;
    if (cVar2 == '\0') goto switchD_080d29a4_caseD_6;
    *(undefined *)(param_1 + 0x13) = 8;
    break;
  case 4:
    uVar4 = *(byte *)(param_1 + 0x13) - 1;
    *(char *)(param_1 + 0x13) = (char)uVar4;
    *(int *)(param_1 + 0x54) =
         *(short *)((int)&DAT_080fe64c + (uVar4 * 0x8000000 >> 0x17)) * 0x30 + 0x800;
    if ((uVar4 & 0xff) == 0) {
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      sub_0800471C(0x12e);
    }
    goto switchD_080d29a4_caseD_6;
  case 5:
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) * 3 >> 2;
    iVar3 = *(int *)(param_1 + 0x58) * 3 >> 2;
    *(int *)(param_1 + 0x58) = iVar3;
    if (0x400 < iVar3) goto switchD_080d29a4_caseD_6;
    DAT_02002410 = DAT_02002410 & 0xbfff;
    break;
  default:
    goto switchD_080d29a4_caseD_6;
  }
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
switchD_080d29a4_caseD_6:
  uVar5 = *(byte *)(param_1 + 0x12) + 1;
  *(char *)(param_1 + 0x12) = (char)uVar5;
  uVar5 = uVar5 & 1;
  sVar1 = (short)((uint)*(undefined4 *)(param_1 + 0x54) >> 8) + uVar5 * 8;
  DAT_02002416 = sVar1 + 0xbcU & 0xff | (0xbc - sVar1) * 0x100;
  DAT_0200241a = (short)((uint)*(undefined4 *)(param_1 + 0x58) >> 8) + uVar5 * 4 & 0xff;
  DAT_03002ac0 = 0x7fff;
  return in_lr;
}

