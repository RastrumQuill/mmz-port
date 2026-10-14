// sub_08064780 at 0x08064780 (thumb)

undefined4 sub_08064780(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 in_lr;
  undefined4 local_2c [3];
  
  bVar1 = *(byte *)(param_1 + 10) >> 4;
  uVar3 = bVar1 & 1;
  switch(*(undefined *)(param_1 + 0xf)) {
  case 0:
    break;
  case 1:
    goto switchD_080647ac_caseD_1;
  case 2:
    goto switchD_080647ac_caseD_2;
  case 3:
    goto switchD_080647ac_caseD_3;
  case 4:
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  case 5:
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    iVar2 = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x68);
    *(int *)(param_1 + 0x60) = iVar2;
    if (iVar2 < 0) {
      uVar5 = 0xfffffe00;
      if (-0x201 < iVar2) goto switchD_080647ac_caseD_6;
LAB_08064964:
      *(undefined4 *)(param_1 + 0x60) = uVar5;
      goto LAB_08064966;
    }
    if ((0 < iVar2) && (uVar5 = 0x200, 0x200 < iVar2)) goto LAB_08064964;
  default:
    goto switchD_080647ac_caseD_6;
  }
  sub_08002B10(0x110);
  sub_08066468(param_1 + 0x54,1,2);
  if ((bVar1 & 1) == 0) {
    iVar2 = *(int *)(param_1 + 0xd0) + 0x2800;
  }
  else {
    iVar2 = *(int *)(param_1 + 0xd0) + 0xc800;
  }
  iVar6 = (uVar3 * 2 + -1) * 0x400;
  *(int *)(param_1 + 0x5c) = iVar6;
  iVar2 = iVar2 - *(int *)(param_1 + 0x54);
  iVar4 = FUN_081288bc(iVar2,iVar6);
  *(int *)(param_1 + 100) = iVar4;
  iVar2 = sub_08128954(iVar2,iVar6);
  if (iVar2 != 0) {
    *(int *)(param_1 + 100) = iVar4 + 1;
  }
  *(int *)(param_1 + 100) = *(int *)(param_1 + 100) / 2;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0xffffffc0;
  *(undefined *)(param_1 + 0x12) = 0;
  *(char *)(param_1 + 0x13) = (char)uVar3;
  *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
switchD_080647ac_caseD_1:
  if (*(int *)(param_1 + 100) == 0) {
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
switchD_080647ac_caseD_2:
    iVar2 = FUN_081288bc(-*(int *)(param_1 + 0x60),-*(int *)(param_1 + 0x68));
    *(int *)(param_1 + 100) = iVar2 + 1;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
switchD_080647ac_caseD_3:
    if ((*(byte *)(param_1 + 0x13) & 1) == 0) {
      iVar2 = *(int *)(param_1 + 0xd0) + 0x2800;
    }
    else {
      iVar2 = *(int *)(param_1 + 0xd0) + 0xc800;
    }
    if (*(int *)(param_1 + 100) == 0) {
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
      iVar4 = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x68);
      *(int *)(param_1 + 0x60) = iVar4;
      if (iVar4 < 0) {
        uVar5 = 0xfffffe00;
        if (iVar4 < -0x200) {
LAB_08064918:
          *(undefined4 *)(param_1 + 0x60) = uVar5;
        }
      }
      else if ((0 < iVar4) && (uVar5 = 0x200, 0x200 < iVar4)) goto LAB_08064918;
    }
    else {
      *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + -1;
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
      *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) - *(int *)(param_1 + 0x68);
    }
    iVar4 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = iVar4;
    if (-1 < (int)((iVar4 - iVar2) * ((*(byte *)(param_1 + 0x13) & 1) * 2 + -1))) {
      *(int *)(param_1 + 0x54) = iVar2;
LAB_08064966:
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    }
  }
  else {
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + -1;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    iVar2 = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x68);
    *(int *)(param_1 + 0x60) = iVar2;
    if (iVar2 < 0) {
      if (iVar2 < -0x200) {
        *(undefined4 *)(param_1 + 0x60) = 0xfffffe00;
      }
    }
    else if ((0 < iVar2) && (0x200 < iVar2)) {
      *(undefined4 *)(param_1 + 0x60) = 0x200;
    }
  }
switchD_080647ac_caseD_6:
  switch(*(undefined *)(param_1 + 0x12)) {
  case 0:
    sub_08065A40(param_1,0);
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
    goto switchD_0806497e_caseD_5;
  case 1:
    if (*(byte *)(param_1 + 0xf) < 2) goto switchD_0806497e_caseD_5;
    uVar5 = 0x18;
    break;
  case 2:
    if (*(byte *)(param_1 + 0xf) < 2) goto switchD_0806497e_caseD_5;
    uVar5 = 0x18;
    break;
  case 3:
    if (*(char *)(param_1 + 0x71) != '\x05') goto switchD_0806497e_caseD_5;
    uVar3 = uVar3 + 1 & 1;
    *(char *)(param_1 + 0x4c) = (char)uVar3;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar3 << 4);
    if (uVar3 == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    goto LAB_08064a32;
  case 4:
    if (*(char *)(param_1 + 0x73) != '\x03') goto switchD_0806497e_caseD_5;
    uVar5 = 0;
    break;
  default:
    goto switchD_0806497e_caseD_5;
  }
  sub_08065A40(param_1,uVar5);
LAB_08064a32:
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
switchD_0806497e_caseD_5:
  sub_0801CFF0(param_1);
  sub_08005784(param_1 + 0x74,
               *(int *)(*(char *)(param_1 + 0x71) * 4 +
                       (&DAT_08857a44)
                       [*(ushort *)(&DAT_08857b64 + (uint)*(byte *)(param_1 + 0xb4) * 2)]) +
               (uint)*(byte *)(*(int *)((uint)*(byte *)(param_1 + 0xb4) * 4 +
                                       *(int *)(&DAT_08857b5c + (uint)*(byte *)(param_1 + 0xb5) * 4)
                                       ) + (int)*(char *)(param_1 + 0x71)) * 0x18);
  if ((*(char *)(param_1 + 0xf) == '\x06') && (*(char *)(param_1 + 0x12) == '\x05')) {
    local_2c[0] = 0x32;
    local_2c[1] = 0x28;
    local_2c[2] = 0x1e;
    iVar2 = sub_0806610C(param_1,&stack0xffffffe0);
    *(char *)(param_1 + 0xe0) = (char)local_2c[iVar2];
    *(undefined *)(param_1 + 0xd) = 0xd;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

