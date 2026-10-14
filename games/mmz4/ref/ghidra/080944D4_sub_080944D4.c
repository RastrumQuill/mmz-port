// sub_080944D4 at 0x080944D4 (thumb)

undefined8 sub_080944D4(int param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x58) + -0x2000;
  iVar2 = *(int *)(param_1 + 0x54);
  iVar3 = iVar2 + -0x700;
  iVar6 = 0;
  do {
    uVar1 = sub_08007C7C(iVar3,iVar5);
    if (((uVar1 != 0) && ((uVar1 & 0x8000) == 0)) && ((uVar1 & 0xf) != 0xf)) goto LAB_0809454a;
    iVar3 = iVar3 + 0x1000;
    iVar6 = iVar6 + 1;
  } while (iVar6 < 1);
  uVar1 = sub_08007C7C(iVar2 + 0x700,iVar5);
  if (((uVar1 == 0) || ((uVar1 & 0x8000) != 0)) || ((uVar1 & 0xf) == 0xf)) {
    uVar4 = 0;
  }
  else {
LAB_0809454a:
    uVar4 = 1;
  }
  return CONCAT44(in_lr,uVar4);
}

