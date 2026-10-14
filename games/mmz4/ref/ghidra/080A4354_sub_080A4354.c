// sub_080A4354 at 0x080A4354 (thumb)

undefined4 sub_080A4354(int param_1)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  undefined4 in_lr;
  
  puVar4 = (uint *)(param_1 + 0x8c);
  if (((((*puVar4 & 0x200) == 0) &&
       (iVar2 = *(int *)(param_1 + 0xb4) + -1, *(int *)(param_1 + 0xb4) = iVar2, iVar2 != 0)) &&
      (sVar1 = sub_08007C7C(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58)),
      sVar1 == 0)) && ((*puVar4 & 4) == 0)) {
    sub_0801CFF0(param_1);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    uVar3 = sub_0801FB14(&DAT_0202e9f8,param_1 + 0x54);
    if (0x2000 < uVar3) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *puVar4 = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_080A440C(param_1);
  }
  return in_lr;
}

