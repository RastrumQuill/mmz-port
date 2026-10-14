// sub_08038BAC at 0x08038BAC (thumb)

undefined8 sub_08038BAC(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  sub_0800561C(param_1 + 0x74,&DAT_082ad8a4);
  iVar3 = *(int *)(param_1 + 0x58);
  cVar1 = sub_08038B38(param_1,iVar3);
  if (cVar1 == '\0') {
    if (*(char *)(param_1 + 0xe) == '\x05') {
      iVar3 = iVar3 + 0xa8;
    }
    else {
      iVar3 = iVar3 + 0x40;
    }
    *(int *)(param_1 + 0x58) = iVar3;
    uVar2 = 0;
  }
  else {
    sub_08038A5C(param_1,4);
    sub_08038AAC(param_1);
    uVar2 = 1;
  }
  return CONCAT44(in_lr,uVar2);
}

