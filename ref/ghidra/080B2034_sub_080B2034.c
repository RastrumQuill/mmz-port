// sub_080B2034 at 0x080B2034 (thumb)

undefined4 sub_080B2034(int param_1)

{
  undefined4 in_lr;
  
  if (((int)(uint)(byte)(&DAT_02022ad4)
                        [(int)*(uint *)(&DAT_082b6c30 + (uint)*(byte *)(param_1 + 0x10) * 4) >> 3]
       >> (*(uint *)(&DAT_082b6c30 + (uint)*(byte *)(param_1 + 0x10) * 4) & 7) & 1U) == 0) {
    sub_0809C6C4(param_1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
    sub_0809C930(param_1,0);
    sub_0809C980(param_1);
    *(undefined *)(param_1 + 0x44) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef | 4;
    sub_080055FC(param_1 + 0x74,&DAT_082b6c14,param_1 + 0x4c,0x18);
    *(int *)(param_1 + 0xb4) = param_1;
    *(undefined4 *)(param_1 + 0xb0) = 0;
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 0x800;
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 0x800;
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
    sub_080B210C(param_1);
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  return in_lr;
}

