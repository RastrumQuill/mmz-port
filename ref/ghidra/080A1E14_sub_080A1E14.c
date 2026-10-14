// sub_080A1E14 at 0x080A1E14 (thumb)

undefined4 sub_080A1E14(int param_1)

{
  undefined4 in_lr;
  
  if (((int)(uint)(byte)(&DAT_02022ad4)
                        [(int)*(uint *)(&DAT_082b5a4c + (uint)*(byte *)(param_1 + 0x10) * 4) >> 3]
       >> (*(uint *)(&DAT_082b5a4c + (uint)*(byte *)(param_1 + 0x10) * 4) & 7) & 1U) == 0) {
    sub_0809C6C4(param_1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
    sub_0809C930(param_1,0);
    sub_0809C980(param_1);
    *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x4c);
    *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_1 + 0x50);
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 0x800;
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -0x800;
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0;
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 0x18;
    *(undefined **)(param_1 + 0x28) = &DAT_082b5a44;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_080055FC(param_1 + 0x74,&DAT_082b5a28,param_1 + 0x4c,0x40);
    *(int *)(param_1 + 0xb4) = param_1;
    *(undefined4 *)(param_1 + 0xb0) = 0;
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  return in_lr;
}

