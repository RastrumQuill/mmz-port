// sub_080A3C7C at 0x080A3C7C (thumb)

undefined4 sub_080A3C7C(int param_1)

{
  bool bVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_0809C930(param_1,1);
    *(undefined *)(param_1 + 0xe) = 0;
    sub_0800561C(param_1 + 0x74,&DAT_082b5d10);
  }
  sub_0809C980(param_1);
  uVar3 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
  *(undefined4 *)(param_1 + 0x50) = uVar3;
  bVar1 = *(int *)(param_1 + 0x4c) < *(int *)(DAT_0202286c + 0x4c);
  *(bool *)(param_1 + 0x44) = bVar1;
  if (bVar1) {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  *(byte *)(param_1 + 10) = bVar2;
  iVar4 = *(int *)(param_1 + 0x4c) - *(int *)(DAT_0202286c + 0x4c);
  if (iVar4 < 0) {
    iVar4 = *(int *)(DAT_0202286c + 0x4c) - *(int *)(param_1 + 0x4c);
  }
  if (0x2000 < iVar4) {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 4) != 0) {
    *(undefined *)(param_1 + 0xd) = 8;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

