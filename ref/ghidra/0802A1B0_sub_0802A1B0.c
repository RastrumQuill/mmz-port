// sub_0802A1B0 at 0x0802A1B0 (thumb)

undefined4 sub_0802A1B0(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        if (bVar1 != 3) {
          return in_lr;
        }
        sub_080297C0(param_1);
        sub_0801412C(1,param_1 + 0x4c);
        iVar3 = *(int *)(param_1 + 0x54) * 7 >> 3;
        *(int *)(param_1 + 0x54) = iVar3;
        *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) - iVar3;
        if (iVar3 != 0) {
          return in_lr;
        }
        *(undefined *)(param_1 + 0xd) = 0;
        *(undefined *)(param_1 + 0xe) = 0;
        return in_lr;
      }
      sub_080297C0(param_1);
      sub_0801412C(1,param_1 + 0x4c);
      if (*(int *)(param_1 + 0x54) < 0x200) {
        *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 0x20;
      }
      *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) - *(int *)(param_1 + 0x54);
      cVar2 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar2;
      if (cVar2 != '\0') {
        return in_lr;
      }
      sub_0800561C(param_1 + 0x74,&DAT_082acc9c);
      *(undefined *)(param_1 + 0xbb) = 0;
      sub_08029778(param_1,3);
      goto LAB_0802a278;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    sub_08029778(param_1,4);
    *(undefined *)(param_1 + 0xb9) = 2;
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080297C0(param_1);
  if (*(char *)(param_1 + 0x73) != '\x04') {
    return in_lr;
  }
  *(undefined *)(param_1 + 0xbb) = 1;
  sub_08089880((undefined *)(param_1 + 0xbb),param_1 + 0x4c);
  sub_08001EAC(0x12);
  sub_0800561C(param_1 + 0x74,&DAT_082accd4);
  sub_0801412C(3,param_1 + 0x4c);
  *(undefined *)(param_1 + 0x12) = 0x3f;
LAB_0802a278:
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  return in_lr;
}

