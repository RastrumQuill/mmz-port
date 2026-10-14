// sub_0804351C at 0x0804351C (thumb)

undefined4 sub_0804351C(int param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_lr;
  
  cVar1 = sub_08042DE4();
  if (cVar1 == '\0') {
    if (*(char *)(param_1 + 0xe) == '\0') {
      sub_0800561C(param_1 + 0x74,&DAT_082ae55c);
      sub_08029778(param_1,0xb);
      iVar5 = *(int *)(DAT_0202286c + 0x4c);
      iVar3 = iVar5 - *(int *)(param_1 + 0x4c);
      *(bool *)(param_1 + 0x44) = 0 < iVar3;
      if (iVar5 == *(int *)(param_1 + 0x4c) || iVar3 < 0) {
        bVar2 = *(byte *)(param_1 + 10) & 0xef;
      }
      else {
        bVar2 = *(byte *)(param_1 + 10) | 0x10;
      }
      *(byte *)(param_1 + 10) = bVar2;
      *(int *)(param_1 + 0x54) = -*(int *)(param_1 + 0x54) / 2;
      *(undefined4 *)(param_1 + 0x58) = 0xfffffd00;
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    else if (*(char *)(param_1 + 0xe) != '\x01') {
      return in_lr;
    }
    iVar5 = *(int *)(param_1 + 0x58) + 0x40;
    *(int *)(param_1 + 0x58) = iVar5;
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + iVar5;
    uVar4 = sub_080426A0(param_1);
    if ((uVar4 & 1) != 0) {
      *(undefined *)(param_1 + 0xd) = 7;
      *(undefined *)(param_1 + 0xe) = 0;
    }
    sub_080297C0(param_1);
  }
  return in_lr;
}

