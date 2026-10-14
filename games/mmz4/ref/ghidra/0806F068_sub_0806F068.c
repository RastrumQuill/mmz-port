// sub_0806F068 at 0x0806F068 (thumb)

undefined4 sub_0806F068(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  byte *pbVar4;
  undefined4 in_lr;
  undefined auStack_1c [4];
  byte abStack_18 [4];
  undefined4 uStack_4;
  
  sub_08128B5C(auStack_1c,&DAT_0812920c,3);
  sub_08128B5C(abStack_18,&DAT_0812920f,3);
  bVar1 = (byte)DAT_0202e918 & 8;
  uStack_4 = in_lr;
  if ((DAT_0202e918 & 8) == 0) {
    pbVar2 = (byte *)(param_1 + 0xb5);
    pbVar4 = (byte *)(param_1 + 0xb4);
    if (1 < *pbVar2) {
      abStack_18[*pbVar4] = bVar1;
    }
    if ((*(byte *)(DAT_0202e8e0 + 1) < 5) || ((DAT_0202e8b4 & 4) != 0)) {
      abStack_18[2] = bVar1;
    }
    uVar3 = sub_0806F248(abStack_18,3);
    *(undefined *)(param_1 + 0xd) = auStack_1c[uVar3];
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    if (uVar3 == *pbVar4) {
      *pbVar2 = *pbVar2 + 1;
    }
    else {
      *pbVar2 = 1;
      *pbVar4 = (byte)uVar3;
    }
  }
  else {
    *(undefined *)(param_1 + 0xd) = 9;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return uStack_4;
}

