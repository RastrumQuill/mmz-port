// sub_080DA6F8 at 0x080DA6F8 (thumb)

undefined4 sub_080DA6F8(int param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 in_lr;
  
  if (((*(char *)(param_1 + 0x10) == '\x16') && (bVar1 = DAT_02002438, (DAT_02002438 & 0x40) == 0))
     || ((*(char *)(param_1 + 0x10) == '\x19' && (bVar1 = DAT_0200243b, (DAT_0200243b & 0x40) == 0))
        )) {
    uVar2 = bVar1 & 0x40;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(uint *)(param_1 + 0x8c) = uVar2;
    *(uint *)(param_1 + 0x90) = uVar2;
    *(char *)(param_1 + 0x94) = (char)uVar2;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0836c2ec + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  else {
    *(undefined2 *)(param_1 + 0xbe) =
         *(undefined2 *)(&DAT_0836da6c + (uint)*(byte *)(param_1 + 0x10) * 2);
    *(short *)(param_1 + 0xc0) = *(short *)(&DAT_0836da6c + (uint)*(byte *)(param_1 + 0x10) * 2) + 2
    ;
    *(undefined2 *)(param_1 + 0xc2) =
         *(undefined2 *)(&DAT_0836da6c + (uint)*(byte *)(param_1 + 0x10) * 2);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_0800736C(param_1 + 0x74,&DAT_0836daa4,param_1 + 0x54,1);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(undefined *)(param_1 + 0xb9) = 1;
    *(undefined *)(param_1 + 0xb8) = 0x30;
    *(undefined2 *)(param_1 + 0xbc) = 0xc0;
    *(undefined *)(param_1 + 0xd) = 1;
    sub_080D9004(param_1);
  }
  return in_lr;
}

