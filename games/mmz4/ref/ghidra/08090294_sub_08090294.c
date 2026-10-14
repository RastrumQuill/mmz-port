// sub_08090294 at 0x08090294 (thumb)

undefined4 sub_08090294(int param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 in_lr;
  
  iVar8 = *(int *)(param_1 + 0x28);
  iVar9 = *(int *)(iVar8 + 0x28);
  bVar2 = *(byte *)(iVar8 + 10) >> 4;
  uVar4 = bVar2 & 1;
  bVar1 = *(byte *)(param_1 + 0x11);
  if (*(byte *)(iVar8 + 0xc) < 2) {
    if (*(char *)(param_1 + 0xd) == '\0') {
      if (*(char *)(iVar8 + 0xd) == '\0') {
        uVar5 = *(undefined4 *)(iVar8 + 0x58);
        *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar8 + 0x54);
        *(undefined4 *)(param_1 + 0x58) = uVar5;
        return in_lr;
      }
      sub_08005784(param_1 + 0x74,&DAT_0885cb50);
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
    else {
      if (*(char *)(iVar8 + 0xd) != '\0') {
        if ((bVar2 & 1) == 0) {
          bVar2 = *(byte *)(param_1 + 10) & 0xef;
        }
        else {
          bVar2 = *(byte *)(param_1 + 10) | 0x10;
        }
        *(byte *)(param_1 + 10) = bVar2;
        *(char *)(param_1 + 0x4c) = (char)uVar4;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar4 << 4);
        sub_0801CFF0(param_1);
        if ((*(byte *)(iVar9 + 10) & 0x10) == 0) {
          iVar6 = *(int *)(iVar9 + 0x54) + -0x400;
        }
        else {
          iVar6 = *(int *)(iVar9 + 0x54) + 0x400;
        }
        iVar7 = bVar1 + 1;
        iVar3 = iVar7 * (*(int *)(iVar8 + 0x54) - iVar6);
        if (iVar3 < 0) {
          iVar3 = iVar3 + 3;
        }
        *(int *)(param_1 + 0x54) = iVar6 + (iVar3 >> 2);
        iVar9 = *(int *)(iVar9 + 0x58) + -0x200;
        iVar7 = iVar7 * (*(int *)(iVar8 + 0x58) - iVar9);
        if (iVar7 < 0) {
          iVar7 = iVar7 + 3;
        }
        *(int *)(param_1 + 0x58) = iVar9 + (iVar7 >> 2);
        return in_lr;
      }
      sub_08005784(param_1 + 0x74,&DAT_0885cb38);
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
      *(undefined *)(param_1 + 0xd) = 0;
    }
    sub_08090294(param_1);
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  return in_lr;
}

