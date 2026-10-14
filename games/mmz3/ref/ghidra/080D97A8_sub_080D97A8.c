// sub_080D97A8 at 0x080D97A8 (thumb)

undefined4 sub_080D97A8(int param_1)

{
  undefined4 in_lr;
  
  if ((DAT_0200243c & 0x10) == 0) {
    *(undefined2 *)(param_1 + 0xbe) =
         *(undefined2 *)(&DAT_0836da6c + (uint)*(byte *)(param_1 + 0x10) * 2);
    *(short *)(param_1 + 0xc0) = *(short *)(&DAT_0836da6c + (uint)*(byte *)(param_1 + 0x10) * 2) + 1
    ;
    *(undefined2 *)(param_1 + 0xc2) =
         *(undefined2 *)(&DAT_0836da6c + (uint)*(byte *)(param_1 + 0x10) * 2);
    *(undefined *)(param_1 + 0xb9) = 1;
    *(undefined *)(param_1 + 0xb8) = 0x30;
    *(undefined2 *)(param_1 + 0xbc) = 0xc0;
  }
  else {
    *(undefined2 *)(param_1 + 0xbe) = 0xbd00;
    *(undefined2 *)(param_1 + 0xc0) = 0xbd00;
    *(undefined2 *)(param_1 + 0xc2) = 0xbd00;
    *(undefined *)(param_1 + 0xb9) = 1;
    *(undefined *)(param_1 + 0xb8) = 0;
    *(undefined2 *)(param_1 + 0xbc) = 0;
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_0800736C(param_1 + 0x74,&DAT_0836daa4,param_1 + 0x54,1);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined *)(param_1 + 0xd) = 1;
  sub_080D9004(param_1);
  return in_lr;
}

