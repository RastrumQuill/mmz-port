// sub_0809E09C at 0x0809E09C (thumb)

undefined4 sub_0809E09C(int param_1)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 in_lr;
  bool bVar7;
  
  iVar1 = DAT_0202dbf0;
  iVar4 = *(int *)(param_1 + 0xb4);
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08002B10(0x40);
    sub_08005784(param_1 + 0x74,&DAT_0885e074);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    sub_0801CF00(param_1,0x5600);
    bVar3 = *(byte *)(DAT_0202dbf0 + 10) >> 4;
    uVar6 = bVar3 & 1;
    if ((bVar3 & 1) == 0) {
      bVar3 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar3 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar3;
    *(char *)(param_1 + 0x4c) = (char)uVar6;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar6 << 4);
    *(undefined4 *)(param_1 + 100) = 300;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  iVar5 = *(int *)(param_1 + 100) + -1;
  *(int *)(param_1 + 100) = iVar5;
  iVar2 = DAT_0202dbf0;
  if ((((1 < *(byte *)(iVar4 + 0xc)) || (iVar5 < 1)) || ((*(uint *)(param_1 + 0x8c) & 0x800) == 0))
     || ((iVar1 == 0 || (bVar7 = (*(uint *)(iVar1 + 0x8c) & 1) != 0, bVar7)))) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_0809E1EC(param_1);
    return in_lr;
  }
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(DAT_0202dbf0 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(iVar2 + 0x58);
  *(undefined *)(iVar1 + 0x171) = 1;
  *(bool *)(iVar1 + 0x172) = bVar7;
  uVar6 = *(uint *)(param_1 + 100);
  if ((int)uVar6 < 0x4b) {
    if ((uVar6 & 1) != 0) {
      bVar3 = *(byte *)(param_1 + 10) | 1;
      goto LAB_0809e1dc;
    }
  }
  else if ((uVar6 & 3) != 0) {
    bVar3 = *(byte *)(param_1 + 10) | 1;
    goto LAB_0809e1dc;
  }
  bVar3 = *(byte *)(param_1 + 10) & 0xfe;
LAB_0809e1dc:
  *(byte *)(param_1 + 10) = bVar3;
  return in_lr;
}

