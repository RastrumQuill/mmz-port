// sub_0802B4B4 at 0x0802B4B4 (thumb)

undefined8 sub_0802B4B4(void)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar1 = sub_08005500(DAT_0202ed84);
  iVar2 = iVar1;
  if ((iVar1 != 0) && (iVar1 == DAT_02000030)) {
    iVar2 = sub_0802B4B4();
    sub_080055C8(DAT_0202ed84,iVar1);
  }
  *(undefined *)(iVar2 + 0x10) = 1;
  *(undefined2 *)(iVar2 + 0x20) = 0x200;
  *(undefined *)(iVar2 + 0x22) = 4;
  *(byte *)(iVar2 + 0xb) = *(byte *)(iVar2 + 0xb) | 0x10;
  *(undefined *)(iVar2 + 0x1d) = *(undefined *)(iVar2 + 0x1c);
  return CONCAT44(in_lr,iVar2);
}

