// sub_080B6C74 at 0x080B6C74 (thumb)

undefined4 sub_080B6C74(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 in_lr;
  undefined4 local_10;
  int local_c;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08002B10(0x19b);
    sub_08005784(param_1 + 0x74,&DAT_0886094c);
    local_10 = *(undefined4 *)(DAT_0202dbf0 + 0x54);
    local_c = *(int *)(DAT_0202dbf0 + 0x58) + -0x1800;
    iVar1 = sub_0810CD64(param_1 + 0x54,&local_10);
    *(int *)(param_1 + 0x5c) =
         (int)*(short *)((int)&DAT_08128c10 + (iVar1 * 0x1000000 + 0x40000000U >> 0x17)) << 2;
    *(int *)(param_1 + 0x60) =
         (int)*(short *)((int)&DAT_08128c10 + ((uint)(iVar1 * 0x1000000) >> 0x17)) << 2;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  sub_080B6F78(param_1);
  uVar2 = sub_0801FB14(&DAT_0202e9f8,param_1 + 0x54);
  if (0x1800 < uVar2) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  return in_lr;
}

