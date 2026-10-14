// sub_0809B088 at 0x0809B088 (thumb)

undefined4 sub_0809B088(int param_1)

{
  char cVar1;
  short sVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar3;
  sVar2 = sub_08008CFC(*(undefined4 *)(param_1 + 0x54),iVar3 + *(int *)(param_1 + 0x68));
  if ((((sVar2 == 0) || (sVar2 == -0x7ff1)) || (sVar2 == -0x7ff2)) &&
     (((*(uint *)(param_1 + 0x8c) & 4) == 0 &&
      (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 != -1)))) {
    sub_080128D4(param_1);
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 8);
    sub_0809AD78(param_1);
  }
  return in_lr;
}

