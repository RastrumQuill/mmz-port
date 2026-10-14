// sub_080E197C at 0x080E197C (thumb)

undefined4 sub_080E197C(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  sub_080177F4();
  sub_080FE2C0(param_1,*(undefined4 *)(&DAT_0836e448 + (uint)*(byte *)(param_1 + 0xd) * 4));
  if (*(char *)(param_1 + 0xc) == '\x01') {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 100) + -0x7800 + DAT_020302c0;
    iVar1 = *(int *)(param_1 + 0x68) + -0x5000 + DAT_020302c4;
    *(int *)(param_1 + 0x58) = iVar1;
    *(int *)(param_1 + 0x58) =
         iVar1 + *(short *)((int)&DAT_080fe64c + (((uint)*(byte *)(param_1 + 0xc0) << 0x1b) >> 0x17)
                           ) * 4;
  }
  return in_lr;
}

