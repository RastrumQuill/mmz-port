// sub_080C1B28 at 0x080C1B28 (thumb)

undefined4 sub_080C1B28(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  sub_08012738();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_080127E4(param_1,0x1a01);
  sub_080128D4(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08006DE4(param_1 + 0x74,&DAT_083488f8,param_1 + 0x54,0x20);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0x80c216d;
  *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) | 0xc;
  *(undefined2 *)(param_1 + 0xc0) = 0;
  if (*(char *)(param_1 + 0x11) == '\0') {
    iVar1 = *(int *)(iVar3 + 0x54);
    iVar2 = -0x2200;
  }
  else {
    iVar1 = *(int *)(iVar3 + 0x54);
    iVar2 = 0x2200;
  }
  *(int *)(param_1 + 0x54) = iVar1 + iVar2;
  *(int *)(param_1 + 0x58) = *(int *)(iVar3 + 0x58) + -0x2000;
  *(undefined *)(param_1 + 0xbd) = 1;
  *(undefined *)(param_1 + 0xbe) = 0;
  sub_080718BC(param_1);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0834863c + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_080C1C00(param_1);
  return in_lr;
}

