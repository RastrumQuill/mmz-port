// sub_080AE4F0 at 0x080AE4F0 (thumb)

undefined4 sub_080AE4F0(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 in_lr;
  
  *(undefined *)(*(int *)(param_1 + 0x28) + 0xd7) = 1;
  if ((*(uint *)(param_1 + 0x8c) & 0x200) == 0) {
    if (*(char *)(param_1 + 0x12) == '\0') {
      iVar2 = sub_0801FB14(&DAT_0202e9f8,param_1 + 0x54);
      if ((iVar2 != 0) ||
         (sVar1 = sub_08007020(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58)),
         sVar1 != 0)) goto LAB_080ae52e;
    }
    else {
      *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
    }
    sub_0801CFF0(param_1);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  }
  else {
LAB_080ae52e:
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_080AE570(param_1);
  }
  return in_lr;
}

