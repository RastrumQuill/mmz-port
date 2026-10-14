// sub_080A5284 at 0x080A5284 (thumb)

undefined4 sub_080A5284(int param_1)

{
  undefined4 in_lr;
  
  if (((int)(uint)(byte)(&DAT_02022ad4)
                        [(int)*(uint *)(&DAT_082b5f3c + (uint)*(byte *)(param_1 + 0x10) * 4) >> 3]
       >> (*(uint *)(&DAT_082b5f3c + (uint)*(byte *)(param_1 + 0x10) * 4) & 7) & 1U) == 0) {
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 6;
    sub_080055FC(param_1 + 0x74,&DAT_082b5f20,param_1 + 0x4c,1);
    *(int *)(param_1 + 0xb4) = param_1;
    *(undefined4 *)(param_1 + 0xb0) = 0x80a65e1;
    *(undefined *)(param_1 + 0x44) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0;
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 0x800;
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    *(undefined *)(param_1 + 0x12) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  return in_lr;
}

