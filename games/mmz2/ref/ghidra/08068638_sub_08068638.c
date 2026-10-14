// sub_08068638 at 0x08068638 (thumb)

undefined4 sub_08068638(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 in_lr;
  int local_24;
  int local_20;
  uint *local_1c;
  
  iVar2 = param_1 + 0x54;
  uVar1 = (param_2 & 0xf) << 4 | param_2 & 0xff;
  sub_080B0ACC(iVar2,&DAT_0833ddb0,0,uVar1);
  sub_080B0ACC(iVar2,&DAT_0833dde8,0,uVar1);
  sub_080B0ACC(iVar2,&DAT_0833de20,0,uVar1);
  uVar1 = DAT_0202e188 * 0x343fd + 0x269ec3;
  local_24 = *(int *)(param_1 + 0x54) + ((uVar1 * 2 >> 0x11 & 0x1f) - 0xf) * 0x100;
  uVar1 = (uVar1 & 0x7fffffff) * 0x343fd + 0x269ec3;
  DAT_0202e188 = uVar1 & 0x7fffffff;
  local_20 = *(int *)(param_1 + 0x58) + ((uVar1 * 2 >> 0x11 & 0x1f) - 0xf) * 0x100;
  local_1c = &DAT_0202e188;
  sub_080AC60C(1,&local_24);
  uVar1 = *local_1c * 0x343fd + 0x269ec3;
  local_24 = *(int *)(param_1 + 0x54) + ((uVar1 * 2 >> 0x11 & 0x1f) - 0xf) * 0x100;
  uVar1 = (uVar1 & 0x7fffffff) * 0x343fd + 0x269ec3;
  *local_1c = uVar1 & 0x7fffffff;
  local_20 = *(int *)(param_1 + 0x58) + ((uVar1 * 2 >> 0x11 & 0x1f) - 0xf) * 0x100;
  sub_080AC60C(2,&local_24);
  return in_lr;
}

