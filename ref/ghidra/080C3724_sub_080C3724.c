// sub_080C3724 at 0x080C3724 (thumb)

undefined8 sub_080C3724(int param_1,char param_2)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(*(int *)(param_1 + 0x14) + 0x73) == '\x03') {
    bVar1 = *(byte *)(param_1 + 5);
    uVar3 = sub_080B4E14(*(int *)(param_1 + 0x10),
                         *(undefined *)(*(int *)(param_1 + 0x10) + 0x180 + (uint)bVar1),1);
    if ((uVar3 & 0x80) == 0) {
      *(undefined *)(param_1 + 1) = 0;
      *(byte *)(param_1 + 7) = bVar1;
      iVar4 = -1;
    }
    else {
      *(undefined2 *)(param_1 + 2) = 3;
      cVar2 = sub_080C3778(param_1,(int)param_2);
      iVar4 = (int)cVar2;
    }
  }
  else {
    iVar4 = 2;
  }
  return CONCAT44(in_lr,iVar4);
}

