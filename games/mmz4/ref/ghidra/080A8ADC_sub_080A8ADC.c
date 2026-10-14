// sub_080A8ADC at 0x080A8ADC (thumb)

undefined4 sub_080A8ADC(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x2c);
  iVar2 = *(int *)(param_1 + 0xc0);
  *(int *)(param_1 + 0x54) =
       *(int *)(iVar3 + 0x54) + (*(int *)(iVar2 + 0x54) - *(int *)(iVar3 + 0x54) >> 1);
  *(int *)(param_1 + 0x58) =
       *(int *)(iVar3 + 0x58) + (*(int *)(iVar2 + 0x58) - *(int *)(iVar3 + 0x58) >> 1);
  if (*(int *)(iVar3 + 0x54) < *(int *)(iVar2 + 0x54)) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    *(undefined *)(param_1 + 0x4c) = 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    *(undefined *)(param_1 + 0x4c) = 0;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  }
  iVar1 = *(int *)(iVar2 + 0x54) - *(int *)(iVar3 + 0x54);
  if (iVar1 < 0) {
    iVar1 = *(int *)(iVar3 + 0x54) - *(int *)(iVar2 + 0x54);
  }
  if (iVar1 < 0x801) {
    sub_0801CF00(param_1,0x8d07);
  }
  else {
    sub_0801CF00(param_1,0x8d06);
  }
  sub_0801CFF0(param_1);
  return in_lr;
}

