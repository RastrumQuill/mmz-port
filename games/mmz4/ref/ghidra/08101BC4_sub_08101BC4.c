// sub_08101BC4 at 0x08101BC4 (thumb)

undefined4 sub_08101BC4(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 in_lr;
  int local_20;
  int local_1c;
  
  uVar1 = 0;
  iVar2 = 0x1000;
  do {
    local_20 = *(int *)(param_1 + 0x54) + iVar2;
    local_1c = *(int *)(param_1 + 0x58) + 0x1000;
    sub_080E7238(&local_20,0,uVar1 & 0xff);
    iVar2 = iVar2 + 0x2000;
    uVar1 = uVar1 + 1;
  } while ((int)uVar1 < 8);
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
  sub_08101C28(param_1);
  return in_lr;
}

