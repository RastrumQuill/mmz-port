// sub_080EA974 at 0x080EA974 (thumb)

undefined4 sub_080EA974(int param_1,undefined4 param_2)

{
  undefined uVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x14);
  if ((DAT_0202ebb4 & 2) == 0) {
    uVar2 = 0x2074;
  }
  else {
    uVar2 = 0x2201;
  }
  *(undefined2 *)(iVar3 + 0x406) = uVar2;
  *(undefined2 *)(iVar3 + 0x408) = uVar2;
  uVar1 = sub_080EA9C8(7,param_2);
  sub_080EAAB8(iVar3 + 0x40a,uVar1,2);
  return in_lr;
}

