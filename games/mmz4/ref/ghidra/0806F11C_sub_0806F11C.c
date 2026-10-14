// sub_0806F11C at 0x0806F11C (thumb)

undefined4 sub_0806F11C(int param_1)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  undefined4 in_lr;
  undefined auStack_20 [4];
  byte abStack_1c [4];
  undefined4 uStack_4;
  
  sub_08128B5C(auStack_20,&DAT_08129212,2);
  sub_08128B5C(abStack_1c,&DAT_08129214,2);
  bVar1 = (byte)DAT_0202e918 & 8;
  uStack_4 = in_lr;
  if ((DAT_0202e918 & 8) == 0) {
    pbVar4 = (byte *)(param_1 + 0xb7);
    pbVar3 = (byte *)(param_1 + 0xb6);
    if (1 < *pbVar4) {
      abStack_1c[*pbVar3] = bVar1;
    }
    uVar2 = sub_0806F248(abStack_1c,2);
    *(undefined *)(param_1 + 0xd) = auStack_20[uVar2];
    *(byte *)(param_1 + 0xe) = bVar1;
    *(byte *)(param_1 + 0xf) = bVar1;
    if (uVar2 == *pbVar3) {
      *pbVar4 = *pbVar4 + 1;
    }
    else {
      *pbVar4 = 1;
      *pbVar3 = (byte)uVar2;
    }
  }
  else {
    *(undefined *)(param_1 + 0xd) = 10;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return uStack_4;
}

