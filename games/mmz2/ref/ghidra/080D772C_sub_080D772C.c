// sub_080D772C at 0x080D772C (thumb)

undefined4 sub_080D772C(int param_1)

{
  undefined uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 in_lr;
  
  uVar8 = *(undefined4 *)(param_1 + 0x28);
  iVar4 = *(int *)(param_1 + 0xb4);
  iVar5 = *(int *)(param_1 + 0xb8);
  iVar6 = *(int *)(param_1 + 0xbc);
  iVar7 = *(int *)(param_1 + 0xc0);
  iVar2 = sub_080378D8(uVar8,2);
  iVar3 = sub_0803792C(uVar8,2);
  if (iVar3 - (iVar7 + iVar5) < 0) {
    uVar1 = sub_08038E6C(iVar2 - (iVar6 + iVar4));
    *(undefined *)(param_1 + 0xcb) = uVar1;
  }
  else {
    *(undefined *)(param_1 + 0xd) = 3;
    sub_080D7778(param_1);
  }
  return in_lr;
}

