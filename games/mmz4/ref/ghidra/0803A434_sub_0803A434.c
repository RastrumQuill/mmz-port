// sub_0803A434 at 0x0803A434 (thumb)

undefined8 sub_0803A434(int param_1,char param_2)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (param_2 == '\0') {
    bVar1 = *(byte *)(param_1 + 0x14a);
    cVar2 = *(char *)(param_1 + 0xc0);
  }
  else {
    bVar1 = *(byte *)(param_1 + 0x14b);
    cVar2 = *(char *)(param_1 + 0xc1);
  }
  iVar4 = 0;
  if (cVar2 != '\x04') {
    cVar2 = *(char *)(param_1 + 0xc4);
    if (cVar2 == '\x04') {
      iVar4 = 1;
    }
    else if (cVar2 == '\x05') {
      iVar4 = 2;
    }
    else if (cVar2 == '\x06') {
      iVar4 = 3;
    }
  }
  if (bVar1 < (byte)(&DAT_08850198)[iVar4]) {
    if (bVar1 < (byte)(&UNK_0885019c)[iVar4]) {
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
  }
  else {
    uVar3 = 2;
  }
  return CONCAT44(in_lr,uVar3);
}

