// sub_080608EC at 0x080608EC (thumb)

undefined8 sub_080608EC(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  sub_08007390(param_1 + 0x74,&DAT_08361ba8);
  iVar3 = *(int *)(param_1 + 0x60);
  cVar1 = sub_08060864(param_1,iVar3);
  if (cVar1 == '\0') {
    if (*(char *)(param_1 + 0xe) == '\x05') {
      iVar3 = iVar3 + 0xa8;
    }
    else {
      iVar3 = iVar3 + 0x40;
    }
    *(int *)(param_1 + 0x60) = iVar3;
    uVar2 = 0;
  }
  else {
    sub_08060768(param_1,4);
    sub_080607B8(param_1);
    uVar2 = 1;
  }
  return CONCAT44(in_lr,uVar2);
}

