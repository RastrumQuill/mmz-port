// sub_08031008 at 0x08031008 (thumb)

undefined4 sub_08031008(int param_1,int param_2)

{
  undefined2 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  undefined *puVar6;
  undefined4 in_lr;
  undefined *local_28;
  undefined *local_24;
  
  pbVar5 = (byte *)(param_1 + 0x48);
  if (param_2 == 0) {
    iVar2 = 0xb;
    do {
      iVar2 = iVar2 + -1;
      pbVar5[iVar2] = 0;
      *(undefined *)(param_1 + 0x53 + iVar2) = 0;
      *(undefined *)(param_1 + 0x5e + iVar2) = 0;
    } while (iVar2 != 0);
    iVar2 = 0x13;
    puVar1 = (undefined2 *)(param_1 + 0x90);
    do {
      puVar1 = puVar1 + -1;
      iVar2 = iVar2 + -1;
      *puVar1 = 0;
      *(undefined *)(param_1 + 0x90 + iVar2) = 0;
    } while (iVar2 != 0);
  }
  else {
    iVar2 = 0xb;
    do {
      iVar2 = iVar2 + -1;
      pbVar5[iVar2] = 0xff;
      *(undefined *)(param_1 + 0x53 + iVar2) = 0xff;
      *(undefined *)(param_1 + 0x5e + iVar2) = 0xff;
    } while (iVar2 != 0);
    *pbVar5 = *pbVar5 & 0xfe;
    *(byte *)(param_1 + 0x53) = *(byte *)(param_1 + 0x53) & 0xfe;
    *(byte *)(param_1 + 0x5e) = *(byte *)(param_1 + 0x5e) & 0xfe;
    uVar3 = 0x52;
    puVar6 = &DAT_0834a5ac;
    do {
      uVar3 = uVar3 - 1;
      if (puVar6[-0xb] == '\x01') {
        pbVar5 = (byte *)(param_1 + 0x5e + (uVar3 >> 3));
        *pbVar5 = *pbVar5 & ~('\x01' << (uVar3 & 7));
      }
      puVar6 = puVar6 + -0xc;
    } while (uVar3 != 0);
    puVar1 = (undefined2 *)(param_1 + 0x90);
    iVar2 = 0x13;
    do {
      puVar1 = puVar1 + -1;
      iVar4 = iVar2 + -1;
      *puVar1 = 0xffff;
      *(undefined *)(param_1 + 0x90 + iVar4) = (&UNK_0834a633)[iVar2];
      iVar2 = iVar4;
    } while (iVar4 != 0);
  }
  local_24 = (undefined *)(param_1 + 0xa4);
  local_28 = (undefined *)(param_1 + 0xa3);
  *local_28 = 0;
  *local_24 = 0;
  *(undefined *)(param_1 + 0xa5) = 0;
  sub_08031734(param_1,param_2);
  return in_lr;
}

