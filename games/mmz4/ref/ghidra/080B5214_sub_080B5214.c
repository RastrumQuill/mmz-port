// sub_080B5214 at 0x080B5214 (thumb)

undefined8 sub_080B5214(int param_1)

{
  short sVar1;
  uint uVar2;
  undefined4 in_lr;
  int local_c [3];
  
  local_c[0] = -0xc;
  local_c[1] = 0xc;
  uVar2 = (uint)*(byte *)(param_1 + 0xb6);
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    uVar2 = uVar2 ^ 1;
  }
  local_c[2] = in_lr;
  sVar1 = sub_08007C7C(*(int *)(param_1 + 0x54) + local_c[uVar2] * 0x100,
                       *(int *)(param_1 + 0x58) + -0x800);
  return CONCAT44(local_c[2],(uint)(sVar1 != 0));
}

