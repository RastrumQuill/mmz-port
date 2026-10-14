// sub_080B6654 at 0x080B6654 (thumb)

undefined4 sub_080B6654(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  undefined4 local_24;
  undefined4 local_20;
  undefined *local_1c [2];
  
  local_1c[0] = &DAT_088606e4;
  local_1c[1] = &DAT_088607c4;
  bVar1 = *(byte *)(param_1 + 0x10);
  uVar2 = *(byte *)(param_1 + 10) >> 4 & 1;
  local_24 = *(undefined4 *)(param_1 + 0x54);
  local_20 = *(undefined4 *)(param_1 + 0x58);
  iVar4 = 0;
  iVar3 = 3;
  do {
    sub_080D4898(&local_24,local_1c[bVar1] + iVar4,0,uVar2 | uVar2 << 4);
    iVar4 = iVar4 + 0x1c;
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  return in_lr;
}

