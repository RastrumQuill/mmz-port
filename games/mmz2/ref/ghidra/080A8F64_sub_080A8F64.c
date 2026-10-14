// sub_080A8F64 at 0x080A8F64 (thumb)

undefined4 sub_080A8F64(int param_1)

{
  byte bVar1;
  uint uVar2;
  ushort *puVar3;
  int iVar4;
  byte *pbVar5;
  int *piVar6;
  char *pcVar7;
  undefined4 in_lr;
  
  if (((DAT_0202ec38 & 1) == 0) || (uVar2 = (uint)DAT_0202ec42, (DAT_0202ec42 & 1) != 0))
  goto LAB_080a90c0;
  piVar6 = (int *)(param_1 + 0xb8);
  pbVar5 = (byte *)(param_1 + 0xb4);
  if (*(int *)(*piVar6 + 0x54) != *(int *)(param_1 + 0x54) + (uint)*pbVar5 * -0x100) {
    *(uint *)(param_1 + 0x54) = *(int *)(*piVar6 + 0x54) + (uint)*pbVar5 * -0x100;
  }
  if (*(int *)(*piVar6 + 0x58) != *(int *)(param_1 + 0x58)) {
    *(int *)(param_1 + 0x58) = *(int *)(*piVar6 + 0x58);
    *(uint *)(param_1 + 0x60) = uVar2 & 1;
  }
  pcVar7 = (char *)(param_1 + 0xb5);
  if (*pcVar7 == '\0') {
    sub_0802311C(*piVar6,0,*(byte *)(param_1 + 0x10) ^ 1,0);
    *pcVar7 = *pcVar7 + '\x01';
  }
  else if ((*(uint *)(*piVar6 + 0x8c) & 1) != 0) goto LAB_080a90c0;
  sub_080128D4(param_1);
  puVar3 = (ushort *)(param_1 + 0xb6);
  if (*puVar3 == 0) goto LAB_080a90c0;
  *puVar3 = *puVar3 - 1;
  bVar1 = *(char *)(param_1 + 0x12) + 1;
  *(byte *)(param_1 + 0x12) = bVar1;
  if (*puVar3 < 0x4b) {
    if ((bVar1 & 1) == 0) goto LAB_080a904c;
    bVar1 = *(byte *)(param_1 + 10) | 1;
  }
  else if (*puVar3 < 0x96) {
    if ((bVar1 & 3) == 0) {
LAB_080a904c:
      bVar1 = *(byte *)(param_1 + 10) & 0xfe;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 1;
    }
  }
  else {
    if ((bVar1 & 7) == 0) goto LAB_080a904c;
    bVar1 = *(byte *)(param_1 + 10) | 1;
  }
  *(byte *)(param_1 + 10) = bVar1;
  iVar4 = sub_08009864(*(int *)(param_1 + 0x54) + -0x800,*(int *)(param_1 + 0x58) + 0x800);
  if (iVar4 == 0) {
    iVar4 = sub_08009864(*(int *)(param_1 + 0x54) + 0x7ff,*(int *)(param_1 + 0x58) + 0x800);
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar4;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  iVar4 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar4;
  if (0x700 < iVar4) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  iVar4 = sub_0801EE9C(*piVar6,8,8,8,8,0);
  if (iVar4 != 0) {
    if ((int)((uint)*puVar3 - iVar4) < 1) {
LAB_080a90c0:
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 8)
      ;
      sub_080A912C(param_1);
      return in_lr;
    }
    *puVar3 = (ushort)((uint)*puVar3 - iVar4);
    *(uint *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) - ((uint)*pbVar5 * 0x200 + -0x100);
    *pbVar5 = *pbVar5 ^ 1;
  }
  *(uint *)(*piVar6 + 0x54) = *(int *)(param_1 + 0x54) + (uint)*pbVar5 * -0x100;
  *(undefined4 *)(*piVar6 + 0x58) = *(undefined4 *)(param_1 + 0x58);
  return in_lr;
}

