// sub_080A9768 at 0x080A9768 (thumb)

undefined4 sub_080A9768(int param_1)

{
  bool bVar1;
  undefined2 uVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  byte local_20 [8];
  
  sub_080C8D70(local_20,&DAT_080c94fa,7);
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
  if (((int)(uint)(byte)(&DAT_02022ad4)
                        [(int)*(uint *)(&DAT_082b645c + (uint)*(byte *)(param_1 + 0x10) * 4) >> 3]
       >> (*(uint *)(&DAT_082b645c + (uint)*(byte *)(param_1 + 0x10) * 4) & 7) & 1U) != 0) {
    if (*(char *)(param_1 + 0xe) != '\0') {
      *(undefined *)(param_1 + 0xe) = 0;
      iVar5 = 0;
      iVar4 = 0;
      do {
        if (((int)(uint)(byte)(&DAT_02022ad4)
                              [(int)*(uint *)(&DAT_082b645c + (uint)local_20[iVar4] * 4) >> 3] >>
             (*(uint *)(&DAT_082b645c + (uint)local_20[iVar4] * 4) & 7) & 1U) != 0) {
          iVar5 = iVar5 + 1;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < 7);
      sub_080BC808((&DAT_082b644c)[iVar5 + -1]);
      if (iVar5 == 1) {
        DAT_02022ada = DAT_02022ada & 0xbf;
      }
      DAT_02022af1 = DAT_02022af1 + '\x01';
    }
    if (DAT_0202365a == 0) {
      *(undefined *)(param_1 + 0xd) = 1;
      *(undefined *)(param_1 + 0xe) = 1;
    }
  }
  return in_lr;
}

