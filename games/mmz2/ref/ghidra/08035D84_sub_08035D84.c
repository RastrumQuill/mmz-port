// sub_08035D84 at 0x08035D84 (thumb)

undefined4 sub_08035D84(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  
  if (param_2 != param_3) {
    iVar1 = sub_08035CD8(param_2);
    iVar2 = sub_08035CD8(param_3);
    iVar3 = sub_08035D04(iVar2,param_3);
    if (iVar3 == 0) {
      uVar4 = (uint)*(char *)(param_1 + 0x71);
      iVar3 = (int)*(char *)(param_1 + 0x72);
      if ((iVar1 != iVar2) && ((iVar2 == 4 || (3 < uVar4)))) {
        uVar4 = 3;
        iVar3 = 1;
      }
      sub_0801EA38(param_1,param_2,uVar4,iVar3);
    }
    else if (iVar3 == 2) {
      sub_0801EA38(param_1,param_2,3,1);
    }
    else {
      sub_0801E9FC(param_1,param_2);
    }
  }
  return in_lr;
}

