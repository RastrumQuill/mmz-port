// sub_080B7EA4 at 0x080B7EA4 (thumb)

undefined4 sub_080B7EA4(int param_1)

{
  undefined4 in_lr;
  undefined4 local_10;
  undefined4 local_c;
  
  *(undefined *)(param_1 + 0xe) = 1;
  *(undefined *)(param_1 + 0xcd) = 0;
  local_10 = 0x600;
  local_c = 0xfffff400;
  sub_08094980(0,param_1 + 0x4c,&local_10);
  sub_080B7EE0(param_1);
  return in_lr;
}

