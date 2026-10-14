// sub_0804972C at 0x0804972C (thumb)

undefined4 sub_0804972C(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int *piVar3;
  undefined4 in_lr;
  
  sub_08012580();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_080127D0(param_1);
  sub_080127E4(param_1,0xa828);
  *(undefined *)(param_1 + 0x4c) = 1;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 0x10;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
  sub_0803F9E4(param_1,&DAT_0833afe4,0x60);
  *(undefined4 *)(param_1 + 0x98) = 0x804a9c1;
  *(undefined *)(param_1 + 0xbd) = 0;
  piVar2 = (int *)(param_1 + 200);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(*piVar2 + 0x58);
  piVar3 = (int *)(param_1 + 0xc0);
  *piVar3 = *(int *)(*piVar2 + 0xc0);
  *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(*piVar2 + 0xc4);
  *(int *)(param_1 + 0x54) = *piVar3 + 0x2000;
  uVar1 = sub_080093C4(*piVar3 + 0x2000,*(undefined4 *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0x58) = uVar1;
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x54);
  *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0x58);
  *(int *)(param_1 + 0xd4) = *piVar3 + 0x7800;
  *(int *)(param_1 + 0xd8) = *(int *)(param_1 + 0xb8) + -0x4000;
  *(undefined2 *)(param_1 + 0xde) = 0;
  *(char *)(param_1 + 0xd3) = (char)*(undefined2 *)(param_1 + 0xa4);
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0833a138 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = 0;
  sub_08049820(param_1);
  return in_lr;
}

