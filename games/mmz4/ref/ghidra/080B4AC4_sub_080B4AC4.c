// sub_080B4AC4 at 0x080B4AC4 (thumb)

undefined4 sub_080B4AC4(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,0xca01);
    uVar2 = sub_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar2;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined *)(param_1 + 0x12) = 0x1e;
    if (*(char *)(param_1 + 0xb7) == '\x01') {
      *(undefined *)(param_1 + 0x12) = 0;
      *(char *)(param_1 + 0xb7) = '\0';
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  cVar1 = sub_08128A9C(*(undefined *)(param_1 + 0x12),10);
  if (cVar1 == '\0') {
    sub_080B52DC(param_1);
  }
  cVar1 = sub_080B52C4(param_1);
  if (cVar1 != '\0') {
    iVar3 = *(int *)(DAT_0202dbf0 + 0x58) - *(int *)(param_1 + 0x58);
    if (iVar3 < 0) {
      iVar3 = *(int *)(param_1 + 0x58) - *(int *)(DAT_0202dbf0 + 0x58);
    }
    if (iVar3 < 0x5000) {
      sub_080B50B4(param_1);
    }
  }
  return in_lr;
}

