// sub_080D9ABC at 0x080D9ABC (thumb)

undefined4 sub_080D9ABC(int param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0x12);
  if (bVar1 == 0) {
    iVar3 = sub_080D5740(*(undefined4 *)(param_1 + 0x28),0,0xb);
    if (iVar3 == 0) {
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0834a1a0)[*(byte *)(param_1 + 9)] + 8)
      ;
      sub_080D9B44(param_1);
      return in_lr;
    }
    sub_08006E08(param_1 + 0x74,&DAT_0834b674);
    *(byte *)(param_1 + 0x13) = bVar1;
  }
  else {
    bVar2 = *(byte *)(param_1 + 0x13);
    sub_08006E08(param_1 + 0x74,&DAT_0834b674 + (uint)bVar1 * 0x90 + (uint)bVar2 * 0x30);
    *(undefined *)(param_1 + 0x12) = 0;
    *(byte *)(param_1 + 0x13) = bVar2 + 1;
  }
  *(undefined4 *)(param_1 + 0x54) = DAT_0202ed50;
  *(undefined4 *)(param_1 + 0x58) = DAT_0202ed54;
  return in_lr;
}

