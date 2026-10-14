// sub_08058138 at 0x08058138 (thumb)

undefined4 sub_08058138(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if (*(int *)(param_1 + 0x50) < DAT_02021648 + 0x1800) {
    *(int *)(param_1 + 0x50) = DAT_02021648 + 0x1800;
  }
  cVar1 = sub_08009B9C(*(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54) * 0x10,
                       *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58) * 0x10);
  if (cVar1 != '\0') {
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) - *(int *)(param_1 + 0x54);
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) - *(int *)(param_1 + 0x58);
  }
  if (*(int *)(param_1 + 0x4c) < 0x68000) {
    uVar2 = 0x68000;
  }
  else {
    uVar2 = 0xff000;
    if (*(int *)(param_1 + 0x4c) < 0xff001) goto LAB_0805819e;
  }
  *(undefined4 *)(param_1 + 0x4c) = uVar2;
LAB_0805819e:
  cVar1 = sub_08009B9C(*(undefined4 *)(param_1 + 0x4c),*(int *)(param_1 + 0x50) + -0x1000);
  if (cVar1 == 'A') {
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 0x280;
  }
  return in_lr;
}

