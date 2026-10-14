// sub_080EA8B8 at 0x080EA8B8 (thumb)

undefined4 sub_080EA8B8(int param_1,undefined4 param_2)

{
  undefined uVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  uVar1 = sub_080EA9C8(7);
  iVar3 = *(int *)(param_1 + 0x14);
  sub_080EAAB8(iVar3 + 0x406,uVar1,2);
  if ((DAT_0202ebb4 & 2) == 0) {
    uVar2 = 0x2076;
  }
  else {
    uVar2 = 0x2207;
  }
  *(undefined2 *)(iVar3 + 0x408) = uVar2;
  uVar1 = sub_080EA9C8(4,param_2);
  sub_080EAAB8(iVar3 + 0x40a,uVar1,2);
  return in_lr;
}

