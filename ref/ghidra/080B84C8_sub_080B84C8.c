// sub_080B84C8 at 0x080B84C8 (thumb)

undefined4 sub_080B84C8(int param_1)

{
  undefined uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0xc0);
  iVar4 = *(int *)(param_1 + 200);
  iVar2 = sub_08019068(*(undefined4 *)(param_1 + 0x20),1);
  if (iVar2 - (iVar4 + iVar3) < 1) {
    *(undefined *)(param_1 + 0xd) = 0;
    uVar1 = 0xff;
  }
  else {
    uVar1 = 1;
  }
  *(undefined *)(param_1 + 0xd0) = uVar1;
  return in_lr;
}

