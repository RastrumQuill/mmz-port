// sub_08054FFC at 0x08054FFC (thumb)

undefined4 sub_08054FFC(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  undefined4 in_lr;
  undefined auStack_10 [4];
  
  sub_08128B5C(auStack_10,&DAT_08128ed4,3);
  bVar1 = (byte)DAT_0202e918 & 8;
  if ((DAT_0202e918 & 8) == 0) {
    pbVar2 = (byte *)(param_1 + 0xb5);
    *(undefined *)(param_1 + 0xd) = auStack_10[*pbVar2];
    *(byte *)(param_1 + 0xe) = bVar1;
    *(byte *)(param_1 + 0xf) = bVar1;
    *pbVar2 = *pbVar2 + 1;
    bVar1 = sub_08128A9C(*pbVar2,3);
    *pbVar2 = bVar1;
  }
  else {
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

