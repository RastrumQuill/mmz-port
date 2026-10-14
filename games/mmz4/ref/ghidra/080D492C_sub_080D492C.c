// sub_080D492C at 0x080D492C (thumb)

undefined4 sub_080D492C(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  undefined2 *puVar5;
  undefined4 in_lr;
  
  puVar5 = *(undefined2 **)(param_1 + 0x7c);
  sub_0801CC9C();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801CF00(param_1,*puVar5);
  sub_0801CFF0(param_1);
  if (*(byte *)(param_1 + 0x78) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  uVar3 = *(byte *)(param_1 + 0x78) & 1;
  *(char *)(param_1 + 0x4c) = (char)uVar3;
  pbVar4 = (byte *)(param_1 + 0x4a);
  *pbVar4 = *pbVar4 & 0xef | (byte)(uVar3 << 4);
  if (*(byte *)(param_1 + 0x7a) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xdf;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x20;
  }
  *(byte *)(param_1 + 10) = bVar1;
  uVar3 = *(byte *)(param_1 + 0x7a) & 1;
  *(char *)(param_1 + 0x4d) = (char)uVar3;
  *pbVar4 = *pbVar4 & 0xdf | (byte)(uVar3 << 5);
  if (*(char *)(param_1 + 0x78) == '\0') {
    iVar2 = *(int *)(param_1 + 0x54) + (int)(short)puVar5[2];
  }
  else {
    iVar2 = *(int *)(param_1 + 0x54) - (int)(short)puVar5[2];
  }
  *(int *)(param_1 + 0x54) = iVar2;
  if (*(char *)(param_1 + 0x79) == '\0') {
    uVar3 = DAT_0202dc38 * 0x343fd + 0x269ec3;
    DAT_0202dc38 = uVar3 & 0x7fffffff;
    *(uint *)(param_1 + 0x5c) = (int)(short)puVar5[4] + (uVar3 * 2 >> 0x11 & (int)(short)puVar5[6]);
    iVar2 = (int)(short)puVar5[8];
  }
  else {
    uVar3 = DAT_0202dc38 * 0x343fd + 0x269ec3;
    DAT_0202dc38 = uVar3 & 0x7fffffff;
    *(uint *)(param_1 + 0x5c) = -(uVar3 * 2 >> 0x11 & (int)(short)puVar5[6]) - (int)(short)puVar5[4]
    ;
    iVar2 = -(int)(short)puVar5[8];
  }
  *(int *)(param_1 + 100) = iVar2;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + (int)(short)puVar5[3];
  uVar3 = DAT_0202dc38 * 0x343fd + 0x269ec3;
  DAT_0202dc38 = uVar3 & 0x7fffffff;
  *(uint *)(param_1 + 0x60) = (int)(short)puVar5[5] + (uVar3 * 2 >> 0x11 & (int)(short)puVar5[7]);
  *(int *)(param_1 + 0x68) = (int)(short)puVar5[9];
  *(undefined2 *)(param_1 + 0x74) = puVar5[10];
  *(undefined2 *)(param_1 + 0x76) = puVar5[0xb];
  *(undefined *)(param_1 + 0x12) = *(undefined *)(puVar5 + 1);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 4);
  sub_080D4AB8(param_1);
  return in_lr;
}

