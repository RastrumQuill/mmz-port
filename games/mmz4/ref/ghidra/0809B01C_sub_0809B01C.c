// sub_0809B01C at 0x0809B01C (thumb)

undefined4 sub_0809B01C(int param_1)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  undefined4 in_lr;
  bool bVar6;
  
  iVar1 = DAT_0202dbf0;
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08002B10(0x40);
    *(undefined *)(param_1 + 0xb7) = 2;
    sub_08005784(param_1 + 0x74,&DAT_0885db70);
    sub_0801CF00(param_1,0x5600);
    bVar3 = *(byte *)(DAT_0202dbf0 + 10) >> 4;
    uVar5 = bVar3 & 1;
    if ((bVar3 & 1) == 0) {
      bVar3 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar3 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar3;
    *(char *)(param_1 + 0x4c) = (char)uVar5;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar5 << 4);
    *(undefined4 *)(param_1 + 100) = 300;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  iVar4 = *(int *)(param_1 + 100) + -1;
  *(int *)(param_1 + 100) = iVar4;
  iVar2 = DAT_0202dbf0;
  if ((((*(uint *)(param_1 + 0x8c) & 0x800) == 0) || (iVar1 == 0)) ||
     (bVar6 = (*(uint *)(iVar1 + 0x8c) & 1) != 0, bVar6 || iVar4 < 1)) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    sub_0809B154(param_1);
    return in_lr;
  }
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(DAT_0202dbf0 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(iVar2 + 0x58);
  *(undefined *)(iVar1 + 0x171) = 1;
  *(bool *)(iVar1 + 0x172) = bVar6 || iVar4 < 1;
  uVar5 = *(uint *)(param_1 + 100);
  if ((int)uVar5 < 0x4b) {
    if ((uVar5 & 1) != 0) {
      bVar3 = *(byte *)(param_1 + 10) | 1;
      goto LAB_0809b14c;
    }
  }
  else if ((uVar5 & 3) != 0) {
    bVar3 = *(byte *)(param_1 + 10) | 1;
    goto LAB_0809b14c;
  }
  bVar3 = *(byte *)(param_1 + 10) & 0xfe;
LAB_0809b14c:
  *(byte *)(param_1 + 10) = bVar3;
  return in_lr;
}

