// sub_08015E08 at 0x08015E08 (thumb)

undefined8 sub_08015E08(void)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar1 = sub_08005428(DAT_02022e8c);
  iVar2 = iVar1;
  if ((iVar1 != 0) && (iVar1 != DAT_0200202c)) {
    iVar2 = sub_08015E08();
    sub_0800551C(DAT_02022e8c,iVar1);
  }
  return CONCAT44(in_lr,iVar2);
}

