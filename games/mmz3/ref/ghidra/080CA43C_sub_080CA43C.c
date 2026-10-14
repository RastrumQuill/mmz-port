// sub_080CA43C at 0x080CA43C (thumb)

undefined4 sub_080CA43C(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080175BC(param_1);
    if (*(short *)(param_1 + 0xa4) < 5) {
      sub_08017700(param_1,0x1103);
    }
    else {
      sub_08017700(param_1,0x1101);
    }
    *(undefined *)(param_1 + 0x12) = 0xff;
    *(undefined *)(param_1 + 0x13) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  bVar1 = *(char *)(param_1 + 0x13) + 1;
  *(byte *)(param_1 + 0x13) = bVar1;
  if ((bVar1 & 3) == 0) {
    uVar2 = DAT_0202f608 * 0x343fd + 0x269ec3;
    uVar7 = uVar2 & 0x7fffffff;
    DAT_0202f608 = uVar7;
    iVar3 = sub_080FE4D8(uVar2 * 2 >> 0x11,0x1800);
    uVar2 = uVar7 * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar2 & 0x7fffffff;
    sub_080B9378(*(int *)(param_1 + 0x54) + iVar3 + -0xe00,
                 *(int *)(param_1 + 0x58) + (uVar2 * 0x10 >> 0x14));
  }
  sub_080177F4(param_1);
  *(ushort *)(param_1 + 0x52) = (ushort)*(byte *)(param_1 + 0x12);
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -8;
  piVar6 = (int *)(param_1 + 0xb4);
  if (*piVar6 < DAT_0202e48c) {
    *piVar6 = DAT_0202e48c;
  }
  iVar3 = *(int *)(param_1 + 0x58);
  if (((*(uint *)(param_1 + 0x8c) & 4) == 0) || (iVar3 <= *(int *)(DAT_0202f5c0 + 0x58))) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0x800;
  }
  *(undefined4 *)(param_1 + 0x68) = uVar4;
  iVar5 = (*piVar6 + *(int *)(param_1 + 0x68)) - iVar3;
  if (iVar5 < 0) {
    iVar5 = iVar5 + 7;
  }
  *(int *)(param_1 + 0x58) = iVar3 + (iVar5 >> 3);
  if (*(byte *)(param_1 + 0x12) < 0xa0) {
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xf7;
  }
  if (*(byte *)(param_1 + 0x12) < 9) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(uint *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0836c2ec + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  return in_lr;
}

