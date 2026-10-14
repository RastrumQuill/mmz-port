// sub_080C4544 at 0x080C4544 (thumb)

undefined4 sub_080C4544(int param_1,undefined4 param_2)

{
  undefined uVar1;
  int iVar2;
  undefined4 in_lr;
  
  uVar1 = sub_080C4604(7);
  iVar2 = *(int *)(param_1 + 0x14);
  sub_080C46D0(iVar2 + 0x406,uVar1,2);
  *(undefined2 *)(iVar2 + 0x408) = 0x2207;
  uVar1 = sub_080C4604(4,param_2);
  sub_080C46D0(iVar2 + 0x40a,uVar1,2);
  return in_lr;
}

