// sub_0801E56C at 0x0801E56C (thumb)

undefined8 sub_0801E56C(void)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar1 = sub_08006B50(DAT_0202f06c);
  iVar2 = iVar1;
  if ((iVar1 != 0) && (iVar1 != DAT_0200002c)) {
    iVar2 = sub_0801E56C();
    sub_08006C4C(DAT_0202f06c,iVar1);
  }
  *(undefined *)(iVar2 + 0x10) = 0;
  *(undefined2 *)(iVar2 + 0x20) = 0;
  *(undefined *)(iVar2 + 0x22) = 0;
  *(byte *)(iVar2 + 0xb) = *(byte *)(iVar2 + 0xb) | 0x10;
  *(undefined *)(iVar2 + 0x1d) = *(undefined *)(iVar2 + 0x1c);
  if (DAT_0202e140 != '\0') {
    sub_080EEF68(&DAT_083339d8,&DAT_03002e40,8);
  }
  return CONCAT44(in_lr,iVar2);
}

