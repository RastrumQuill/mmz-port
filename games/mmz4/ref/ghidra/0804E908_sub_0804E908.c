// sub_0804E908 at 0x0804E908 (thumb)

undefined8 sub_0804E908(void)

{
  uint uVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar1 = sub_08007C7C();
  uVar2 = uVar1 & 0xf;
  if ((uVar2 == 0xf) || ((uVar1 & 0x8000) != 0)) {
    uVar2 = 0;
  }
  return CONCAT44(in_lr,uVar2);
}

