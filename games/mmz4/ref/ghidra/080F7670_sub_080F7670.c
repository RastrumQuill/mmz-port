// sub_080F7670 at 0x080F7670 (thumb)

undefined4 sub_080F7670(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  default:
    goto switchD_080f7682_caseD_0;
  case 1:
    iVar1 = *(int *)(param_1 + 0x60) + 0x100;
    break;
  case 2:
    iVar1 = 0x300;
    break;
  case 3:
    iVar1 = *(int *)(param_1 + 0x60) + -0x100;
    break;
  case 4:
    iVar1 = -0x1000;
  }
  *(int *)(param_1 + 0x60) = iVar1;
switchD_080f7682_caseD_0:
  *(int *)(param_1 + 0x54) = DAT_0202ea30 + *(int *)(param_1 + 0x5c) + -0x7800;
  *(int *)(param_1 + 0x58) = DAT_0202ea34 + *(int *)(param_1 + 0x60) + -0x5000;
  sub_0801CFF0(param_1);
  return in_lr;
}

