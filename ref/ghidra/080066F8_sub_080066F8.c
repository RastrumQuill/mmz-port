// sub_080066F8 at 0x080066F8 (thumb)

undefined4 sub_080066F8(int *param_1,int *param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  param_2[1] = 0;
  *param_2 = 0;
  cVar1 = sub_08006B4C(*param_1,param_1[1]);
  cVar2 = sub_08006B4C(*param_1 + -0x7800,param_1[1]);
  cVar1 = cVar1 + '\x01';
  if (2 < (byte)(cVar1 - cVar2)) {
    iVar4 = *param_2;
    iVar3 = sub_080C8B68(*param_1);
    *param_2 = (iVar4 + 0x7800) - iVar3;
  }
  cVar2 = sub_08006B4C(*param_1 + 0x7800,param_1[1]);
  if (2 < (byte)(cVar1 - cVar2)) {
    iVar3 = sub_080C8B68(*param_1,0x7800);
    *param_2 = *param_2 - iVar3;
  }
  cVar2 = sub_08006B4C(*param_1,param_1[1] + -0x5000);
  if (2 < (byte)(cVar1 - cVar2)) {
    iVar4 = param_2[1];
    iVar3 = sub_080C8B68(param_1[1]);
    param_2[1] = (iVar4 + 0x5000) - iVar3;
  }
  cVar2 = sub_08006B4C(*param_1,param_1[1] + 0x5000);
  if (2 < (byte)(cVar1 - cVar2)) {
    iVar3 = sub_080C8B68(param_1[1],0x5000);
    param_2[1] = param_2[1] - iVar3;
  }
  return in_lr;
}

