// sub_08005534 at 0x08005534 (thumb)

undefined8 sub_08005534(int **param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 in_lr;
  
  iVar1 = DAT_02000024;
  piVar2 = *(int **)(DAT_02000024 + 0x10);
  if (piVar2 != (int *)0x0) {
    *(int *)(DAT_02000024 + 0x10) = *piVar2;
    *(short *)(iVar1 + 10) = *(short *)(iVar1 + 10) + -1;
    *piVar2 = (int)*param_1;
    piVar2[1] = (int)param_1;
    (*param_1)[1] = (int)piVar2;
    *param_1 = piVar2;
    *(undefined2 *)((int)piVar2 + 10) = 0;
    piVar2[3] = 0;
    piVar2[4] = 0;
  }
  return CONCAT44(in_lr,piVar2);
}

