// sub_080D9654 at 0x080D9654 (thumb)

undefined4 sub_080D9654(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0xb8);
  iVar3 = *(int *)(param_1 + 0xc0);
  iVar1 = sub_0803792C(*(undefined4 *)(param_1 + 0x28),2);
  if (iVar1 - (iVar3 + iVar2) < 0) {
    *(undefined *)(param_1 + 200) = 0xff;
  }
  else {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 200) = 1;
  }
  return in_lr;
}

