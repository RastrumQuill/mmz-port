// sub_08034C88 at 0x08034C88 (thumb)

undefined4 sub_08034C88(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar1 = sub_08036C44(*(undefined *)(param_1 + 0x17f));
  if (iVar1 == 0) {
    iVar1 = 0;
    iVar2 = 1;
  }
  else {
    iVar1 = (int)*(char *)(param_1 + 0x71);
    iVar2 = (int)*(char *)(param_1 + 0x72);
  }
  sub_0801EA38(param_1,param_2,iVar1,iVar2);
  return in_lr;
}

