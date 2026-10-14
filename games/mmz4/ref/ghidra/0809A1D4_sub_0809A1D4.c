// sub_0809A1D4 at 0x0809A1D4 (thumb)

undefined4 sub_0809A1D4(int param_1)

{
  short sVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  sub_0801CFF0();
  uVar2 = sub_081284E0((int)(short)*(undefined4 *)(param_1 + 0x5c),
                       (int)(short)*(undefined4 *)(param_1 + 0x60));
  *(char *)(param_1 + 0x24) = (char)((uVar2 & 0xffff) + 0x4000 >> 8);
  iVar5 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar5;
  iVar4 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar4;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
  if ((*(uint *)(param_1 + 0x8c) & 4) == 0) {
    sVar1 = sub_08007020(iVar5,iVar4);
    if (sVar1 != 0) {
      uVar3 = sub_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      *(undefined4 *)(param_1 + 0x58) = uVar3;
      *(undefined *)(param_1 + 0x12) = 1;
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
      sub_08099CF4(param_1);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_08099CF4(param_1);
  }
  return in_lr;
}

