// sub_080B2E3C at 0x080B2E3C (thumb)

undefined4 sub_080B2E3C(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  int iVar7;
  undefined4 in_lr;
  
  iVar7 = *(int *)(param_1 + 0x28);
  if ((((*(uint *)(iVar7 + 0x8c) & 0x200) != 0) || (*(short *)(iVar7 + 0xa4) == 0)) ||
     (2 < *(byte *)(iVar7 + 0xc))) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 8);
    sub_080B2FF0(param_1);
    return in_lr;
  }
  bVar1 = sub_08034598(iVar7,*(undefined *)(param_1 + 0x10));
  pbVar5 = (byte *)(param_1 + 0x78);
  *pbVar5 = bVar1;
  if (9 < *(byte *)(iVar7 + 0xd)) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    return in_lr;
  }
  bVar1 = *(byte *)(param_1 + 10);
  *(byte *)(param_1 + 10) = bVar1 | 1;
  if (*pbVar5 == 0) {
    *(byte *)(param_1 + 10) = bVar1 & 0xfe;
    *(undefined *)(param_1 + 0xd) = 0;
  }
  else {
    if (*(char *)(param_1 + 0xd) == '\0') {
      *(byte *)(param_1 + 10) = bVar1 | 1;
      sub_08017700(param_1,*(undefined2 *)(&DAT_0836a280 + (uint)*(byte *)(param_1 + 0x10) * 2));
      *(undefined4 *)(param_1 + 0x74) = 0;
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
    if ((*(byte *)(iVar7 + 10) & 0x10) == 0) {
      iVar2 = *(int *)(iVar7 + 0x54) +
              (int)*(short *)(&DAT_0836a284 + (uint)*(byte *)(iVar7 + 0x147) * 2);
    }
    else {
      iVar2 = *(int *)(iVar7 + 0x54) -
              (int)*(short *)(&DAT_0836a284 + (uint)*(byte *)(iVar7 + 0x147) * 2);
    }
    *(int *)(param_1 + 0x54) = iVar2;
    *(int *)(param_1 + 0x58) =
         *(int *)(iVar7 + 0x58) +
         (int)*(short *)(&DAT_0836a290 + (uint)*(byte *)(iVar7 + 0x147) * 2);
    if (*pbVar5 == 2) {
      sub_08017BCC(param_1,0xf);
    }
    else {
      sub_08017BCC(param_1,0xe);
    }
    if (*(int *)(param_1 + 0x74) != 0) {
      *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + -1;
    }
    sub_080177F4(param_1);
  }
  if (*(char *)(param_1 + 0x10) != '\x01') {
    return in_lr;
  }
  iVar2 = *(int *)(param_1 + 0x2c);
  uVar3 = (uint)*(byte *)(iVar2 + 0x78);
  uVar6 = (uint)*pbVar5;
  if (uVar3 + uVar6 == 0) {
    return in_lr;
  }
  if (uVar3 == uVar6) {
    iVar4 = *(int *)(iVar2 + 0x74);
    if (iVar4 <= *(int *)(param_1 + 0x74)) {
      *(int *)(iVar2 + 0x74) = *(int *)(param_1 + 0x74);
      bVar1 = *pbVar5;
      goto LAB_080b2fb6;
    }
  }
  else {
    if (uVar3 <= uVar6) {
      *(undefined4 *)(iVar2 + 0x74) = *(undefined4 *)(param_1 + 0x74);
      bVar1 = *pbVar5;
      goto LAB_080b2fb6;
    }
    iVar4 = *(int *)(iVar2 + 0x74);
  }
  *(int *)(param_1 + 0x74) = iVar4;
  bVar1 = *(byte *)(iVar2 + 0x78);
LAB_080b2fb6:
  if (((*(ushort *)(iVar7 + 0x216) & 0x8000) == 0) && (*(int *)(param_1 + 0x74) == 0)) {
    *(undefined4 *)(param_1 + 0x74) = 0x18;
    *(undefined4 *)(iVar2 + 0x74) = 0x18;
    if (bVar1 == 2) {
      sub_0800471C();
    }
    else {
      sub_0800471C(0x17);
    }
  }
  return in_lr;
}

