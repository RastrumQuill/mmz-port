// sub_08099D0C at 0x08099D0C (thumb)

undefined4 sub_08099D0C(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  sub_0801CE54();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801CF00(param_1,0x6102);
  sub_0801CFF0(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08005760(param_1 + 0x74,&DAT_0885d95c,param_1 + 0x54,6);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar1 = -*(int *)(&DAT_0885da7c + (uint)*(byte *)(param_1 + 0x11) * 4);
  }
  else {
    iVar1 = *(int *)(&DAT_0885da7c + (uint)*(byte *)(param_1 + 0x11) * 4);
  }
  *(int *)(param_1 + 0x5c) = iVar1;
  *(undefined4 *)(param_1 + 0x60) =
       *(undefined4 *)(&DAT_0885da88 + (uint)*(byte *)(param_1 + 0x11) * 4);
  *(undefined *)(param_1 + 0x12) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  return in_lr;
}

