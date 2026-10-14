// sub_080350E8 at 0x080350E8 (thumb)

undefined4 sub_080350E8(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,9);
    *(undefined *)(param_1 + 0x45) = 0;
    bVar1 = *(byte *)(param_1 + 10);
    *(byte *)(param_1 + 10) = bVar1 & 0xdf;
    *(undefined *)(param_1 + 0xe) = 0;
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 0x3500;
    *(undefined *)(param_1 + 0x12) = 0x18;
    *(undefined4 *)(param_1 + 0x58) = 0x200;
    if ((bVar1 & 0x10) == 0) {
      *(undefined *)(param_1 + 0x44) = 1;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
      uVar3 = 0x180;
    }
    else {
      *(undefined *)(param_1 + 0x44) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
      uVar3 = 0xfffffe80;
    }
    *(undefined4 *)(param_1 + 0x54) = uVar3;
    sub_08001EAC(0x24);
    *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf3 | 8;
    sub_0800561C(param_1 + 0x74,&DAT_082ad62c);
  }
  sub_080297C0(param_1);
  iVar4 = *(int *)(param_1 + 0x58) + -0x40;
  *(int *)(param_1 + 0x58) = iVar4;
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + iVar4;
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == -1) {
    *(undefined *)(param_1 + 0xd) = 0x15;
    *(undefined *)(param_1 + 0xe) = 1;
    sub_0800561C(param_1 + 0x74,&DAT_082ad5f4);
  }
  return in_lr;
}

