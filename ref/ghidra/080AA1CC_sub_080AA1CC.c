// sub_080AA1CC at 0x080AA1CC (thumb)

undefined4 sub_080AA1CC(int param_1)

{
  bool bVar1;
  undefined2 uVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 in_lr;
  byte local_20 [8];
  
  sub_080C8D70(local_20,&DAT_080c9522,7);
  uVar2 = (&DAT_02023170)[*(byte *)(param_1 + 9)];
  *(undefined2 *)(param_1 + 0x1c) = uVar2;
  *(undefined2 *)(param_1 + 0x42) = uVar2;
  sub_0809C980(param_1);
  iVar4 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
  *(int *)(param_1 + 0x50) = iVar4 + -0x300;
  bVar1 = *(int *)(param_1 + 0x4c) < *(int *)(DAT_0202286c + 0x4c);
  *(bool *)(param_1 + 0x44) = bVar1;
  if (bVar1) {
    bVar3 = *(byte *)(param_1 + 10) | 0x10;
  }
  else {
    bVar3 = *(byte *)(param_1 + 10) & 0xef;
  }
  *(byte *)(param_1 + 10) = bVar3;
  uVar5 = *(byte *)(param_1 + 0x10) + 0x2b;
  if (((int)(uint)(byte)(&DAT_02022ad4)[(int)uVar5 >> 3] >> (uVar5 & 7) & 1U) != 0) {
    if (*(char *)(param_1 + 0xe) != '\0') {
      *(undefined *)(param_1 + 0xe) = 0;
      iVar6 = 0;
      iVar4 = 0;
      do {
        if (((int)(uint)(byte)(&DAT_02022ad4)[(int)(local_20[iVar4] + 0x2b) >> 3] >>
             (local_20[iVar4] + 0x2b & 7) & 1U) != 0) {
          iVar6 = iVar6 + 1;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < 7);
      if (iVar6 == 1) {
        DAT_02022ada = DAT_02022ada | 0x40;
      }
      sub_080BC808((&DAT_082b64d4)[iVar6 + -1]);
      DAT_02022af1 = DAT_02022af1 + '\x01';
    }
    if (DAT_0202365a == 0) {
      *(undefined *)(param_1 + 0xd) = 1;
      *(undefined *)(param_1 + 0xe) = 1;
    }
  }
  return in_lr;
}

