// sub_080258F0 at 0x080258F0 (thumb)

undefined4 sub_080258F0(undefined4 param_1,int param_2)

{
  undefined4 in_lr;
  
  if (param_2 == 8) {
    sub_080FE110(&UNK_0835a93c,&DAT_03002d40,8);
    sub_080FE110(&UNK_0835aa5c,&DAT_03002dc0,8);
  }
  else {
    sub_080FE110(&UNK_0835a83c + param_2 * 0x20,&DAT_03002cc0,8);
    sub_080FE110(&UNK_0835a95c + param_2 * 0x20,&DAT_03002e40,8);
  }
  return in_lr;
}

