// sub_080B7164 at 0x080B7164 (thumb)

undefined4 sub_080B7164(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  undefined4 local_1c;
  undefined4 local_18;
  
  uVar1 = *(byte *)(param_1 + 10) >> 4 & 1;
  local_1c = *(undefined4 *)(param_1 + 0x54);
  local_18 = *(undefined4 *)(param_1 + 0x58);
  iVar3 = 0;
  iVar2 = 2;
  do {
    sub_080D4898(&local_1c,&DAT_08860994 + iVar3,0,uVar1 | uVar1 << 4);
    iVar3 = iVar3 + 0x1c;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  return in_lr;
}

