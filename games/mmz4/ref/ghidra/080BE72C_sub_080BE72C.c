// sub_080BE72C at 0x080BE72C (thumb)

undefined4 sub_080BE72C(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 in_lr;
  bool bVar7;
  
  iVar1 = DAT_0202dbf0;
  iVar6 = *(int *)(param_1 + 0xb4);
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08002B10(0x173);
    sub_08005784(param_1 + 0x74,&DAT_08861930);
    *(undefined4 *)(param_1 + 100) = 0xff;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  iVar4 = *(int *)(param_1 + 100) + -1;
  *(int *)(param_1 + 100) = iVar4;
  iVar2 = DAT_0202dbf0;
  if ((((1 < *(byte *)(iVar6 + 0xc)) || (iVar4 < 1)) || ((*(uint *)(param_1 + 0x8c) & 0x800) == 0))
     || ((iVar1 == 0 || (bVar7 = (*(uint *)(iVar1 + 0x8c) & 1) != 0, bVar7)))) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 8);
    sub_080BE80C(param_1);
  }
  else {
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(DAT_0202dbf0 + 0x54);
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(iVar2 + 0x58);
    *(undefined *)(iVar1 + 0x171) = 1;
    *(bool *)(iVar1 + 0x172) = bVar7;
    uVar5 = *(uint *)(param_1 + 100);
    if ((int)uVar5 < 0x3c) {
      if ((int)uVar5 < 0x1e) {
        uVar3 = 2;
      }
      else {
        uVar3 = 3;
      }
      if ((uVar5 & uVar3) == 0) {
        return in_lr;
      }
    }
    *(undefined *)(iVar1 + 0x27a) = 1;
  }
  return in_lr;
}

