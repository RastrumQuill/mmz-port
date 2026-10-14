// sub_08078140 at 0x08078140 (thumb)

undefined4 sub_08078140(int param_1)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xf)) {
  case 0:
    piVar4 = (int *)(param_1 + 0xd0);
    if (*piVar4 == 0) {
      iVar6 = sub_080AD114(param_1);
      *piVar4 = iVar6;
      *(undefined *)(iVar6 + 0xb4) = 0;
      *(undefined4 *)(*piVar4 + 0xb8) = 0;
    }
    sub_08078ED4(param_1,1);
    uVar7 = *(byte *)(param_1 + 0xc5) + 1 & 1;
    *(uint *)(param_1 + 0x5c) = (uVar7 * 2 + -1) * 0xc0;
    uVar5 = sub_08078F40(param_1,uVar7);
    *(undefined4 *)(param_1 + 0x68) = uVar5;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(byte *)(param_1 + 0x13) = (byte)uVar7;
    *(byte *)(param_1 + 0xc5) = (byte)uVar7;
    *(undefined *)(param_1 + 0x12) = 0x20;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
switchD_08078158_caseD_1:
    sub_0801CFF0(param_1);
    sub_08005784(param_1 + 0x74,
                 *(undefined4 *)
                  (*(char *)(param_1 + 0x71) * 4 +
                  (&DAT_08859dac)[*(ushort *)(&DAT_08859db4 + (uint)*(byte *)(param_1 + 0xc4) * 2)])
                );
    sub_08078E98(param_1);
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
    if (*(int *)(param_1 + 0xd0) != 0) {
      *(uint *)(*(int *)(param_1 + 0xd0) + 0xb8) = (0x20 - (uint)*(byte *)(param_1 + 0x12)) * 0x180;
    }
    if (*(char *)(param_1 + 0x12) == '\0') {
LAB_080782c6:
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    }
switchD_08078158_caseD_6:
    return in_lr;
  case 1:
    goto switchD_08078158_caseD_1;
  case 2:
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  case 3:
    bVar1 = *(byte *)(param_1 + 0x13);
    sub_0801CFF0(param_1);
    sub_08005784(param_1 + 0x74,
                 *(undefined4 *)
                  (*(char *)(param_1 + 0x71) * 4 +
                  (&DAT_08859dac)[*(ushort *)(&DAT_08859db4 + (uint)*(byte *)(param_1 + 0xc4) * 2)])
                );
    sub_08078E98(param_1);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    if (*(int *)(param_1 + 0xd0) != 0) {
      iVar6 = *(int *)(param_1 + 0x60) + 1;
      *(int *)(param_1 + 0x60) = iVar6;
      iVar6 = sub_08128954(iVar6,0xd2);
      *(int *)(param_1 + 0x60) = iVar6;
      cVar2 = FUN_081288bc(iVar6 << 8,0xd2);
      *(byte *)(*(int *)(param_1 + 0xd0) + 0xb4) = (bVar1 * '\x02' + -1) * cVar2;
    }
    if ((int)(((uint)bVar1 * 2 + -1) * (*(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x68))) < 0) {
      return in_lr;
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x68);
    goto LAB_080782c6;
  case 4:
    *(undefined *)(param_1 + 0x12) = 0x20;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  case 5:
    cVar2 = *(char *)(param_1 + 0x13);
    sub_0801CFF0(param_1);
    sub_08005784(param_1 + 0x74,
                 *(undefined4 *)
                  (*(char *)(param_1 + 0x71) * 4 +
                  (&DAT_08859dac)[*(ushort *)(&DAT_08859db4 + (uint)*(byte *)(param_1 + 0xc4) * 2)])
                );
    sub_08078E98(param_1);
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
    iVar6 = *(int *)(param_1 + 0xd0);
    if (iVar6 != 0) {
      *(uint *)(iVar6 + 0xb8) = (uint)*(byte *)(param_1 + 0x12) * 0x180;
      iVar6 = *(int *)(param_1 + 0x60) + 1;
      *(int *)(param_1 + 0x60) = iVar6;
      iVar6 = sub_08128954(iVar6,0xd2);
      *(int *)(param_1 + 0x60) = iVar6;
      cVar3 = FUN_081288bc(iVar6 << 8,0xd2);
      *(char *)(*(int *)(param_1 + 0xd0) + 0xb4) = (cVar2 * '\x02' + -1) * cVar3;
    }
    if (*(char *)(param_1 + 0x12) == '\0') {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      *(undefined *)(param_1 + 0xf) = 0;
    }
  default:
    goto switchD_08078158_caseD_6;
  }
}

