// sub_080F34D8 at 0x080F34D8 (thumb)

undefined4 sub_080F34D8(int param_1)

{
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xdc4) = 0x7800;
  *(undefined4 *)(param_1 + 0xdc8) = 0x5000;
  sub_08004818(param_1 + 0xdb8,(undefined4 *)(param_1 + 0xdc4),0,0);
  sub_08004F90(param_1 + 0xbac);
  sub_08004FC8(param_1 + 0xbac,param_1 + 0xdb8);
  sub_080E5964(param_1 + 0x978,&DAT_0203be90,0x40);
  return in_lr;
}

