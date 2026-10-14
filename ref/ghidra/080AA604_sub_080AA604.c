// sub_080AA604 at 0x080AA604 (thumb)

undefined4 sub_080AA604(int param_1)

{
  bool bVar1;
  undefined2 uVar2;
  byte bVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    *(undefined *)(param_1 + 0xe) = 0;
    *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf3 | 8;
  }
  uVar2 = (&DAT_02023170)[*(byte *)(param_1 + 9)];
  *(undefined2 *)(param_1 + 0x1c) = uVar2;
  *(undefined2 *)(param_1 + 0x42) = uVar2;
  sub_0809C980(param_1);
  bVar1 = *(int *)(param_1 + 0x4c) < *(int *)(DAT_0202286c + 0x4c);
  *(bool *)(param_1 + 0x44) = bVar1;
  if (bVar1) {
    bVar3 = *(byte *)(param_1 + 10) | 0x10;
  }
  else {
    bVar3 = *(byte *)(param_1 + 10) & 0xef;
  }
  *(byte *)(param_1 + 10) = bVar3;
  return in_lr;
}

