// sub_08020FF4 at 0x08020FF4 (thumb)

undefined4 sub_08020FF4(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xbd) = *(undefined *)(param_1 + 0xe);
  *(undefined2 *)(param_1 + 0xe) = 2;
  sub_08018BE8(param_1,0x9d);
  iVar3 = *(int *)(param_1 + 0x4c);
  iVar2 = 0;
  if (DAT_02004fbc != 0) {
    iVar2 = *(int *)(DAT_02004fbc + 0x40);
  }
  if ((iVar2 != 0) && (iVar2 = *(int *)(iVar2 + 0x4c), iVar3 != iVar2)) {
    *(bool *)(param_1 + 0x44) = iVar3 < iVar2;
    if (iVar3 < iVar2) {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar1;
  }
  sub_08021058(param_1);
  return in_lr;
}

