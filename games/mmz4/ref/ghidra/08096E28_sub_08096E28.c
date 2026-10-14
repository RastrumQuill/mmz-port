// sub_08096E28 at 0x08096E28 (thumb)

undefined4 sub_08096E28(int param_1)

{
  ushort uVar1;
  byte bVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  
  iVar7 = *(int *)(param_1 + 0x28);
  if (1 < *(byte *)(iVar7 + 0xc)) {
    if (*(char *)(iVar7 + 0xbf) != '\0') {
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
      sub_08096FD4(param_1);
      return in_lr;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
    return in_lr;
  }
  if (*(int *)(iVar7 + 0xc0) == 0) {
    sub_08005784(param_1 + 0x74,&DAT_0885d490);
  }
  else {
    sub_08005784(param_1 + 0x74,&DAT_0885d4a8);
  }
  if (*(char *)(iVar7 + 0xbd) == -0x40) {
LAB_08096fa0:
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    return in_lr;
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(char *)(param_1 + 0x24) = *(char *)(iVar7 + 0xbd);
  bVar2 = *(byte *)(iVar7 + 10) >> 4;
  uVar4 = bVar2 & 1;
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
  uVar1 = CONCAT11(*(undefined *)(iVar7 + 0x1e),*(undefined *)(iVar7 + 0x70));
  if (uVar1 != 0x5002) {
    if (0x5002 < uVar1) {
      if (uVar1 == 0x5003) {
        iVar5 = (int)*(char *)(iVar7 + 0x71);
      }
      else {
        if (uVar1 != 0x5004) goto LAB_08096fa0;
        iVar5 = 7 - *(char *)(iVar7 + 0x71);
      }
      iVar6 = (int)*(short *)(&DAT_0885d440 + iVar5 * 4);
      iVar5 = *(short *)(&DAT_0885d442 + iVar5 * 4) + -0xd00;
      goto LAB_08096faa;
    }
    if (uVar1 != 0x5000) goto LAB_08096fa0;
  }
  iVar6 = 0;
  iVar5 = -0xd00;
LAB_08096faa:
  uVar3 = *(undefined4 *)(iVar7 + 0x58);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar7 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = uVar3;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar6 = *(int *)(param_1 + 0x54) + iVar6;
  }
  else {
    iVar6 = *(int *)(param_1 + 0x54) - iVar6;
  }
  *(int *)(param_1 + 0x54) = iVar6;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar5;
  return in_lr;
}

