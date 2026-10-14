// sub_08022F98 at 0x08022F98 (thumb)

undefined4 sub_08022F98(int param_1)

{
  undefined4 in_lr;
  undefined4 local_8 [2];
  
  local_8[0] = 0x8038581;
  local_8[1] = in_lr;
  sub_080EF118(param_1,local_8[*(byte *)(param_1 + 9)]);
  return local_8[1];
}

