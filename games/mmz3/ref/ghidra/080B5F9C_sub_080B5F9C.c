// sub_080B5F9C at 0x080B5F9C (thumb)

undefined4 sub_080B5F9C(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined2 *puVar4;
  undefined4 in_lr;
  
  puVar4 = *(undefined2 **)(param_1 + 0x7c);
  sub_0801749C();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_08017700(param_1,*puVar4);
  sub_080177F4(param_1);
  if (*(byte *)(param_1 + 0x78) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  uVar3 = *(byte *)(param_1 + 0x78) & 1;
  *(char *)(param_1 + 0x4c) = (char)uVar3;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar3 << 4);
  if (*(char *)(param_1 + 0x78) == '\0') {
    iVar2 = *(int *)(param_1 + 0x54) + (int)(short)puVar4[2];
  }
  else {
    iVar2 = *(int *)(param_1 + 0x54) - (int)(short)puVar4[2];
  }
  *(int *)(param_1 + 0x54) = iVar2;
  if (*(char *)(param_1 + 0x79) == '\0') {
    uVar3 = DAT_0202f608 * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar3 & 0x7fffffff;
    *(uint *)(param_1 + 0x5c) = (int)(short)puVar4[4] + (uVar3 * 2 >> 0x11 & (int)(short)puVar4[6]);
    iVar2 = (int)(short)puVar4[8];
  }
  else {
    uVar3 = DAT_0202f608 * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar3 & 0x7fffffff;
    *(uint *)(param_1 + 0x5c) = -(uVar3 * 2 >> 0x11 & (int)(short)puVar4[6]) - (int)(short)puVar4[4]
    ;
    iVar2 = -(int)(short)puVar4[8];
  }
  *(int *)(param_1 + 100) = iVar2;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + (int)(short)puVar4[3];
  uVar3 = DAT_0202f608 * 0x343fd + 0x269ec3;
  DAT_0202f608 = uVar3 & 0x7fffffff;
  *(uint *)(param_1 + 0x60) = (int)(short)puVar4[5] + (uVar3 * 2 >> 0x11 & (int)(short)puVar4[7]);
  *(int *)(param_1 + 0x68) = (int)(short)puVar4[9];
  *(undefined2 *)(param_1 + 0x74) = puVar4[10];
  *(undefined2 *)(param_1 + 0x76) = puVar4[0xb];
  *(undefined *)(param_1 + 0x12) = *(undefined *)(puVar4 + 1);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 4);
  sub_080B60F4(param_1);
  return in_lr;
}

