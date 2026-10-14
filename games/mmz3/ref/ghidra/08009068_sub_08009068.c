// sub_08009068 at 0x08009068 (thumb)

undefined4 sub_08009068(int *param_1,int *param_2)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  param_2[1] = 0;
  *param_2 = 0;
  bVar1 = sub_08009688(*param_1,param_1[1]);
  cVar2 = sub_08009688(*param_1 + -0x7800,param_1[1]);
  if (2 < (byte)(bVar1 - (cVar2 + -1))) {
    iVar4 = *param_2;
    iVar3 = sub_080FE390(*param_1);
    *param_2 = (iVar4 + 0x7800) - iVar3;
  }
  cVar2 = sub_08009688(*param_1 + 0x7800,param_1[1]);
  if (2 < (byte)(bVar1 - (cVar2 + -1))) {
    iVar3 = sub_080FE390(*param_1,0x7800);
    *param_2 = *param_2 - iVar3;
  }
  if (bVar1 < 0xe) {
    cVar2 = sub_08009688(*param_1,param_1[1] + -0x5000);
    if (2 < (byte)(bVar1 - (cVar2 + -1))) {
      iVar4 = param_2[1];
      iVar3 = sub_080FE390(param_1[1]);
      param_2[1] = (iVar4 + 0x5000) - iVar3;
    }
    cVar2 = sub_08009688(*param_1,param_1[1] + 0x5000);
    if ((byte)(bVar1 - (cVar2 + -1)) < 3) {
      return in_lr;
    }
    iVar3 = sub_080FE390(param_1[1],0x5000);
    iVar4 = param_2[1];
  }
  else if (bVar1 == 0xe) {
    iVar3 = sub_080FE390(param_1[1],0xa000);
    iVar4 = 0xf000;
  }
  else {
    iVar3 = sub_080FE390(param_1[1],0xa000);
    iVar4 = -0x5000;
  }
  param_2[1] = iVar4 - iVar3;
  return in_lr;
}

