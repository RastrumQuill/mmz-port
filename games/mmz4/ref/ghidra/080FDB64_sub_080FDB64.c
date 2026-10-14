// sub_080FDB64 at 0x080FDB64 (thumb)

undefined4 sub_080FDB64(int param_1)

{
  short sVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 in_lr;
  bool bVar5;
  bool bVar6;
  
  if (*(char *)(param_1 + 0x12) == '\0') {
    sub_080FDE88(param_1 + 0x54,1);
    uVar3 = *(undefined4 *)(param_1 + 0x54);
    iVar4 = *(int *)(param_1 + 0x58);
    sVar1 = sub_080146BC(uVar3,iVar4 + -0x1800);
    bVar5 = sVar1 != 0;
    uVar2 = (uint)bVar5;
    sVar1 = sub_080146BC(uVar3,iVar4 + 0x800);
    bVar6 = sVar1 != 0;
    if (bVar6) {
      uVar2 = uVar2 + 1;
    }
    if (uVar2 == 0) {
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    }
    else if ((int)(uVar2 - 1) <= (int)*(short *)(DAT_0202eda0 + 10)) {
      if (bVar5) {
        *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -0x1000;
        bVar5 = !bVar5;
      }
      else if (bVar6) {
        *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x1000;
        bVar6 = !bVar6;
      }
      sub_080FDE88(param_1 + 0x54,0);
      sub_08014720(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + -0x800);
      if (bVar5) {
        sub_080FDDB8(param_1,uVar3,iVar4 + -0x1800);
      }
      if (bVar6) {
        sub_080FDDB8(param_1,uVar3,iVar4 + 0x800);
      }
      sub_080FDA6C(param_1);
    }
  }
  else {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  }
  return in_lr;
}

