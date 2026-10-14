// sub_080B8490 at 0x080B8490 (thumb)

undefined4 sub_080B8490(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0xc0);
  iVar3 = *(int *)(param_1 + 200);
  iVar1 = sub_08019068(*(undefined4 *)(param_1 + 0x20),2);
  if (iVar1 - (iVar3 + iVar2) < 0) {
    *(undefined *)(param_1 + 0xd0) = 0xff;
  }
  else {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xd0) = 1;
  }
  return in_lr;
}

