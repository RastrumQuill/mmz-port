// sub_080DC3D0 at 0x080DC3D0 (thumb)

undefined4 sub_080DC3D0(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0836c2ec + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  if (*(char *)(*(int *)(param_1 + 0x28) + 0x12) == '\x1e') {
    sub_080175BC(param_1);
    *(undefined2 *)(param_1 + 0x50) = 0x200;
    *(undefined2 *)(param_1 + 0x52) = 0x200;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -0x2000;
    *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0x58) + 0x1000;
    *(undefined4 *)(param_1 + 0x5c) = 0xfffffe00;
    uVar1 = DAT_0202f608 * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar1 & 0x7fffffff;
    *(uint *)(param_1 + 0x60) = ((uVar1 * 2 >> 0x11 & 3) + 0x18) * -0x40;
    *(undefined *)(param_1 + 0x11) = 1;
    *(char *)(*(int *)(param_1 + 0x28) + 0x12) = *(char *)(*(int *)(param_1 + 0x28) + 0x12) + '\x01'
    ;
  }
  else {
    sub_0801749C(param_1);
    uVar1 = DAT_0202f608 * 0x343fd + 0x269ec3;
    *(uint *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + (uVar1 * 8 >> 0x13);
    *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0x58) + 0x1000;
    uVar1 = (uVar1 & 0x7fffffff) * 0x343fd + 0x269ec3;
    *(uint *)(param_1 + 0x5c) = -0xc0 - (uVar1 * 2 >> 0x11 & 0x3f);
    uVar1 = (uVar1 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar1 & 0x7fffffff;
    *(uint *)(param_1 + 0x60) = ((uVar1 * 2 >> 0x11 & 3) + 0x18) * -0x40;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_0800736C(param_1 + 0x74,&DAT_0836dde0,param_1 + 0x54,2);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_08017700(param_1,0xe600);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  sub_080DC2B4(param_1);
  return in_lr;
}

