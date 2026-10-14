// sub_0801C720 at 0x0801C720 (thumb)

undefined8 sub_0801C720(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0xc);
  if (*(char *)(iVar2 + 1) == '\0') {
    if (*(int *)(param_1 + 0x144) != 0) {
      *(int *)(param_1 + 0xc) = iVar2 + -8;
      uVar1 = 1;
      goto LAB_0801c74e;
    }
  }
  else {
    *(uint *)(param_1 + 0x144) = (uint)*(byte *)(iVar2 + 1);
  }
  uVar1 = 0;
LAB_0801c74e:
  return CONCAT44(in_lr,uVar1);
}

