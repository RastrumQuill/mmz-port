// sub_080D968C at 0x080D968C (thumb)

undefined4 sub_080D968C(int param_1)

{
  undefined uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0xb8);
  iVar4 = *(int *)(param_1 + 0xc0);
  iVar2 = sub_0803792C(*(undefined4 *)(param_1 + 0x28),1);
  if (iVar2 - (iVar4 + iVar3) < 1) {
    *(undefined *)(param_1 + 0xd) = 0;
    uVar1 = 0xff;
  }
  else {
    uVar1 = 1;
  }
  *(undefined *)(param_1 + 200) = uVar1;
  return in_lr;
}

