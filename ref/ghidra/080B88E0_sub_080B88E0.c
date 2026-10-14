// sub_080B88E0 at 0x080B88E0 (thumb)

undefined4 sub_080B88E0(int param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0x12);
  if (bVar1 == 0) {
    iVar3 = sub_080B44D0(*(undefined4 *)(param_1 + 0x20),0,0xb);
    if (iVar3 == 0) {
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b6e70)[*(byte *)(param_1 + 9)] + 8)
      ;
      sub_080B8964(param_1);
      return in_lr;
    }
    sub_0800561C(param_1 + 0x74,&DAT_082b8460);
    *(byte *)(param_1 + 0x13) = bVar1;
  }
  else {
    bVar2 = *(byte *)(param_1 + 0x13);
    sub_0800561C(param_1 + 0x74,&DAT_082b8460 + (uint)bVar1 * 0x54 + (uint)bVar2 * 0x1c);
    *(undefined *)(param_1 + 0x12) = 0;
    *(byte *)(param_1 + 0x13) = bVar2 + 1;
  }
  *(undefined4 *)(param_1 + 0x4c) = DAT_02022c7c;
  *(undefined4 *)(param_1 + 0x50) = DAT_02022c80;
  return in_lr;
}

