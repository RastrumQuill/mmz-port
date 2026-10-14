// sub_0803D6C8 at 0x0803D6C8 (thumb)

undefined4 sub_0803D6C8(int param_1,char param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  uint local_24;
  
  local_24 = param_3 & 0xff;
  if (param_2 == '\0') {
    uVar1 = DAT_0202f608 * 0x343fd + 0x269ec3;
    uVar4 = uVar1 & 0x7fffffff;
    local_34 = (uVar1 * 0x40 >> 0x16) - 0x200;
  }
  else {
    local_34 = -0x280;
    uVar1 = DAT_0202f608 * 0x343fd + 0x269ec3;
    uVar4 = uVar1 & 0x7fffffff;
    DAT_0202f608 = uVar4;
    local_34 = sub_080FE4D8(uVar1 * 2 >> 0x11,0x500);
    local_34 = local_34 + -0x280;
  }
  uVar4 = uVar4 * 0x343fd + 0x269ec3;
  DAT_0202f608 = uVar4 & 0x7fffffff;
  local_30 = -0x100 - (uVar4 * 0x80 >> 0x17);
  if (param_2 == *(char *)(param_1 + 0xbe)) {
    iVar2 = *(int *)(&DAT_0835e284 + local_24 * 4);
  }
  else {
    iVar2 = -*(int *)(&DAT_0835e284 + local_24 * 4);
  }
  iVar3 = local_24 * 4;
  uVar4 = DAT_0202f608 * 0x343fd + 0x269ec3;
  DAT_0202f608 = uVar4 & 0x7fffffff;
  local_2c = (uVar4 * 8 >> 0x13) + *(int *)(param_1 + 0xb4) + iVar2 + -0x1000;
  local_28 = *(int *)(param_1 + 0xb8);
  sub_080B6950(&local_2c,&local_34);
  if (param_2 == *(char *)(param_1 + 0xbe)) {
    iVar2 = *(int *)(&DAT_0835e284 + iVar3);
  }
  else {
    iVar2 = -*(int *)(&DAT_0835e284 + iVar3);
  }
  uVar4 = DAT_0202f608 * 0x343fd + 0x269ec3;
  DAT_0202f608 = uVar4 & 0x7fffffff;
  local_2c = *(int *)(param_1 + 0xb4) + iVar2 + -0x1000 + (uVar4 * 8 >> 0x13);
  local_28 = *(int *)(param_1 + 0xb8) + 0x600;
  sub_080B2484(3,&local_2c);
  return in_lr;
}

