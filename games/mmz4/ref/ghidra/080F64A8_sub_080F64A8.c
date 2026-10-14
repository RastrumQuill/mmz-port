// sub_080F64A8 at 0x080F64A8 (thumb)

undefined8 sub_080F64A8(int *param_1,byte param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  
  iVar2 = *param_1;
  iVar3 = param_1[1];
  uVar4 = 0;
  if (param_2 == 1) {
    for (uVar4 = 1; uVar4 < 0xff; uVar4 = uVar4 + 1 & 0xff) {
      iVar1 = sub_08007F8C(iVar2,iVar3 + 0x3000);
      if (iVar1 != 0) break;
      iVar3 = iVar3 + 0x1000;
    }
  }
  else if (param_2 < 2) {
    if (param_2 == 0) {
      for (; uVar4 < 0xff; uVar4 = uVar4 + 1 & 0xff) {
        iVar3 = iVar3 + -0x1000;
        iVar1 = sub_08007DB4(iVar2 + -0xf00,iVar3);
        if (iVar1 != 0) break;
      }
    }
  }
  else if (param_2 == 2) {
    for (uVar4 = 1; uVar4 < 0xff; uVar4 = uVar4 + 1 & 0xff) {
      iVar1 = sub_0800834C(iVar2 + 0x2000,iVar3 + 0x1000);
      if (iVar1 != 0) break;
      iVar2 = iVar2 + 0x1000;
    }
  }
  else if (param_2 == 3) {
    for (; uVar4 < 0xff; uVar4 = uVar4 + 1 & 0xff) {
      iVar2 = iVar2 + -0x1000;
      iVar1 = sub_0800816C(iVar2,iVar3 + 0x1000);
      if (iVar1 != 0) break;
    }
  }
  return CONCAT44(in_lr,uVar4 << 0xc);
}

