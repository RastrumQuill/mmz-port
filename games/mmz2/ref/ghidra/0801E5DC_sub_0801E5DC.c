// sub_0801E5DC at 0x0801E5DC (thumb)

undefined8 sub_0801E5DC(void)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar1 = sub_08006B84(DAT_0202f06c);
  iVar2 = iVar1;
  if ((iVar1 != 0) && (iVar1 == DAT_0200002c)) {
    iVar2 = sub_0801E5DC();
    sub_08006C4C(DAT_0202f06c,iVar1);
  }
  *(undefined *)(iVar2 + 0x10) = 1;
  *(undefined2 *)(iVar2 + 0x20) = 0x200;
  *(undefined *)(iVar2 + 0x22) = 4;
  *(byte *)(iVar2 + 0xb) = *(byte *)(iVar2 + 0xb) | 0x10;
  *(undefined *)(iVar2 + 0x1d) = *(undefined *)(iVar2 + 0x1c);
  return CONCAT44(in_lr,iVar2);
}

