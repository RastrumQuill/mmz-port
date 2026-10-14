// sub_080B6EBC at 0x080B6EBC (thumb)

undefined4 sub_080B6EBC(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 in_lr;
  int local_44 [4];
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  int local_24;
  int local_20;
  
  local_44[0] = -0x400;
  local_44[1] = 0xfffffc00;
  local_44[2] = 0x400;
  local_44[3] = 0xfffffc00;
  uStack_34 = 0xfffffc00;
  uStack_30 = 0x400;
  local_2c = 0x400;
  uStack_28 = 0x400;
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x28);
  uVar2 = *(uint *)(param_1 + 0xb8) + 1;
  *(uint *)(param_1 + 0xb8) = uVar2;
  if ((uVar2 & 0x1f) != 0) {
    uVar3 = (int)uVar2 >> 5 & 3;
    uVar2 = DAT_0202dc38 * 0x343fd + 0x269ec3;
    local_24 = *(int *)(param_1 + 0x54) + local_44[uVar3 * 2] +
               (uVar2 * 2 >> 0x11 & 7) * 0x100 + -0x400;
    uVar2 = (uVar2 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_0202dc38 = uVar2 & 0x7fffffff;
    local_20 = *(int *)(param_1 + 0x58) + local_44[uVar3 * 2 + 1] +
               (uVar2 * 2 >> 0x11 & 7) * 0x100 + -0x400;
    sub_080E7DDC(uVar1,&local_24,1,0);
  }
  return in_lr;
}

