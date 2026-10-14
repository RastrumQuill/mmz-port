// sub_0801C444 at 0x0801C444 (thumb)

undefined4 sub_0801C444(int param_1,char param_2)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x219) == '\x01') {
    *(undefined *)(param_1 + 0x122 + (uint)(*(char *)(param_1 + 0x18b) == param_2)) = 0;
  }
  else {
    *(undefined *)(param_1 + 0x122) = 0;
  }
  return in_lr;
}

