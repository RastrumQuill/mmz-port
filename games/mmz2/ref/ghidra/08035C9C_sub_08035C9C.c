// sub_08035C9C at 0x08035C9C (thumb)

undefined8 sub_08035C9C(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  iVar1 = sub_08035BD8(param_2);
  if (((int)*(char *)(param_1 + 0x71) == *(char *)(iVar1 + 5) + -1) &&
     (*(char *)(param_1 + 0x72) < '\x02')) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return CONCAT44(in_lr,uVar2);
}

