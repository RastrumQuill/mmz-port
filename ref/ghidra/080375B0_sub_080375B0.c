// sub_080375B0 at 0x080375B0 (thumb)

undefined4 sub_080375B0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = DAT_02022c80 - (*(int *)(param_1 + 0x50) + 0x5000);
  iVar1 = *(int *)(DAT_0202286c + 0x4c) - *(int *)(param_1 + 0x4c);
  if (iVar1 < 0) {
    iVar1 = *(int *)(param_1 + 0x4c) - *(int *)(DAT_0202286c + 0x4c);
  }
  if ((iVar1 < 0x3000) && (iVar2 < -0x3000)) {
    *(undefined *)(param_1 + 0xf) = 3;
    sub_08038A5C(param_1,10);
    *(undefined *)(param_1 + 0x12) = 0;
  }
  else if (-0x2000 < iVar2) {
    *(undefined2 *)(param_1 + 0xe) = 5;
    *(undefined4 *)(param_1 + 0x24) = 0;
    sub_08037678(param_1);
  }
  return in_lr;
}

