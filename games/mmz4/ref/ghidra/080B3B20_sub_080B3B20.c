// sub_080B3B20 at 0x080B3B20 (thumb)

undefined8 sub_080B3B20(int param_1)

{
  short sVar1;
  undefined4 in_lr;
  int local_c [3];
  
  local_c[0] = -10;
  local_c[1] = 10;
  local_c[2] = in_lr;
  sVar1 = sub_08007C7C(*(int *)(param_1 + 0x54) +
                       *(int *)((int)local_c + ((int)-(*(byte *)(param_1 + 10) & 0x10) >> 0x1f & 4U)
                               ) * 0x100,*(int *)(param_1 + 0x58) + -0x800);
  return CONCAT44(local_c[2],(uint)(sVar1 != 0));
}

