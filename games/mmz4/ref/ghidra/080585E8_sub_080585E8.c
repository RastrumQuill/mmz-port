// sub_080585E8 at 0x080585E8 (thumb)

/* WARNING: Removing unreachable block (ram,0x0805874c) */

undefined4 sub_080585E8(int param_1)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 10);
  switch(*(undefined *)(param_1 + 0xf)) {
  case 0:
    sub_08002B10(0xff);
    sub_08001D30(&DAT_08c4449c,(DAT_0202e0b6 - 0x300) * 0x20 + 0x10000);
    sub_08002208(&DAT_08c444a8,(DAT_0202deb6 - 5) * 0x20 + 0x200);
    iVar6 = sub_080BFF34(param_1);
    *(int *)(param_1 + 0xd0) = iVar6;
    if (iVar6 == 0) {
      *(undefined *)(param_1 + 0xe) = 3;
      *(undefined *)(param_1 + 0xf) = 0;
      sub_08058968(param_1);
      return in_lr;
    }
    *(undefined *)(iVar6 + 0xb8) = 1;
    sub_0801CF00(param_1,0xa016);
    *(undefined *)(param_1 + 0x12) = 0x20;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
switchD_08058604_caseD_1:
    sub_0801CFF0(param_1);
    sub_08005784(param_1 + 0x74,
                 &DAT_08854f90 +
                 (uint)**(byte **)(*(char *)(param_1 + 0x71) * 4 +
                                  *(int *)(&DAT_088551e0 +
                                          (CONCAT11(*(undefined *)(param_1 + 0x1e),
                                                    *(undefined *)(param_1 + 0x70)) - 0xa000) * 4))
                 * 0x18);
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 == '\0') {
LAB_08058890:
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    }
switchD_08058604_caseD_6:
    return in_lr;
  case 1:
    goto switchD_08058604_caseD_1;
  case 2:
    iVar6 = sub_08059768(param_1);
    *(uint *)(param_1 + 100) = (uint)*(ushort *)(&DAT_0885529e + iVar6 * 2);
    uVar4 = sub_08008534(*(int *)(param_1 + 0xcc) + 0xf000,*(undefined4 *)(param_1 + 0xb8));
    *(undefined4 *)(param_1 + 0x68) = uVar4;
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0x13) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    iVar6 = *(int *)(param_1 + 100) * 0x100;
    if (iVar6 < 0) {
      iVar6 = iVar6 + 0xff;
    }
    *(int *)(param_1 + 0x60) = iVar6 >> 8;
    *(undefined4 *)(param_1 + 0xc4) = 0;
    *(undefined4 *)(param_1 + 200) = 0xfffffff0;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  case 3:
    sub_0801CFF0(param_1);
    sub_08005784(param_1 + 0x74,
                 &DAT_08854f90 +
                 (uint)**(byte **)(*(char *)(param_1 + 0x71) * 4 +
                                  *(int *)(&DAT_088551e0 +
                                          (CONCAT11(*(undefined *)(param_1 + 0x1e),
                                                    *(undefined *)(param_1 + 0x70)) - 0xa000) * 4))
                 * 0x18);
    bVar3 = *(char *)(param_1 + 0x12) + 1;
    *(byte *)(param_1 + 0x12) = bVar3;
    if ((bVar3 & 0xf) == 0) {
      iVar6 = sub_080599B4(param_1,param_1 + 0x13);
      iVar5 = *(int *)(param_1 + 100) *
              (int)*(short *)((int)&DAT_08128c10 + ((uint)((iVar6 + 0x40) * 0x1000000) >> 0x17));
      if (iVar5 < 0) {
        iVar5 = iVar5 + 0xff;
      }
      *(int *)(param_1 + 0x5c) = iVar5 >> 8;
      iVar6 = *(int *)(param_1 + 100) *
              (int)*(short *)((int)&DAT_08128c10 + ((uint)(iVar6 << 0x18) >> 0x17));
      if (iVar6 < 0) {
        iVar6 = iVar6 + 0xff;
      }
      *(int *)(param_1 + 0x60) = iVar6 >> 8;
    }
    piVar7 = (int *)(param_1 + 0xc4);
    if (((*(uint *)(param_1 + 0x8c) & 1) != 0) && ((*(byte *)(param_1 + 0x97) & 0xf0) == 0x30)) {
      *piVar7 = 0x200;
    }
    iVar6 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    if (*piVar7 != 0) {
      iVar5 = *piVar7 + *(int *)(param_1 + 200);
      *piVar7 = iVar5;
      if (iVar5 < 0) {
        *piVar7 = 0;
      }
      iVar6 = iVar6 + *piVar7 * ((bVar1 >> 4 & 1) * -2 + 1);
    }
    *(int *)(param_1 + 0x54) = iVar6;
    iVar6 = *(int *)(param_1 + 0xbc) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0xbc) = iVar6;
    *(int *)(param_1 + 0x58) = iVar6 + (short)(&DAT_08128c10)[*(byte *)(param_1 + 0xb5)] * 2;
    iVar6 = *(int *)(param_1 + 0x68) + 0x1400;
    if (*(int *)(param_1 + 0x58) < iVar6) {
      return in_lr;
    }
    *(int *)(param_1 + 0x58) = iVar6;
    goto LAB_08058890;
  case 4:
    *(undefined *)(*(int *)(param_1 + 0xd0) + 0xb8) = 2;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  case 5:
    sub_0801CFF0(param_1);
    sub_08005784(param_1 + 0x74,
                 &DAT_08854f90 +
                 (uint)**(byte **)(*(char *)(param_1 + 0x71) * 4 +
                                  *(int *)(&DAT_088551e0 +
                                          (CONCAT11(*(undefined *)(param_1 + 0x1e),
                                                    *(undefined *)(param_1 + 0x70)) - 0xa000) * 4))
                 * 0x18);
    iVar6 = *(int *)(param_1 + 0xd0);
    if (*(short *)(iVar6 + 0xb4) == *(short *)(iVar6 + 0xb6)) {
      *(byte *)(iVar6 + 10) = *(byte *)(iVar6 + 10) & 0xfc;
      *(undefined4 *)(iVar6 + 0x8c) = 0;
      *(undefined4 *)(iVar6 + 0x90) = 0;
      *(undefined *)(iVar6 + 0x94) = 0;
      *(byte *)(iVar6 + 10) = *(byte *)(iVar6 + 10) & 0xfb;
      *(undefined4 *)(iVar6 + 0xc) = 3;
      *(undefined4 *)(iVar6 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(iVar6 + 9)] + 0xc);
      *(int *)(param_1 + 0xd0) = 0;
      *(undefined *)(param_1 + 0xe) = 3;
      *(undefined *)(param_1 + 0xf) = 0;
    }
  default:
    goto switchD_08058604_caseD_6;
  }
}

