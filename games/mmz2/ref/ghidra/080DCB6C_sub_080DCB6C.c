// sub_080DCB6C at 0x080DCB6C (thumb)

undefined8 sub_080DCB6C(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = sub_080EF118(param_1,*(undefined4 *)(&DAT_0834c0b4 + (uint)*(byte *)(param_1 + 0x10) * 4))
  ;
  return CONCAT44(in_lr,(int)(short)(&DAT_080ef450)[(uVar1 & 0xf) * 0x10]);
}

