// sub_080DF41C at 0x080DF41C (thumb)

undefined4 sub_080DF41C(int param_1)

{
  undefined2 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 in_lr;
  
  if (((*(char *)(param_1 + 0x10) == '\0') && (uVar3 = (uint)DAT_0200243f, (DAT_0200243f & 2) == 0))
     || ((*(char *)(param_1 + 0x10) == '\x01' &&
         (uVar3 = (uint)DAT_0200243b, (DAT_0200243b & 2) == 0)))) {
    uVar3 = uVar3 & 2;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(uint *)(param_1 + 0x8c) = uVar3;
    *(uint *)(param_1 + 0x90) = uVar3;
    *(char *)(param_1 + 0x94) = (char)uVar3;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0836c2ec + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0836c2ec + (uint)*(byte *)(param_1 + 9) * 4) + 4);
    sub_0801749C(param_1);
    sub_080176EC(param_1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
    uVar1 = sub_080E15D8(2);
    sub_08017700(param_1,uVar1);
    sub_080177F4(param_1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    *(undefined *)(param_1 + 0x4c) = 0;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_0800736C(param_1 + 0x74,&DAT_0836e0b8,param_1 + 0x54,8);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    uVar2 = sub_0800A104(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar2;
    *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x54);
    *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0x58) + -0x3000;
    *(undefined *)(param_1 + 0x12) = 0;
    sub_080DF540(param_1);
  }
  return in_lr;
}

