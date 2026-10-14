// sub_08038668 at 0x08038668 (thumb)

undefined8
sub_08038668(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,uint param_5)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(int *)(param_1 + 0x28c) != 0) {
    sub_080EF124(*(int *)(param_1 + 0x28c),param_1,param_2,param_3,param_4,param_5);
  }
  iVar3 = 4;
  piVar2 = (int *)(param_1 + 0x2a0);
  do {
    piVar2 = piVar2 + -1;
    iVar3 = iVar3 + -1;
    if (*piVar2 != 0) {
      sub_080EF124(*piVar2,param_1,param_2,param_3,param_4,param_5);
    }
  } while (iVar3 != 0);
  if (((*(char *)(param_1 + 0x212) == '\0') || (*(char *)(param_1 + 0x213) == '\0')) &&
     (*(byte *)(param_1 + 0x1fc) == param_5)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return CONCAT44(in_lr,uVar1);
}

