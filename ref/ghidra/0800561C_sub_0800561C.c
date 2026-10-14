// sub_0800561C at 0x0800561C (thumb)

undefined4 sub_0800561C(int param_1,int param_2)

{
  int *piVar1;
  undefined4 in_lr;
  
  piVar1 = *(int **)(param_1 + 0xc);
  *(int *)(param_1 + 8) = param_2;
  if (*(char *)(param_2 + 3) != '\0') {
    *(int *)(param_1 + 0x24) = *piVar1 + (int)*(short *)(param_2 + 8);
    *(int *)(param_1 + 0x28) = piVar1[1] + (int)*(short *)(param_2 + 10);
    *(undefined2 *)(param_1 + 0x2c) = *(undefined2 *)(param_2 + 0xc);
    *(undefined2 *)(param_1 + 0x2e) = *(undefined2 *)(param_2 + 0xe);
  }
  if (*(char *)(param_2 + 0x10) != '\0') {
    *(int *)(param_1 + 0x30) = *piVar1 + (int)*(short *)(param_2 + 0x14);
    *(int *)(param_1 + 0x34) = piVar1[1] + (int)*(short *)(param_2 + 0x16);
    *(undefined2 *)(param_1 + 0x38) = *(undefined2 *)(param_2 + 0x18);
    *(undefined2 *)(param_1 + 0x3a) = *(undefined2 *)(param_2 + 0x1a);
  }
  return in_lr;
}

