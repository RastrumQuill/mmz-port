// sub_080070C8 at 0x080070C8 (thumb)

undefined4 sub_080070C8(int *param_1,int *param_2)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  param_2[1] = 0;
  *param_2 = 0;
  bVar1 = sub_08007770(*param_1,param_1[1]);
  if (bVar1 < 0xd) {
    cVar2 = sub_08007770(*param_1 + -0x7800,param_1[1]);
    if (2 < (byte)(bVar1 - (cVar2 + -1))) {
      iVar5 = *param_2;
      iVar4 = sub_08128954(*param_1);
      *param_2 = (iVar5 + 0x7800) - iVar4;
    }
    cVar2 = sub_08007770(*param_1 + 0x7800,param_1[1]);
    if (2 < (byte)(bVar1 - (cVar2 + -1))) {
      iVar4 = sub_08128954(*param_1,0x7800);
      *param_2 = *param_2 - iVar4;
    }
    cVar2 = sub_08007770(*param_1,param_1[1] + -0x5000);
    if (2 < (byte)(bVar1 - (cVar2 + -1))) {
      iVar5 = param_2[1];
      iVar4 = sub_08128954(param_1[1]);
      param_2[1] = (iVar5 + 0x5000) - iVar4;
    }
    cVar2 = sub_08007770(*param_1,param_1[1] + 0x5000);
    if ((byte)(bVar1 - (cVar2 + -1)) < 3) {
      return in_lr;
    }
    iVar4 = sub_08128954(param_1[1],0x5000);
    iVar5 = param_2[1];
  }
  else if ((byte)(bVar1 - 0xd) < 2) {
    bVar3 = sub_08007770(*param_1 + -0x7800,param_1[1]);
    if ((bVar1 != bVar3) && (bVar3 != 0xf)) {
      iVar5 = *param_2;
      iVar4 = sub_08128954(*param_1);
      *param_2 = (iVar5 + 0x7800) - iVar4;
    }
    bVar3 = sub_08007770(*param_1 + 0x7800,param_1[1]);
    if ((bVar1 != bVar3) && (bVar3 != 0xf)) {
      iVar4 = sub_08128954(*param_1,0x7800);
      *param_2 = *param_2 - iVar4;
    }
    iVar4 = sub_08128954(param_1[1],0xa000);
    iVar5 = 0xf000;
  }
  else {
    iVar4 = sub_08128954(param_1[1],0xa000);
    iVar5 = -0x5000;
  }
  param_2[1] = iVar5 - iVar4;
  return in_lr;
}

