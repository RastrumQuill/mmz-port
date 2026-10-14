// sub_080B68F4 at 0x080B68F4 (thumb)

undefined4 sub_080B68F4(int param_1)

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
  
  uVar8 = *(undefined4 *)(param_1 + 0x20);
  iVar4 = *(int *)(param_1 + 0xbc);
  iVar5 = *(int *)(param_1 + 0xc0);
  iVar6 = *(int *)(param_1 + 0xc4);
  iVar7 = *(int *)(param_1 + 200);
  iVar2 = sub_0801901C(uVar8,1);
  iVar3 = sub_08019068(uVar8,1);
  if (iVar3 - (iVar7 + iVar5) < 1) {
    *(undefined *)(param_1 + 0xd) = 1;
    sub_080B68AC(param_1);
  }
  else {
    uVar1 = sub_08025930(iVar2 - (iVar6 + iVar4));
    *(undefined *)(param_1 + 0xd3) = uVar1;
  }
  return in_lr;
}

