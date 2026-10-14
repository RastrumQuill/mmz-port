// sub_0802B098 at 0x0802B098 (thumb)

undefined4 sub_0802B098(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x2b8) == '\0') {
    *(undefined *)(param_1 + 0x17c) = *(undefined *)(param_1 + 0x178);
    *(undefined *)(param_1 + 0x178) = 4;
    *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
    *(undefined *)(param_1 + 0x179) = 0;
    sub_08036B0C(param_1,0,0,0);
    sub_0802AC30(param_1);
  }
  else {
    iVar6 = *(int *)(param_1 + 0x2c4);
    iVar7 = *(int *)(param_1 + 0x2c8);
    bVar1 = *(byte *)(param_1 + 0x177);
    iVar2 = sub_08035F60(param_1,&DAT_08335d44 + (uint)bVar1 * 4);
    iVar3 = sub_08035F74(param_1,&DAT_08335d44 + (uint)bVar1 * 4);
    iVar6 = iVar6 - iVar2;
    iVar7 = iVar7 - iVar3;
    uVar4 = sub_080EEF7C(iVar6 * iVar6 + iVar7 * iVar7);
    uVar4 = uVar4 & 0xffff;
    if (uVar4 == 0) {
      iVar5 = 0;
      bVar8 = false;
    }
    else {
      iVar5 = uVar4 - 0x500;
      bVar8 = 0 < iVar5;
      if (!bVar8) {
        iVar5 = 0;
      }
      iVar6 = sub_080EF150(iVar6 * iVar5,uVar4);
      iVar7 = sub_080EF150(iVar7 * iVar5,uVar4);
      iVar2 = iVar2 + iVar6;
      iVar3 = iVar3 + iVar7;
    }
    iVar6 = sub_08036B0C(param_1,bVar8,iVar2 - *(int *)(param_1 + 0x2c4),
                         iVar3 - *(int *)(param_1 + 0x2c8));
    *(int *)(param_1 + 0x2c4) = iVar2;
    *(int *)(param_1 + 0x2c8) = iVar3;
    if ((iVar5 < 1) || (iVar6 == 0)) {
      *(undefined *)(param_1 + 0x17c) = *(undefined *)(param_1 + 0x178);
      *(undefined *)(param_1 + 0x178) = 4;
      *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
      *(undefined *)(param_1 + 0x179) = 0;
    }
  }
  return in_lr;
}

