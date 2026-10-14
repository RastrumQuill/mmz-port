// sub_0801C94C at 0x0801C94C (thumb)

undefined4 sub_0801C94C(int param_1,char param_2)

{
  byte *pbVar1;
  undefined2 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  undefined4 in_lr;
  undefined *local_24;
  
  pbVar1 = (byte *)(param_1 + 0x2c);
  if (param_2 == '\x01') {
    iVar3 = 10;
    do {
      iVar3 = iVar3 + -1;
      pbVar1[iVar3] = 0xff;
      *(undefined *)(param_1 + 0x36 + iVar3) = 0xff;
      *(undefined *)(param_1 + 0x40 + iVar3) = 0xff;
    } while (iVar3 != 0);
    *pbVar1 = *pbVar1 & 0xfe;
    *(byte *)(param_1 + 0x36) = *(byte *)(param_1 + 0x36) & 0xfe;
    *(byte *)(param_1 + 0x40) = *(byte *)(param_1 + 0x40) & 0xfe;
    uVar4 = 0x4f;
    puVar6 = &DAT_082b7258;
    do {
      uVar4 = uVar4 - 1;
      if (puVar6[-0xb] == '\x01') {
        pbVar1 = (byte *)(param_1 + 0x40 + (uVar4 >> 3));
        *pbVar1 = *pbVar1 & ~('\x01' << (uVar4 & 7));
      }
      puVar6 = puVar6 + -0xc;
    } while (uVar4 != 0);
    puVar2 = (undefined2 *)(param_1 + 0x72);
    iVar3 = 0x14;
    do {
      puVar2 = puVar2 + -1;
      iVar5 = iVar3 + -1;
      *puVar2 = 0xff;
      *(undefined *)(param_1 + 0x72 + iVar5) = (&UNK_082b72eb)[iVar3];
      iVar3 = iVar5;
    } while (iVar5 != 0);
    *(undefined2 *)(param_1 + 0x86) = 9999;
  }
  else {
    iVar3 = 10;
    do {
      iVar3 = iVar3 + -1;
      pbVar1[iVar3] = 0;
      *(undefined *)(param_1 + 0x36 + iVar3) = 0;
      *(undefined *)(param_1 + 0x40 + iVar3) = 0;
    } while (iVar3 != 0);
    iVar3 = 0x14;
    puVar2 = (undefined2 *)(param_1 + 0x72);
    do {
      puVar2 = puVar2 + -1;
      iVar3 = iVar3 + -1;
      *puVar2 = 0;
      *(undefined *)(param_1 + 0x72 + iVar3) = 0;
    } while (iVar3 != 0);
    *(undefined2 *)(param_1 + 0x86) = 0;
  }
  local_24 = (undefined *)(param_1 + 0x88);
  *local_24 = 0;
  sub_0801CF88(param_1,param_2);
  return in_lr;
}

