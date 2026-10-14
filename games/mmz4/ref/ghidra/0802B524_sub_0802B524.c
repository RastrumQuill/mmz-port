// sub_0802B524 at 0x0802B524 (thumb)

undefined4 sub_0802B524(undefined4 param_1,int param_2)

{
  undefined4 in_lr;
  
  if (param_2 == 0xe) {
    sub_081284E4(&UNK_0884f5e4,&DAT_03002d40,8);
    sub_081284E4(&UNK_0884f7c4,&DAT_03002dc0,8);
  }
  else {
    sub_081284E4(&UNK_0884f424 + param_2 * 0x20,&DAT_03002cc0,8);
    sub_081284E4(&UNK_0884f604 + param_2 * 0x20,&DAT_03002e40,8);
  }
  return in_lr;
}

