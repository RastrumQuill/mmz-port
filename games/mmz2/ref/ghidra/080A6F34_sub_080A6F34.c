// sub_080A6F34 at 0x080A6F34 (thumb)

undefined4 sub_080A6F34(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x28);
  iVar5 = *(int *)(param_1 + 0x2c);
  if (1 < *(byte *)(iVar5 + 0xc)) {
    uVar6 = 2;
    if (*(int *)(param_1 + 0xb8) < 0) {
      uVar6 = 3;
    }
    sub_080B919C(param_1 + 0x54,uVar6);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    *(undefined *)(param_1 + 0x4c) = 0;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined4 *)(param_1 + 100) = 0x1000;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  if ((*(byte *)(iVar2 + 0xb6) & 1) != 0) {
    *(byte *)(param_1 + 0xb6) = *(byte *)(param_1 + 0xb6) | 1;
    iVar3 = *(int *)(param_1 + 100) * 0xe0;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xff;
    }
    *(int *)(param_1 + 100) = iVar3 >> 8;
    if ((iVar3 >> 8) + 0x100U < 0x200) {
      *(undefined *)(param_1 + 0xd) = 3;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  iVar3 = *(int *)(iVar2 + 0x54) - *(int *)(param_1 + 0x54);
  piVar9 = (int *)(param_1 + 0xb8);
  iVar7 = *(int *)(iVar2 + 0xb8) - *piVar9;
  uVar4 = sub_080EEF7C(iVar3 * iVar3 + iVar7 * iVar7);
  uVar4 = uVar4 & 0xffff;
  iVar10 = *(int *)(param_1 + 100);
  if (iVar10 < (int)uVar4) {
    iVar3 = sub_080EF150(iVar3 * 0x100,uVar4);
    iVar7 = sub_080EF150(iVar7 * 0x100,uVar4);
    iVar8 = iVar10 * iVar3;
    if (iVar8 < 0) {
      iVar8 = iVar8 + 0xff;
    }
    *(int *)(param_1 + 0x54) = *(int *)(iVar2 + 0x54) - (iVar8 >> 8);
    iVar10 = iVar10 * iVar7;
    if (iVar10 < 0) {
      iVar10 = iVar10 + 0xff;
    }
    *piVar9 = *(int *)(iVar2 + 0xb8) - (iVar10 >> 8);
  }
  iVar2 = *piVar9;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 7;
  }
  *(int *)(param_1 + 0x58) = *(int *)(iVar5 + 0x58) - (iVar2 >> 3);
  iVar2 = sub_080EEF64((int)(short)-(short)iVar3,(int)(short)iVar7);
  if (*piVar9 < 1) {
    *(undefined *)(param_1 + 0x22) = 0;
    *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | 4;
    uVar6 = 1;
  }
  else {
    *(undefined *)(param_1 + 0x22) = 1;
    *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) | 0xc;
    uVar6 = 3;
  }
  iVar2 = sub_080EF150(((uint)(iVar2 << 0x10) >> 0x18) + 0x15 & 0xff,0x2b);
  sub_080127E4(param_1,*(undefined2 *)(&DAT_08345272 + iVar2 * 2));
  sub_080128D4(param_1);
  if ((*(char *)(param_1 + 0x11) != '\0') &&
     (bVar1 = *(char *)(param_1 + 0x12) + 1, *(byte *)(param_1 + 0x12) = bVar1, 6 < bVar1)) {
    sub_080B919C(param_1 + 0x54,uVar6);
    *(undefined *)(param_1 + 0x12) = 0;
  }
  return in_lr;
}

