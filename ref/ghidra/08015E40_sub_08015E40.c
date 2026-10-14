// sub_08015E40 at 0x08015E40 (thumb)

undefined8 sub_08015E40(void)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_02022e8c);
  iVar2 = iVar1;
  if ((iVar1 != 0) && (iVar1 == DAT_0200202c)) {
    iVar2 = sub_08015E40();
    sub_0800551C(DAT_02022e8c,iVar1);
  }
  return CONCAT44(in_lr,iVar2);
}

