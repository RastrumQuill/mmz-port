// sub_080B1C70 at 0x080B1C70 (thumb)

undefined4 sub_080B1C70(int param_1)

{
  int iVar1;
  byte bVar2;
  undefined4 in_lr;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  local_20 = *(int *)(param_1 + 0x54);
  local_1c = *(int *)(param_1 + 0x58) + -0x1000;
  bVar2 = *(byte *)(param_1 + 0x11);
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    bVar2 = bVar2 | 0x10;
  }
  sub_080B0ACC(&local_20,&DAT_0833e47c,0,bVar2);
  bVar2 = *(byte *)(param_1 + 0x11);
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    bVar2 = bVar2 | 0x10;
  }
  sub_080B0ACC(&local_20,&DAT_0833e498,0,bVar2);
  bVar2 = *(byte *)(param_1 + 0x11);
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    bVar2 = bVar2 | 0x10;
  }
  sub_080B0ACC(&local_20,&DAT_0833e4b4,0,bVar2);
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    local_18 = *(int *)(param_1 + 0x54);
    local_20 = local_18 + -0x1000;
    iVar1 = 0x1000;
  }
  else {
    local_18 = *(int *)(param_1 + 0x54);
    local_20 = local_18 + 0x1000;
    iVar1 = -0x1000;
  }
  local_18 = local_18 + iVar1;
  local_1c = *(int *)(param_1 + 0x58) + -0x800;
  local_14 = *(int *)(param_1 + 0x58) + -0x1800;
  sub_080AC60C(2,&local_20);
  sub_080AC60C(2,&local_18);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 0x10);
  return in_lr;
}

