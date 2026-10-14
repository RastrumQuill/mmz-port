// sub_08025880 at 0x08025880 (thumb)

undefined8 sub_08025880(void)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar1 = sub_0800710C(DAT_020305dc);
  iVar2 = iVar1;
  if ((iVar1 != 0) && (iVar1 == DAT_020002b4)) {
    iVar2 = sub_08025880();
    sub_080071D4(DAT_020305dc,iVar1);
  }
  *(undefined *)(iVar2 + 0x10) = 1;
  *(undefined2 *)(iVar2 + 0x20) = 0x200;
  *(undefined *)(iVar2 + 0x22) = 4;
  *(byte *)(iVar2 + 0xb) = *(byte *)(iVar2 + 0xb) | 0x10;
  *(undefined *)(iVar2 + 0x1d) = *(undefined *)(iVar2 + 0x1c);
  return CONCAT44(in_lr,iVar2);
}

