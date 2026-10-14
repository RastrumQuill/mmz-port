// sub_080C5770 at 0x080C5770 (thumb)

undefined4 sub_080C5770(int param_1)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  bool bVar5;
  
  iVar1 = DAT_0202dbf0;
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08002B10(0x40);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    sub_08005784(param_1 + 0x74,&DAT_0886239c);
    sub_0801CF00(param_1,0x5600);
    *(undefined4 *)(param_1 + 100) = 300;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  iVar3 = *(int *)(param_1 + 100) + -1;
  *(int *)(param_1 + 100) = iVar3;
  if ((((*(uint *)(param_1 + 0x8c) & 0x800) == 0) || (iVar1 == 0)) ||
     (bVar5 = (*(uint *)(iVar1 + 0x8c) & 1) != 0, bVar5 || iVar3 == 0)) {
    sub_08002B10(0x3f);
    sub_080C5BD4(param_1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(uint *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 0xc)
    ;
    return in_lr;
  }
  *(undefined *)(iVar1 + 0x171) = 1;
  *(bool *)(iVar1 + 0x172) = bVar5 || iVar3 == 0;
  uVar4 = *(uint *)(param_1 + 100);
  if ((int)uVar4 < 0x4b) {
    if ((uVar4 & 1) != 0) {
      bVar2 = *(byte *)(param_1 + 10) | 1;
      goto LAB_080c5874;
    }
  }
  else if ((uVar4 & 3) != 0) {
    bVar2 = *(byte *)(param_1 + 10) | 1;
    goto LAB_080c5874;
  }
  bVar2 = *(byte *)(param_1 + 10) & 0xfe;
LAB_080c5874:
  *(byte *)(param_1 + 10) = bVar2;
  iVar1 = DAT_0202dbf0;
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(DAT_0202dbf0 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(iVar1 + 0x58);
  return in_lr;
}

