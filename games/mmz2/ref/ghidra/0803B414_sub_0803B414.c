// sub_0803B414 at 0x0803B414 (thumb)

undefined8 sub_0803B414(int param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  int iVar6;
  
  if (*(short *)(DAT_0202f070 + 10) < 2) {
    iVar3 = 0;
  }
  else {
    sVar2 = sub_08037DC8(*(undefined4 *)(param_1 + 0x28),1);
    iVar3 = 0;
    iVar6 = 2;
    do {
      iVar5 = iVar6 + -1;
      iVar4 = sub_08006BF0(param_1);
      if (iVar3 == 0) {
        iVar3 = iVar4;
      }
      *(undefined *)(iVar4 + 9) = 5;
      *(undefined4 *)(iVar4 + 0x14) = 0x803ae75;
      if (sVar2 < 2) {
        bVar1 = *(byte *)(iVar4 + 0xb) & 0xbf;
      }
      else {
        bVar1 = *(byte *)(iVar4 + 0xb) | 0x40;
      }
      *(byte *)(iVar4 + 0xb) = bVar1;
      *(undefined *)(iVar4 + 0x25) = 0x10;
      *(undefined2 *)(iVar4 + 0x20) = (&DAT_08335fd4)[sVar2];
      *(undefined1 *)(iVar4 + 0x22) = (&DAT_08335fdc)[sVar2];
      *(undefined *)(iVar4 + 0x10) = (&UNK_0833783b)[iVar6];
      *(int *)(iVar4 + 0x28) = param_1;
      param_1 = iVar4;
      iVar6 = iVar5;
    } while (iVar5 != 0);
  }
  return CONCAT44(in_lr,iVar3);
}

