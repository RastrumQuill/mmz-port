// sub_08073144 at 0x08073144 (thumb)

undefined4 sub_08073144(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  int local_1c;
  int local_18;
  int local_14;
  undefined4 local_10;
  
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    local_1c = 0x1300;
    uVar1 = DAT_0202f608 * 0x343fd + 0x269ec3;
    local_14 = (uVar1 * 2 >> 0x11 & 0x1f) + 0x168;
  }
  else {
    local_1c = -0x1300;
    uVar1 = DAT_0202f608 * 0x343fd + 0x269ec3;
    local_14 = -0x168 - (uVar1 * 2 >> 0x11 & 0x1f);
  }
  DAT_0202f608 = uVar1 & 0x7fffffff;
  local_1c = *(int *)(param_1 + 0x54) + local_1c;
  local_18 = *(int *)(param_1 + 0x58) + -0x1800;
  local_10 = 0x168;
  sub_080BA354(&local_1c,&local_14,0);
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    local_1c = -0x400;
  }
  else {
    local_1c = 0x400;
  }
  local_1c = local_1c + *(int *)(param_1 + 0x54);
  local_18 = *(int *)(param_1 + 0x58) + -0x1800;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    uVar1 = DAT_0202f608 * 0x343fd + 0x269ec3;
    local_14 = (uVar1 * 2 >> 0x11 & 0x1f) + 0x148;
  }
  else {
    uVar1 = DAT_0202f608 * 0x343fd + 0x269ec3;
    local_14 = -0x148 - (uVar1 * 2 >> 0x11 & 0x1f);
  }
  DAT_0202f608 = uVar1 & 0x7fffffff;
  local_10 = 0x188;
  sub_080BA354(&local_1c,&local_14,1);
  return in_lr;
}

