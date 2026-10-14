// sub_08026290 at 0x08026290 (thumb)

undefined8 sub_08026290(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0xd4);
  if ((iVar2 == 0) && (iVar2 = sub_08005428(DAT_02022e90), iVar2 != 0)) {
    cVar1 = sub_0801C6EC(param_1,0);
    *(char *)(iVar2 + 0x1e) = cVar1 + '\x01';
    *(undefined *)(iVar2 + 9) = 0;
    *(undefined4 *)(iVar2 + 0x14) = 0x8025d8d;
    *(int *)(iVar2 + 0x20) = param_1;
    *(int *)(param_1 + 0xd4) = iVar2;
  }
  return CONCAT44(in_lr,iVar2);
}

