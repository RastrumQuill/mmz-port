// sub_080083D4 at 0x080083D4 (thumb)

undefined4 sub_080083D4(int *param_1,int *param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  param_2[1] = 0;
  *param_2 = 0;
  cVar1 = sub_0800894C(*param_1,param_1[1]);
  cVar2 = sub_0800894C(*param_1 + -0x7800,param_1[1]);
  if (2 < (byte)(cVar1 - (cVar2 + -1))) {
    iVar4 = *param_2;
    iVar3 = sub_080EF1E8(*param_1);
    *param_2 = (iVar4 + 0x7800) - iVar3;
  }
  cVar2 = sub_0800894C(*param_1 + 0x7800,param_1[1]);
  if (2 < (byte)(cVar1 - (cVar2 + -1))) {
    iVar3 = sub_080EF1E8(*param_1,0x7800);
    *param_2 = *param_2 - iVar3;
  }
  if (cVar1 == '\x0e') {
    iVar3 = sub_080EF1E8(param_1[1],0xa000);
    iVar4 = 0xf000;
  }
  else {
    cVar2 = sub_0800894C(*param_1,param_1[1] + -0x5000);
    if (2 < (byte)(cVar1 - (cVar2 + -1))) {
      iVar4 = param_2[1];
      iVar3 = sub_080EF1E8(param_1[1]);
      param_2[1] = (iVar4 + 0x5000) - iVar3;
    }
    cVar2 = sub_0800894C(*param_1,param_1[1] + 0x5000);
    if ((byte)(cVar1 - (cVar2 + -1)) < 3) {
      return in_lr;
    }
    iVar3 = sub_080EF1E8(param_1[1],0x5000);
    iVar4 = param_2[1];
  }
  param_2[1] = iVar4 - iVar3;
  return in_lr;
}

