// sub_080C45CC at 0x080C45CC (thumb)

undefined4 sub_080C45CC(int param_1)

{
  undefined uVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x14);
  *(undefined2 *)(iVar2 + 0x406) = 0x2201;
  *(undefined2 *)(iVar2 + 0x408) = 0x2201;
  uVar1 = sub_080C4604(7);
  sub_080C46D0(iVar2 + 0x40a,uVar1,2);
  return in_lr;
}

