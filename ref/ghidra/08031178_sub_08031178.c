// sub_08031178 at 0x08031178 (thumb)

undefined4 sub_08031178(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,10);
    *(undefined *)(param_1 + 0xe) = 0;
    iVar3 = *(int *)(param_1 + 0xb8);
    if (iVar3 + 0x7800 < *(int *)(DAT_0202286c + 0x4c)) {
      *(int *)(param_1 + 0x4c) = iVar3 + 0x1800;
      *(undefined *)(param_1 + 0x44) = 1;
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      *(int *)(param_1 + 0x4c) = iVar3 + 0xd800;
      *(undefined *)(param_1 + 0x44) = 0;
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar1;
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0xbc) + 0x8c00;
    sub_0809139C(param_1 + 0x4c);
  }
  sub_080297C0(param_1);
  iVar3 = *(int *)(param_1 + 0x50) + -0x600;
  *(int *)(param_1 + 0x50) = iVar3;
  iVar2 = *(int *)(param_1 + 0xbc) + 0x2800;
  if (iVar3 < iVar2) {
    *(int *)(param_1 + 0x50) = iVar2;
    *(undefined *)(param_1 + 0xc9) = 0;
    *(undefined *)(param_1 + 0xd) = 0x12;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

