// sub_080B9860 at 0x080B9860 (thumb)

undefined8 sub_080B9860(undefined4 param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (param_2 == 0) {
    iVar2 = sub_08005428(DAT_02023210);
  }
  else {
    iVar2 = sub_080054C0(param_2);
  }
  if (iVar2 != 0) {
    *(undefined *)(iVar2 + 9) = 0;
    *(undefined4 *)(iVar2 + 0x14) = 0x80b8ce9;
    *(undefined2 *)(iVar2 + 0x1c) = 0x200;
    *(undefined *)(iVar2 + 0x1e) = 4;
    *(undefined *)(iVar2 + 0x10) = 3;
    if (param_2 == 0) {
      *(undefined4 *)(iVar2 + 0x20) = param_1;
      cVar1 = '\0';
    }
    else {
      *(int *)(iVar2 + 0x20) = param_2;
      *(int *)(param_2 + 0x24) = iVar2;
      cVar1 = *(char *)(param_2 + 0x12) + '\x01';
    }
    *(char *)(iVar2 + 0x12) = cVar1;
    *(undefined4 *)(iVar2 + 0x24) = 0;
  }
  return CONCAT44(in_lr,iVar2);
}

