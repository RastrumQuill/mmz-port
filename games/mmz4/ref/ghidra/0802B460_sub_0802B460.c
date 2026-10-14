// sub_0802B460 at 0x0802B460 (thumb)

undefined8 sub_0802B460(void)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar1 = sub_080054CC(DAT_0202ed84);
  iVar2 = iVar1;
  if ((iVar1 != 0) && (iVar1 != DAT_02000030)) {
    iVar2 = sub_0802B460();
    sub_080055C8(DAT_0202ed84,iVar1);
  }
  *(undefined *)(iVar2 + 0x10) = 0;
  *(undefined2 *)(iVar2 + 0x20) = 0;
  *(undefined *)(iVar2 + 0x22) = 0;
  *(byte *)(iVar2 + 0xb) = *(byte *)(iVar2 + 0xb) | 0x10;
  *(undefined *)(iVar2 + 0x1d) = *(undefined *)(iVar2 + 0x1c);
  return CONCAT44(in_lr,iVar2);
}

