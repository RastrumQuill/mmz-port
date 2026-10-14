// sub_080B0B54 at 0x080B0B54 (thumb)

undefined4 sub_080B0B54(int param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  undefined2 *puVar5;
  undefined4 in_lr;
  
  puVar5 = *(undefined2 **)(param_1 + 0x7c);
  sub_08012580();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_080127E4(param_1,*puVar5);
  sub_080128D4(param_1);
  bVar1 = *(byte *)(param_1 + 0x78);
  if (bVar1 == 0) {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar2;
  *(byte *)(param_1 + 0x4c) = bVar1;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)((bVar1 & 1) << 4);
  if (*(char *)(param_1 + 0x78) == '\0') {
    iVar3 = *(int *)(param_1 + 0x54) + (int)(short)puVar5[2];
  }
  else {
    iVar3 = *(int *)(param_1 + 0x54) - (int)(short)puVar5[2];
  }
  *(int *)(param_1 + 0x54) = iVar3;
  if (*(char *)(param_1 + 0x79) == '\0') {
    uVar4 = DAT_0202e188 * 0x343fd + 0x269ec3;
    DAT_0202e188 = uVar4 & 0x7fffffff;
    *(uint *)(param_1 + 0x5c) = (int)(short)puVar5[4] + (uVar4 * 2 >> 0x11 & (int)(short)puVar5[6]);
    iVar3 = (int)(short)puVar5[8];
  }
  else {
    uVar4 = DAT_0202e188 * 0x343fd + 0x269ec3;
    DAT_0202e188 = uVar4 & 0x7fffffff;
    *(uint *)(param_1 + 0x5c) = -(uVar4 * 2 >> 0x11 & (int)(short)puVar5[6]) - (int)(short)puVar5[4]
    ;
    iVar3 = -(int)(short)puVar5[8];
  }
  *(int *)(param_1 + 100) = iVar3;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + (int)(short)puVar5[3];
  uVar4 = DAT_0202e188 * 0x343fd + 0x269ec3;
  DAT_0202e188 = uVar4 & 0x7fffffff;
  *(uint *)(param_1 + 0x60) = (int)(short)puVar5[5] + (uVar4 * 2 >> 0x11 & (int)(short)puVar5[7]);
  *(int *)(param_1 + 0x68) = (int)(short)puVar5[9];
  *(undefined2 *)(param_1 + 0x74) = puVar5[10];
  *(undefined2 *)(param_1 + 0x76) = puVar5[0xb];
  *(undefined *)(param_1 + 0x12) = *(undefined *)(puVar5 + 1);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 4);
  sub_080B0CAC(param_1);
  return in_lr;
}

