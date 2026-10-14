// sub_080173D0 at 0x080173D0 (thumb)

undefined8 sub_080173D0(int param_1,char param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  uVar2 = 0;
  if (*(short *)(param_1 + 8) == *(short *)(param_1 + 10)) {
    uVar2 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(param_1 + 0xc);
    sub_080070D0(param_1);
    iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 4);
    *(int *)(param_1 + 0xc) = iVar1;
    while (iVar1 != param_1 + 0x14) {
      if (*(char *)(iVar1 + 9) == param_2) {
        uVar2 = uVar2 + 1 & 0xffff;
      }
      iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 4);
      *(int *)(param_1 + 0xc) = iVar1;
    }
    *(undefined4 *)(param_1 + 0xc) = uVar3;
  }
  return CONCAT44(in_lr,uVar2);
}

