// sub_080CEC1C at 0x080CEC1C (thumb)

undefined4 sub_080CEC1C(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  sub_0801CC9C();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801CF00(param_1,0xc80a);
  sub_0801CFF0(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  if (*(char *)(param_1 + 0x11) == '\0') {
    iVar1 = *(int *)(param_1 + 0x54);
    iVar2 = -0x1600;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x54);
    iVar2 = 0x1600;
  }
  *(int *)(param_1 + 0x54) = iVar1 + iVar2;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 4);
  sub_080CEB00(param_1);
  return in_lr;
}

