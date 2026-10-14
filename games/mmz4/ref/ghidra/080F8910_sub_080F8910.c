// sub_080F8910 at 0x080F8910 (thumb)

undefined8 sub_080F8910(int *param_1)

{
  undefined uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 in_lr;
  
  uVar5 = 0;
  uVar1 = sub_080F811C();
  bVar2 = sub_08128A24(uVar1,3);
  if (bVar2 == 1) {
    param_1[1] = param_1[1] + 0x1000;
  }
  else if (bVar2 < 2) {
    if (bVar2 != 0) goto LAB_080f897c;
    param_1[1] = param_1[1] + -0x1000;
  }
  else {
    if (bVar2 == 2) {
      iVar3 = *param_1;
      iVar4 = -0x1000;
    }
    else {
      if (bVar2 != 3) goto LAB_080f897c;
      iVar3 = *param_1;
      iVar4 = 0x1000;
    }
    *param_1 = iVar3 + iVar4;
  }
  uVar5 = sub_080F811C(param_1);
  uVar5 = uVar5 & 0xff;
LAB_080f897c:
  return CONCAT44(in_lr,uVar5);
}

