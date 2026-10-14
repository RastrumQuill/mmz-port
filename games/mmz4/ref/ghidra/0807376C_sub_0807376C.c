// sub_0807376C at 0x0807376C (thumb)

undefined8 sub_0807376C(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x54);
  uVar2 = *(undefined4 *)(param_1 + 0x58);
  iVar5 = 0;
  iVar4 = iVar3 + -0xa00;
  do {
    sVar1 = sub_08007C7C(iVar4,uVar2);
    if (sVar1 != 0) goto LAB_080737c4;
    iVar4 = iVar4 + 0x1000;
    iVar5 = iVar5 + 1;
  } while (iVar5 < 2);
  sVar1 = sub_08007C7C(iVar3 + 0xa00,uVar2);
  if (sVar1 == 0) {
    uVar2 = 0;
  }
  else {
LAB_080737c4:
    uVar2 = 1;
  }
  return CONCAT44(in_lr,uVar2);
}

