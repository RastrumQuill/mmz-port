// sub_0806E8D4 at 0x0806E8D4 (thumb)

undefined4 sub_0806E8D4(int param_1)

{
  int iVar1;
  undefined uVar2;
  undefined4 in_lr;
  int local_14;
  int local_10;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_0800249C(0x77,0x2a0);
    sub_08005784(param_1 + 0x74,&DAT_088590a0);
    *(undefined4 *)(param_1 + 100) = 0x268;
    *(undefined *)(param_1 + 0x12) = 0;
    if (*(int *)(DAT_0202dbf0 + 0x58) + -0x1000 < *(int *)(param_1 + 0xb8) + -0x3fff) {
      uVar2 = 2;
      if (*(int *)(DAT_0202dbf0 + 0x54) < *(int *)(param_1 + 0xbc) + 0x6800) {
        uVar2 = 3;
      }
    }
    else {
      uVar2 = 0;
      if (*(int *)(DAT_0202dbf0 + 0x54) < *(int *)(param_1 + 0xbc) + 0x6800) {
        uVar2 = 1;
      }
    }
    *(undefined *)(param_1 + 0x13) = uVar2;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_080025D8(0x77);
  iVar1 = sub_08128954(*(undefined4 *)(param_1 + 100),0x1c);
  if (iVar1 == 0) {
    iVar1 = (uint)*(byte *)(*(int *)(&UNK_088591f8 + (uint)*(byte *)(param_1 + 0x13) * 4) +
                           (uint)*(byte *)(param_1 + 0x12)) * 8;
    local_14 = *(int *)(param_1 + 0xbc) + *(int *)(&DAT_088590f0 + iVar1) + 0x6800;
    local_10 = *(int *)(param_1 + 0xb8) + *(int *)(&DAT_088590f4 + iVar1) + -0x3fff;
    sub_080A553C(param_1,&local_14,1,0);
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
  }
  iVar1 = *(int *)(param_1 + 100) + -1;
  *(int *)(param_1 + 100) = iVar1;
  if (iVar1 == 0) {
    *(undefined *)(param_1 + 0xe) = 1;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

