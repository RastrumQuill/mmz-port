// sub_080BC934 at 0x080BC934 (thumb)

undefined4 sub_080BC934(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte bVar4;
  byte bVar5;
  undefined4 in_lr;
  
  pbVar2 = *(byte **)(param_1 + 0x1c);
  bVar4 = 0xff;
  bVar5 = 0xff;
  *(undefined4 *)(param_1 + 0x24) = 0;
  bVar1 = *pbVar2;
  while (bVar1 < 0xfd) {
    if (bVar1 == 0xf3) {
      pbVar2 = pbVar2 + 1;
      bVar1 = *pbVar2;
      *(byte *)(param_1 + 4) = bVar1 >> 1;
      *(byte *)(param_1 + 6) = bVar1 & 1;
    }
    else if (bVar1 == 0xf5) {
      pbVar2 = pbVar2 + 1;
      bVar4 = *pbVar2;
    }
    else if (bVar1 == 0xf6) {
      pbVar2 = pbVar2 + 1;
      bVar5 = *pbVar2;
    }
    else if (bVar1 == 0xfa) {
      *(undefined *)(param_1 + 5) = 1;
    }
    else if (bVar1 == 0xfb) {
      *(undefined *)(param_1 + 5) = 0xb;
    }
    pbVar2 = pbVar2 + 1;
    bVar1 = *pbVar2;
  }
  if (bVar4 == 0xff) {
    if (0xfd < *pbVar2) goto LAB_080bc9c6;
    pbVar2 = pbVar2 + 1;
  }
  else {
    pbVar2 = *(byte **)(param_1 + 0x18);
    if (*pbVar2 != 0xff) {
      if (*pbVar2 != 0xf4) goto LAB_080bc99e;
      bVar1 = pbVar2[1];
      while (bVar1 != bVar4) {
LAB_080bc99e:
        do {
          pbVar3 = pbVar2;
          pbVar2 = pbVar3 + 1;
          if (0xfe < *pbVar2) goto LAB_080bc9b4;
        } while (*pbVar2 != 0xf4);
        bVar1 = pbVar3[2];
      }
      *(byte **)(param_1 + 0x20) = pbVar2 + 2;
    }
LAB_080bc9b4:
    if (*pbVar2 != 0xff) goto LAB_080bc9ca;
LAB_080bc9c6:
    pbVar2 = (byte *)0x0;
  }
  *(byte **)(param_1 + 0x20) = pbVar2;
LAB_080bc9ca:
  if (bVar5 != 0xff) {
    *(byte *)(param_1 + 7) = *(byte *)(param_1 + 7) >> 4 | 0x10;
    pbVar2 = *(byte **)(param_1 + 0x18);
    if (*pbVar2 != 0xff) {
      if (*pbVar2 != 0xf4) goto LAB_080bc9ea;
      bVar1 = pbVar2[1];
      while (bVar1 != bVar5) {
LAB_080bc9ea:
        do {
          pbVar3 = pbVar2;
          pbVar2 = pbVar3 + 1;
          if (0xfe < *pbVar2) {
            return in_lr;
          }
        } while (*pbVar2 != 0xf4);
        bVar1 = pbVar3[2];
      }
      *(byte **)(param_1 + 0x24) = pbVar2 + 2;
    }
  }
  return in_lr;
}

