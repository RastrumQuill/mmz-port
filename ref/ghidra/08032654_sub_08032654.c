// sub_08032654 at 0x08032654 (thumb)

undefined4 sub_08032654(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,8);
    *(undefined *)(param_1 + 0x12) = 0x10;
    *(undefined *)(param_1 + 0xe) = 0;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -0x400;
    sub_0807A5F8(param_1,5,0);
    sub_08001EAC(0x37);
    *(undefined2 *)(param_1 + 0xcc) = 0;
    *(undefined *)(*(int *)(param_1 + 0x20) + 0x11) = 1;
  }
  sub_080297C0(param_1);
  iVar3 = *(int *)(param_1 + 0x58) + 0x40;
  *(int *)(param_1 + 0x58) = iVar3;
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + iVar3;
  iVar3 = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  *(int *)(param_1 + 0x4c) = iVar3;
  if (*(char *)(param_1 + 0x73) == '\x03') {
    iVar2 = *(int *)(DAT_0202286c + 0x4c);
    *(bool *)(param_1 + 0x44) = iVar3 < iVar2;
    if (iVar3 < iVar2) {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar1;
    *(undefined *)(param_1 + 0xd) = 0xb;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

