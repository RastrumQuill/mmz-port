// sub_08038820 at 0x08038820 (thumb)

undefined4
sub_08038820(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x2c);
  if ((iVar2 == 0) || (*(int *)(&DAT_08335e94 + (uint)*(byte *)(iVar2 + 9) * 4) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = sub_080EF124(iVar2,param_1,param_2,param_3,param_4,param_5);
  }
  return uVar1;
}

