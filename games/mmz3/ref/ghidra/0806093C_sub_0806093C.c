// sub_0806093C at 0x0806093C (thumb)

undefined8 sub_0806093C(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  sub_08007390(param_1 + 0x74,&DAT_08361a88);
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

