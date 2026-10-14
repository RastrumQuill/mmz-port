// sub_080D85A4 at 0x080D85A4 (thumb)

undefined4 sub_080D85A4(int param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  undefined4 local_1c;
  undefined4 local_18;
  
  bVar1 = *(byte *)(param_1 + 10);
  bVar2 = *(byte *)(param_1 + 0x74);
  local_1c = *(undefined4 *)(param_1 + 0x54);
  local_18 = *(undefined4 *)(param_1 + 0x58);
  iVar4 = 0;
  iVar3 = 2;
  do {
    sub_080D4898(&local_1c,&DAT_08864ae4 + iVar4,0,(uint)bVar2 | (bVar1 >> 4 & 1) << 4);
    iVar4 = iVar4 + 0x1c;
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  return in_lr;
}

