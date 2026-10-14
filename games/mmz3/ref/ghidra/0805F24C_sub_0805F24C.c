// sub_0805F24C at 0x0805F24C (thumb)

undefined4 sub_0805F24C(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  sub_08007390(param_1 + 0x74,&DAT_08361a88);
  *(undefined *)(param_1 + 0xf) = 1;
  iVar2 = FUN_080fe2f8(*(undefined4 *)(param_1 + 0x5c),0x3c0);
  *(int *)(param_1 + 0x5c) = iVar2;
  uVar3 = FUN_080fe2f8(iVar2 * 0x6cc0,0x1e);
  cVar1 = sub_0806082C(param_1,uVar3);
  if (cVar1 == '\0') {
    sub_08060768(param_1,2);
  }
  else {
    sub_08060784(param_1,2,0,2);
  }
  return in_lr;
}

