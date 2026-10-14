// sub_080401D4 at 0x080401D4 (thumb)

undefined8 sub_080401D4(int param_1)

{
  undefined4 in_lr;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 uStack_4;
  
  local_c = *(undefined4 *)(param_1 + 0x54);
  local_8 = *(undefined4 *)(param_1 + 0x58);
  uStack_4 = in_lr;
  sub_0809BEB0(param_1,&local_c);
  return CONCAT44(uStack_4,1);
}

