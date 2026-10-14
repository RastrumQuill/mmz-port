// sub_0806E7D8 at 0x0806E7D8 (thumb)

undefined4 sub_0806E7D8(int param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined4 in_lr;
  
  if ((*(int *)(param_1 + 0xb4) == 0) || (iVar1 = sub_08025794(), iVar1 != 0)) {
    *(int *)(param_1 + 0xb4) = 0;
    puVar2 = &DAT_0836304c;
    if (1 < *(byte *)(param_1 + 0x10)) {
      puVar2 = &DAT_0836307c;
    }
    sub_08007390(param_1 + 0x74,puVar2);
    iVar1 = sub_08063614(param_1);
    if (iVar1 == 0) {
      *(undefined *)(param_1 + 0xd) = 1;
      *(undefined *)(param_1 + 0xe) = 1;
      *(undefined *)(param_1 + 0xbd) = 0;
    }
  }
  if ((*(uint *)(param_1 + 0x8c) & 0x20001) == 0x20001) {
    *(undefined *)(param_1 + 0xd) = 6;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

