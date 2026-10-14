// sub_0803538C at 0x0803538C (thumb)

undefined4 sub_0803538C(int param_1)

{
  char cVar1;
  int iVar2;
  uint *puVar3;
  char *pcVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  
  iVar7 = *(int *)(param_1 + 0x28);
  if (*(short *)(iVar7 + 4) != 2) {
    iVar6 = *(int *)(param_1 + 0x54) + *(int *)(iVar7 + 0x34);
    *(int *)(param_1 + 0x54) = iVar6;
    iVar2 = *(int *)(param_1 + 0x27c) + *(int *)(iVar7 + 0x30);
    if (iVar6 != iVar2) {
      iVar6 = iVar6 + ((iVar2 - (iVar6 + -0x800)) * 0xc >> 8);
      *(int *)(param_1 + 0x54) = iVar6;
      iVar7 = *(int *)(param_1 + 0x27c) + *(int *)(iVar7 + 0x30);
      if (iVar7 <= iVar6) {
        *(int *)(param_1 + 0x54) = iVar7;
      }
    }
  }
  iVar7 = *(int *)(param_1 + 0x28);
  if (*(int *)(param_1 + 0x54) < *(int *)(param_1 + 0x27c) + *(int *)(iVar7 + 0x30) + -0x6400)
  goto LAB_08035516;
  if (*(short *)(iVar7 + 4) == 2) {
    if (*(char *)(iVar7 + 0xc) == '\0') {
      sub_080FE2C0(param_1,*(undefined4 *)(&DAT_0835b298 + (uint)*(byte *)(param_1 + 0xd) * 4));
      sub_080FE2C0(param_1,*(undefined4 *)(&DAT_0835b2ac + (uint)*(byte *)(param_1 + 0xd) * 4));
    }
  }
  else {
    sub_080FE2C0(param_1,*(undefined4 *)(&DAT_0835b298 + (uint)*(byte *)(param_1 + 0xd) * 4));
    sub_080FE2C0(param_1,*(undefined4 *)(&DAT_0835b2ac + (uint)*(byte *)(param_1 + 0xd) * 4));
    sub_080358F8(param_1);
  }
  puVar3 = (uint *)(param_1 + 0x8c);
  if (((*puVar3 & 4) != 0) && (iVar7 = *(int *)(param_1 + 0x28), *(short *)(iVar7 + 4) != 2)) {
    *(short *)(iVar7 + 0x38) = *(short *)(iVar7 + 0x38) + 1;
    sub_0800471C(0x137);
  }
  if ((*puVar3 & 1) == 0) {
LAB_080354b0:
    if (*(char *)(*(int *)(param_1 + 0x28) + 0xc) == '\0') {
LAB_080354b8:
      pcVar4 = (char *)(param_1 + 0x287);
      if (*pcVar4 != '\0') {
        *pcVar4 = *pcVar4 + -1;
      }
      if (*pcVar4 == '\x01') {
        *puVar3 = 0;
        *(undefined4 *)(param_1 + 0x90) = 0;
        *(undefined *)(param_1 + 0x94) = 0;
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      }
    }
  }
  else {
    cVar1 = *(char *)(*(int *)(param_1 + 0x28) + 0xc);
    if (cVar1 == '\0') goto LAB_080354b8;
    *(char *)(*(int *)(param_1 + 0x28) + 0xc) = cVar1 + -1;
    sub_0800471C(0xf8);
    sub_0800471C(4);
    *(undefined *)(param_1 + 0x287) = 0x5a;
    if (*(char *)(*(int *)(param_1 + 0x28) + 0xc) == '\0') {
      *(undefined *)(param_1 + 0xd) = 4;
      *(undefined *)(param_1 + 0xe) = 0;
      goto LAB_080354b0;
    }
  }
  piVar5 = (int *)(param_1 + 0x280);
  *(undefined4 *)(*piVar5 + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(*piVar5 + 0x58) = *(undefined4 *)(param_1 + 0x58);
  if (*(int *)(*piVar5 + 0x2c) != 0) {
    *(undefined4 *)(*(int *)(*piVar5 + 0x2c) + 0x54) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(*(int *)(*piVar5 + 0x2c) + 0x58) = *(undefined4 *)(param_1 + 0x58);
  }
  if (*(int *)(param_1 + 0x58) + -0x6400 < 0x14001) {
    return in_lr;
  }
LAB_08035516:
  sub_0800471C(0xf8);
  sub_0800471C(4);
  *(undefined *)(*(int *)(param_1 + 0x28) + 0xc) = 0;
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0835ab9c + (uint)*(byte *)(param_1 + 9) * 4) + 8);
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined *)(param_1 + 0xe) = 0;
  *(undefined *)(param_1 + 0xf) = 0;
  return in_lr;
}

