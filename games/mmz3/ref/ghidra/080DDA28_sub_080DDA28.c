// sub_080DDA28 at 0x080DDA28 (thumb)

undefined4 sub_080DDA28(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  if (*(char *)(param_1 + 0x10) == '\0') {
    uVar1 = (uint)DAT_0203010a;
    if ((DAT_0203010a & 2) == 0) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
      sub_0800736C(param_1 + 0x74,&DAT_0836defc,param_1 + 0x54,0);
      *(int *)(param_1 + 0xa0) = param_1;
      *(uint *)(param_1 + 0x98) = uVar1 & 2;
      *(undefined4 *)(param_1 + 0xc) = 1;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_0836c2ec + (uint)*(byte *)(param_1 + 9) * 4) + 4);
      sub_080DDB08(param_1);
    }
    else {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_0836c2ec + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
    }
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
    sub_0801749C(param_1);
    sub_08017700(param_1,0x9c00);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0836c2ec + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_080DDC0C(param_1);
  }
  return in_lr;
}

