// sub_081179B8 at 0x081179B8 (thumb)

undefined4 sub_081179B8(int param_1)

{
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xdc4) = 0x7800;
  *(undefined4 *)(param_1 + 0xdc8) = 0x5000;
  sub_08002C0C(param_1 + 0xdb8,(undefined4 *)(param_1 + 0xdc4),0,0);
  sub_08003384(param_1 + 0xbac);
  sub_080033BC(param_1 + 0xbac,param_1 + 0xdb8);
  sub_08109B6C(param_1 + 0x978,&DAT_0203a530,0x40);
  return in_lr;
}

