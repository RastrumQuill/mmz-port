// sub_0801C574 at 0x0801C574 (thumb)

undefined8 sub_0801C574(int *param_1)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  sVar1 = sub_08006F94(1,param_1);
  if ((((*param_1 - 0x159000U < 0xf001) && (0x1dfff < param_1[1])) && (param_1[1] < 0x32001)) &&
     (3 < (ushort)(sVar1 - 0x3ccU))) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return CONCAT44(in_lr,uVar2);
}

