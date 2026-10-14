// sub_081251E0 at 0x081251E0 (thumb)

undefined8 sub_081251E0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (((*(uint *)(param_1 + 0xdf0) & 3) == 1) && (*(int *)(param_1 + 0xde0) != 0)) {
    *(int *)(param_1 + 0xde0) = *(int *)(param_1 + 0xde0) + -1;
  }
  iVar3 = *(int *)(*(int *)(param_1 + 0xdcc) + 0x54);
  *(int *)(param_1 + 0xdc4) = iVar3;
  if (iVar3 < 0x16800) {
    iVar1 = 0x16800;
  }
  else {
    iVar1 = 0x7f800;
    if (iVar3 < 0x7f801) goto LAB_0812522e;
  }
  *(int *)(param_1 + 0xdc4) = iVar1;
LAB_0812522e:
  iVar3 = *(int *)(param_1 + 0xde0);
  if ((iVar3 == 0) || ((*(uint *)(param_1 + 0xdf0) & 2) != 0)) {
    *(char *)(param_1 + 0xde4) = *(char *)(param_1 + 0xde4) + '\x01';
    *(undefined *)(param_1 + 0xde5) = 0;
    iVar1 = FUN_081288bc(*(undefined4 *)(param_1 + 0xdd4),0x3c);
    iVar2 = sub_08128954(0xe10 - iVar3,0x3c);
    *(int *)(param_1 + 0xdd4) = iVar1 * 0x3c + iVar2;
    if (iVar3 == 0) {
      *(undefined2 *)(param_1 + 6) = 0;
      *(undefined4 *)(param_1 + 0xdd4) = 0xe10;
    }
  }
  return CONCAT44(in_lr,1);
}

