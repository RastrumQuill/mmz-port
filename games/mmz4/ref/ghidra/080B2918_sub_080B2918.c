// sub_080B2918 at 0x080B2918 (thumb)

undefined8 sub_080B2918(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined4 in_lr;
  int local_14 [2];
  
  local_14[0] = -0x10;
  local_14[1] = 0x10;
  puVar3 = (undefined *)(param_1 + 0xb7);
  *puVar3 = 0;
  if (*(char *)(param_1 + 0x11) == '\x01') {
    sVar1 = sub_08007C7C(*(int *)(param_1 + 0x54) +
                         *(int *)((int)local_14 +
                                 ((int)-(*(byte *)(param_1 + 10) & 0x10) >> 0x1f & 4U)) * 0x100,
                         *(int *)(param_1 + 0x58) + -0x1000);
    if (sVar1 != 0) {
      *puVar3 = 1;
      uVar2 = 1;
      goto LAB_080b29aa;
    }
  }
  else {
    sVar1 = sub_08007C7C(*(int *)(param_1 + 0x54) +
                         *(int *)((int)local_14 +
                                 ((int)-(*(byte *)(param_1 + 10) & 0x10) >> 0x1f & 4U)) * 0x100,
                         *(int *)(param_1 + 0x58) + -0x800);
    if (sVar1 != 0) {
      uVar2 = 1;
      *puVar3 = 1;
      goto LAB_080b29aa;
    }
  }
  uVar2 = 0;
LAB_080b29aa:
  return CONCAT44(in_lr,uVar2);
}

