// sub_0803DAB8 at 0x0803DAB8 (thumb)

undefined4 sub_0803DAB8(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  int iVar9;
  undefined4 in_lr;
  int local_24;
  int local_20;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    *(uint *)(param_1 + 0xc0) = *(uint *)(param_1 + 0xc0) & 0xfffffffe;
    *(undefined *)(param_1 + 0x12) = 0x55;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    if ((*(byte *)(param_1 + 0x12) & 3) == 0) {
      sub_0803D6C8(param_1,0,0);
    }
    sub_0801ACF8(3,param_1 + 0x54);
    if (*(char *)(param_1 + 0x12) == '\0') {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    else {
      *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
    }
    break;
  case 2:
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0x13) = 0;
    *(uint *)(param_1 + 0xc4) = (uint)*(byte *)(param_1 + 0xbe) << 0xf;
    pbVar8 = (byte *)(param_1 + 0xbf);
    *(byte *)(param_1 + 0x4c) = *pbVar8 & 1;
    pbVar5 = (byte *)(param_1 + 0x4a);
    *pbVar5 = *pbVar5 & 0xef | (byte)((*pbVar8 & 1) << 4);
    if ((*pbVar8 & 1) == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    *(byte *)(param_1 + 0x4d) = *pbVar8 & 1;
    *pbVar5 = *pbVar5 & 0xdf | (byte)((*pbVar8 & 1) << 5);
    if ((*pbVar8 & 1) == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xdf;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x20;
    }
    *(byte *)(param_1 + 10) = bVar1;
    *(undefined4 *)(param_1 + 0x5c) = 0xc0;
    *(uint *)(param_1 + 0x5c) = ((uint)*(byte *)(param_1 + 0xbe) * -2 + 1) * 0xc0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    piVar3 = (int *)(param_1 + 0xc4);
    iVar7 = *(short *)((int)&DAT_080fe64c + ((uint)(((*piVar3 >> 8) + 0x40) * 0x1000000) >> 0x17)) *
            0x48;
    *(int *)(param_1 + 0x54) = iVar7;
    *(int *)(param_1 + 0x54) = iVar7 + *(int *)(param_1 + 0xb4);
    iVar7 = *(short *)((int)&DAT_080fe64c + ((uint)((*piVar3 >> 8) << 0x18) >> 0x17)) * -0x48;
    *(int *)(param_1 + 0x58) = iVar7;
    *(int *)(param_1 + 0x58) = iVar7 + *(int *)(param_1 + 0xb8);
    if (*(char *)(param_1 + 0x12) == '\0') {
      bVar1 = *(byte *)(param_1 + 0xbe);
      if (*piVar3 < 0x4001) {
        if (bVar1 == 0) goto LAB_0803dc64;
      }
      else if (bVar1 == 1) {
LAB_0803dc64:
        if (*piVar3 != 0x4000) goto LAB_0803dcf2;
      }
      *(undefined *)(param_1 + 0x12) = 1;
      iVar7 = (0x80 - (*piVar3 >> 8)) * 5;
      if (iVar7 < 0) {
        iVar7 = iVar7 + 0x7f;
      }
      iVar6 = (iVar7 >> 7) * -0x20;
      iVar9 = iVar6 + 0x80;
      if (*(char *)(param_1 + 0xbf) != '\0') {
        iVar9 = iVar6 + 0x100;
      }
      local_24 = *(short *)((int)&DAT_080fe64c + ((uint)((iVar9 + 0x40) * 0x1000000) >> 0x17)) * 0xc
                 + *(int *)(param_1 + 0x54);
      local_20 = *(short *)((int)&DAT_080fe64c + ((uint)(iVar9 << 0x18) >> 0x17)) * -0xc +
                 *(int *)(param_1 + 0x58);
      sub_0800471C(0x2c);
      uVar2 = 0xfffffe00;
      if (*(char *)(param_1 + 0xbf) != '\0') {
        uVar2 = 0x200;
      }
      sub_0809C41C(&local_24,uVar2,(iVar7 >> 7) * 0x20 - 0x80U & 0xff);
    }
LAB_0803dcf2:
    iVar7 = *piVar3 + *(int *)(param_1 + 0x5c);
    *piVar3 = iVar7;
    uVar4 = (uint)*(byte *)(param_1 + 0xbe);
    iVar6 = uVar4 * -0x7e + 0x7f;
    iVar9 = iVar6 * 0x100;
    if (iVar7 == iVar9 || iVar7 + iVar6 * -0x100 < 0 != SBORROW4(iVar7,iVar9)) {
      if (uVar4 == 0) goto LAB_0803dd1c;
LAB_0803dd22:
      *piVar3 = iVar9;
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    else {
      if (uVar4 != 1) goto LAB_0803dd22;
LAB_0803dd1c:
      if (*piVar3 == iVar9) goto LAB_0803dd22;
    }
    iVar7 = (*piVar3 >> 8) * 5;
    if (iVar7 < 0) {
      iVar7 = iVar7 + 0x7f;
    }
    iVar7 = iVar7 >> 7;
    if (4 < iVar7) {
      iVar7 = 4;
    }
    sub_08017700(param_1,*(undefined2 *)(&DAT_0835e28e + iVar7 * 2));
    sub_080177F4(param_1);
    sub_08007390(param_1 + 0x74,&DAT_0835e190 + (uint)(byte)(&UNK_0835e298)[iVar7] * 0x18);
    bVar1 = *(char *)(param_1 + 0x13) + 1;
    *(byte *)(param_1 + 0x13) = bVar1;
    if ((bVar1 & 3) == 0) {
      sub_0803D6C8(param_1,*(undefined *)(param_1 + 0x12),0);
    }
    sub_0801ACF8(3,param_1 + 0x54);
    break;
  case 4:
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    sub_08007390(param_1 + 0x74,&DAT_0835e268);
    *(undefined4 *)(param_1 + 0xc4) = 0x55;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    bVar1 = *(char *)(param_1 + 0x13) + 1;
    *(byte *)(param_1 + 0x13) = bVar1;
    if ((bVar1 & 3) == 0) {
      sub_0803D6C8(param_1,1,0);
    }
    sub_0801ACF8(3,param_1 + 0x54);
    iVar7 = *(int *)(param_1 + 0xc4) + -1;
    *(int *)(param_1 + 0xc4) = iVar7;
    if (iVar7 == 0) {
      sub_08004768(0x10d);
      *(undefined *)(param_1 + 0xd) = 1;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  default:
    break;
  }
  return in_lr;
}

