// sub_08038BFC at 0x08038BFC (thumb)

undefined8 sub_08038BFC(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  sub_0800561C(param_1 + 0x74,&DAT_082ad7fc);
  if (*(char *)(param_1 + 0x73) == '\x02') {
    uVar1 = 0xffffffff;
  }
  else if (*(char *)(param_1 + 0x73) == '\x03') {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return CONCAT44(in_lr,uVar1);
}

