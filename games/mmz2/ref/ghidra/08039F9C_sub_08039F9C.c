// sub_08039F9C at 0x08039F9C (thumb)

undefined8 sub_08039F9C(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if ((((*(byte *)(param_2 + 0xd) < 5) && (2 < *(byte *)(param_2 + 0x176))) &&
      (*(char *)(param_2 + 0x2b6) == '\x02')) &&
     ((param_1 == *(int *)(param_2 + 0x2c) && (*(char *)(param_2 + 0x178) != '\x05')))) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return CONCAT44(in_lr,uVar1);
}

