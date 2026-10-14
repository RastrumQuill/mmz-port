// sub_080FB16C at 0x080FB16C (thumb)

undefined4 sub_080FB16C(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  sub_080E97D4("REST 0\'00",10,0x13);
  uVar1 = FUN_080fe2f8(*(undefined4 *)(param_1 + 0xdec),0x3c);
  uVar1 = sub_080FE390(uVar1,0x3c);
  sub_080E9824(uVar1,0x12,0x13);
  uVar1 = FUN_080fe2f8(*(undefined4 *)(param_1 + 0xdec),0xe10);
  sub_080E9824(uVar1,0xf,0x13);
  return in_lr;
}

