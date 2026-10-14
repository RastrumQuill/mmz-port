// sub_0802582C at 0x0802582C (thumb)

undefined8 sub_0802582C(void)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar1 = sub_080070D8(DAT_020305dc);
  iVar2 = iVar1;
  if ((iVar1 != 0) && (iVar1 != DAT_020002b4)) {
    iVar2 = sub_0802582C();
    sub_080071D4(DAT_020305dc,iVar1);
  }
  *(undefined *)(iVar2 + 0x10) = 0;
  *(undefined2 *)(iVar2 + 0x20) = 0;
  *(undefined *)(iVar2 + 0x22) = 0;
  *(byte *)(iVar2 + 0xb) = *(byte *)(iVar2 + 0xb) | 0x10;
  *(undefined *)(iVar2 + 0x1d) = *(undefined *)(iVar2 + 0x1c);
  return CONCAT44(in_lr,iVar2);
}

