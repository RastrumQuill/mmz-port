// sub_080A97A0 at 0x080A97A0 (thumb)

undefined8 sub_080A97A0(int param_1)

{
  short sVar1;
  undefined4 in_lr;
  int local_c [3];
  
  local_c[0] = -8;
  local_c[1] = 8;
  local_c[2] = in_lr;
  sVar1 = sub_08007C7C(*(int *)(param_1 + 0x54) +
                       *(int *)((int)local_c + ((int)-(*(byte *)(param_1 + 10) & 0x10) >> 0x1f & 4U)
                               ) * 0x100,*(int *)(param_1 + 0x58) + -0x800);
  return CONCAT44(local_c[2],(uint)(sVar1 != 0));
}

