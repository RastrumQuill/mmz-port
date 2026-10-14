// sub_080DC7F0 at 0x080DC7F0 (thumb)

undefined4 sub_080DC7F0(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0836c2ec + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  uVar1 = DAT_0200243c & 0x40;
  if ((DAT_0200243c & 0x40) == 0) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(uint *)(param_1 + 0x8c) = uVar1;
    *(uint *)(param_1 + 0x90) = uVar1;
    *(char *)(param_1 + 0x94) = (char)uVar1;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0836c2ec + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  else {
    uVar2 = sub_080DC704(param_1,1,0);
    *(undefined4 *)(param_1 + 0x2c) = uVar2;
    *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x54);
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0x13) = 0;
    sub_080DC798(param_1);
  }
  return in_lr;
}

