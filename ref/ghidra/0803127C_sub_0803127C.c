// sub_0803127C at 0x0803127C (thumb)

undefined4 sub_0803127C(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  int local_14;
  int local_10;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,1);
    uVar2 = sub_080941B8(param_1);
    *(undefined4 *)(param_1 + 0x24) = uVar2;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xc9) = 0;
    *(undefined *)(param_1 + 0x12) = 0x20;
    sub_080014E8(&DAT_084b82d0,(DAT_02022ee8 - 0x210) * 0x20 + 0x10000);
    sub_0800179C(&DAT_084b82dc,(DAT_02022f54 - 7) * 0x20 + 0x200);
    local_14 = *(int *)(param_1 + 0x4c) + -0x1000;
    local_10 = *(int *)(param_1 + 0x50) + -0x8000;
    sub_08061D38(param_1,&local_14);
    local_14 = *(int *)(param_1 + 0x4c) + 0x1000;
    sub_08061D38(param_1,&local_14);
  }
  sub_080297C0(param_1);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    *(undefined *)(*(int *)(param_1 + 0x24) + 0x11) = 1;
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 1;
    sub_0800561C(param_1 + 0x74,&DAT_082ad358);
    *(undefined4 *)(param_1 + 0xb0) = 0x8031595;
    sub_080306F4(param_1);
  }
  return in_lr;
}

