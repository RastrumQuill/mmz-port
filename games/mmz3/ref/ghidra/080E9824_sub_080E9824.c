// sub_080E9824 at 0x080E9824 (thumb)

undefined4 sub_080E9824(int param_1,uint param_2,undefined2 param_3)

{
  char cVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 in_lr;
  char acStack_34 [16];
  undefined local_24;
  undefined4 uStack_4;
  
  iVar3 = param_1;
  if (param_1 < 0) {
    iVar3 = -param_1;
  }
  local_24 = 0;
  uVar5 = 0xf;
  uStack_4 = in_lr;
  while( true ) {
    sVar2 = (short)uVar5;
    iVar4 = (int)sVar2;
    if (iVar4 < 1) break;
    cVar1 = sub_080FE390(iVar3,10);
    acStack_34[iVar4] = cVar1 + '0';
    if (iVar3 < 10) break;
    iVar3 = FUN_080fe2f8(iVar3,10);
    uVar5 = iVar4 - 1U & 0xffff;
  }
  if (param_1 < 0) {
    sVar2 = (short)(iVar4 + -1);
    acStack_34[(iVar4 + -1) * 0x10000 >> 0x10] = '-';
  }
  sub_080E97D4(acStack_34 + sVar2,sVar2 + -0xf + (param_2 & 0xffff),param_3);
  return uStack_4;
}

