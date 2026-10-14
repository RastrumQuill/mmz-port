// sub_0804F39C at 0x0804F39C (thumb)

undefined8 sub_0804F39C(void)

{
  uint uVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar1 = sub_08007C7C();
  uVar2 = uVar1 & 0xffff;
  if (((uVar1 & 0xf) == 0xf) || ((uVar1 & 0x8000) != 0)) {
    uVar2 = 0;
  }
  return CONCAT44(in_lr,uVar2);
}

