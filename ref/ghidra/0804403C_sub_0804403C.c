// sub_0804403C at 0x0804403C (thumb)

undefined4 sub_0804403C(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08029778(param_1,0xf);
    uVar4 = (uint)*(byte *)(param_1 + 0x12);
    *(undefined4 *)(param_1 + 0x54) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
    iVar5 = sub_0804246C(param_1);
    iVar5 = *(int *)(&DAT_082ae84c + ((uint)(iVar5 << 0x18) >> 0x16));
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      iVar2 = iVar5 * (short)(&DAT_080c8e24)[uVar4 + 0x40];
      if (iVar2 < 0) {
        iVar2 = iVar2 + 0xff;
      }
      *(int *)(param_1 + 0x5c) = -(iVar2 >> 8);
      iVar5 = iVar5 * (short)(&DAT_080c8e24)[uVar4];
      if (iVar5 < 0) {
        iVar5 = iVar5 + 0xff;
      }
      iVar5 = -(iVar5 >> 8);
    }
    else {
      iVar2 = iVar5 * (short)(&DAT_080c8e24)[uVar4 + 0x40];
      if (iVar2 < 0) {
        iVar2 = iVar2 + 0xff;
      }
      *(int *)(param_1 + 0x5c) = iVar2 >> 8;
      iVar5 = iVar5 * (short)(&DAT_080c8e24)[uVar4];
      if (iVar5 < 0) {
        iVar5 = iVar5 + 0xff;
      }
      iVar5 = iVar5 >> 8;
    }
    *(int *)(param_1 + 0x60) = iVar5;
    *(undefined *)(param_1 + 0x13) = 0;
    sub_08001EAC(0x12);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  bVar1 = *(char *)(param_1 + 0x13) + 1;
  *(byte *)(param_1 + 0x13) = bVar1;
  iVar5 = 5;
  if (bVar1 < 7) {
    iVar5 = 4;
  }
  if (iVar5 != 5) goto LAB_08044266;
  bVar1 = *(byte *)(param_1 + 0x13);
  iVar2 = sub_0804246C(param_1);
  iVar3 = sub_0804246C(param_1);
  iVar2 = sub_080C8AD0(*(undefined4 *)(&DAT_082ae858 + ((uint)(iVar2 << 0x18) >> 0x16)),
                       *(undefined4 *)(&DAT_082ae84c + ((uint)(iVar3 << 0x18) >> 0x16)));
  if ((int)(uint)bVar1 < iVar2 + 7) {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  }
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
  uVar4 = sub_0804276C(param_1);
  if ((uVar4 & 1) == 0) {
    iVar2 = *(int *)(param_1 + 0x54);
    if (iVar2 < 0) {
      iVar2 = -iVar2;
    }
    iVar3 = *(int *)(param_1 + 0x58);
    if (iVar3 < 0) {
      iVar3 = -iVar3;
    }
    if (iVar3 < iVar2) {
      if ((uVar4 & 2) == 0) goto LAB_08044266;
      sub_0801412C(8,param_1 + 0x4c);
      sub_08001EAC(0x83);
      if (-1 < *(short *)(param_1 + 0xbc)) {
        sub_08001EE8();
        *(short *)(param_1 + 0xbc) = -1;
      }
      *(undefined *)(param_1 + 0xd) = 0xf;
      *(undefined *)(param_1 + 0xe) = 0;
      *(int *)(param_1 + 0x54) = -*(int *)(param_1 + 0x54) / 2;
    }
    else {
      if ((uVar4 & 9) == 0) goto LAB_08044266;
      sub_0801412C(8,param_1 + 0x4c);
      sub_08001EAC(0x83);
      if (-1 < *(short *)(param_1 + 0xbc)) {
        sub_08001EE8();
        *(short *)(param_1 + 0xbc) = -1;
      }
      *(undefined *)(param_1 + 0xd) = 0xf;
      *(undefined *)(param_1 + 0xe) = 0;
      *(undefined4 *)(param_1 + 0x54) = 0;
      iVar2 = *(int *)(param_1 + 0x58);
      if (0 < iVar2) goto LAB_08044252;
    }
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  else {
    sub_0801412C(8,param_1 + 0x4c);
    sub_08001EAC(0x83);
    if (-1 < *(short *)(param_1 + 0xbc)) {
      sub_08001EE8();
      *(short *)(param_1 + 0xbc) = -1;
    }
    *(undefined *)(param_1 + 0xd) = 0xf;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0;
    iVar2 = *(int *)(param_1 + 0x58);
LAB_08044252:
    iVar2 = iVar2 * -0x1c0;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xff;
    }
    *(int *)(param_1 + 0x58) = iVar2 >> 8;
  }
LAB_08044266:
  bVar1 = sub_08042CE8(param_1,0,iVar5);
  if (bVar1 != *(byte *)(param_1 + 0xe0)) {
    if (*(byte *)(param_1 + 0xe0) < bVar1) {
      sub_0804296C(param_1,0);
    }
    else {
      sub_080429D4(param_1,0);
    }
  }
  bVar1 = sub_08042CE8(param_1,1,iVar5);
  if (bVar1 != *(byte *)(param_1 + 0xe1)) {
    if (*(byte *)(param_1 + 0xe1) < bVar1) {
      sub_0804296C(param_1,1);
    }
    else {
      sub_080429D4(param_1,1);
    }
  }
  sub_08042C24(param_1,0,iVar5);
  sub_08042C24(param_1,1,iVar5);
  sub_080297C0(param_1);
  return in_lr;
}

