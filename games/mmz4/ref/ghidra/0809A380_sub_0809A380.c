// sub_0809A380 at 0x0809A380 (thumb)

undefined4 sub_0809A380(int param_1)

{
  char cVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  sub_0801CFF0();
  iVar5 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar5;
  iVar4 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar4;
  cVar1 = sub_08128A9C(*(undefined *)(param_1 + 0x11),3);
  if (cVar1 == '\x02') {
    sVar2 = sub_08007C7C(iVar5,iVar4);
    if (sVar2 == 0) {
LAB_0809a408:
      if ((*(uint *)(param_1 + 0x8c) & 4) == 0) {
        return in_lr;
      }
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
      sub_08099CF4(param_1);
      return in_lr;
    }
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    *(undefined *)(param_1 + 0x12) = 1;
  }
  else {
    uVar3 = sub_0801FB14(&DAT_0202e9f8,param_1 + 0x54);
    if (uVar3 < 0x1001) goto LAB_0809a408;
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    *(undefined *)(param_1 + 0x12) = 2;
  }
  sub_08099CF4(param_1);
  return in_lr;
}

