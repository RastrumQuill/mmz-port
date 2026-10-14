// sub_080719C0 at 0x080719C0 (thumb)

undefined4 sub_080719C0(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  undefined4 local_10;
  int local_c;
  
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  local_10 = *(undefined4 *)(param_1 + 0x54);
  local_c = *(int *)(param_1 + 0x58) + -0x1000;
  sub_080B2484(1,&local_10);
  sub_0800471C(0x2a);
  sub_080B7A3C(param_1,&local_10,&DAT_0836337a,4);
  iVar1 = *(int *)(param_1 + 0xb4);
  if (*(char *)(iVar1 + 0x2f) == '\0') {
    *(int *)(iVar1 + 0x20) = *(int *)(iVar1 + 0x20) + 5;
  }
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}

